namespace CatsServer
{
    using Data;
    using Infrastructure;
    using Microsoft.AspNetCore.Builder;
    using Microsoft.AspNetCore.Hosting;
    using Microsoft.AspNetCore.Http;
    using Microsoft.Extensions.DependencyInjection;
    using Microsoft.EntityFrameworkCore;
    using System.Linq;
    using System.Threading.Tasks;

    public class Startup
    {        
        public void ConfigureServices(IServiceCollection services)
        {
            services.AddDbContext<CatsDbContext>(options =>
                        options.UseSqlServer(@"Server=(localdb)\MSSQLLocalDB;Database=CatsServerDb;Integrated Security=true"));
        }
                
        public void Configure(IApplicationBuilder app, IHostingEnvironment env)
        {
            app.Use((context, next) =>
            {
                context.RequestServices.GetRequiredService<CatsDbContext>().Database.Migrate();
                return next();
            });

            app.UseStaticFiles();

            app.Use((context, next) => 
            {
                context.Response.Headers.Add("Content-Type", "text/html");
                return next();
            });

            app.MapWhen(ctx => ctx.Request.Path.Value == "/"
                    && ctx.Request.Method == HttpMethod.Get, 
            home =>
            {
                home.Run(async (context) =>
                {
                    await context.Response.WriteAsync($"<h1>{env.ApplicationName}</h1>");

                    var db = context.RequestServices.GetRequiredService<CatsDbContext>();

                    var catData = db
                    .Cats
                    .Select(c => new
                    {
                        c.Id,
                        c.Name
                    })
                    .ToList();

                    await context.Response.WriteAsync("<ul>");
                    foreach (var cat in catData)
                    {
                        await context.Response.WriteAsync($@"<li><a href=""/cats/{cat.Id}"">{cat.Name}</li>");
                    }
                    await context.Response.WriteAsync("</ul");

                    await context.Response.WriteAsync(@"
                            <from action=""/cat/add""> 
                                <input type=""submit"" value=""Add Cat"" />
                            </form>");
                });

                app.MapWhen(req => req.Request.Path.Value == "/cat/add"
                        && req.Request.Method == HttpMethod.Get,
                        catAdd =>
                        {
                            catAdd.Run(context =>
                            {
                                context.Response.StatusCode = 302;
                                context.Response.Headers.Add("Location", "cats-add-form.html");
                                return Task.CompletedTask;
                            });
                        });
            });
            app.Run(async (context) =>
            {
                context.Response.StatusCode = 404;
                await context.Response.WriteAsync("Page was not found");
            });
        }
    }
}
