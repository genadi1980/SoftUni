namespace _02JSONstringify
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class Student
    {
        public string Name {get;  set;}

        public int Age { get; set; }

        public int[] Grades { get; set; }
    }


    public class JSONstringify
    {
        public static void Main()
        {
            List<Student> students = new List<Student>();

            string inputLine = Console.ReadLine();

            while (inputLine != "stringify")
            {
                string[] inputParams = inputLine.Split(new[] { ' ', ':', '-', '>', ','}, StringSplitOptions.RemoveEmptyEntries);

                string studentName = inputParams[0];
                int studentAge = int.Parse(inputParams[1]);
                int[] studentGrades = inputParams.Skip(2).Select(int.Parse).ToArray();

                Student newStudent = new Student();

                newStudent.Name = studentName;
                newStudent.Age = studentAge;
                newStudent.Grades = studentGrades;

                students.Add(newStudent);

                inputLine = Console.ReadLine();
            }

            Console.WriteLine(
                "[" +
                string.Join(",", students.Select(x => $"{{name:\"{x.Name}\",age:{x.Age},grades:[{string.Join(", ", x.Grades)}]}}")) +
                "]");                 
                
        }
    }
}
