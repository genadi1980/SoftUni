using Nakov.TurtleGraphics;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TurtlePlay
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void buttondraw_Click(object sender, EventArgs e)
        {
            // Assign delay to visualize the drawing process
            Turtle.Delay = 200;

            
            // Draw a equilateral triangle
            Turtle.Rotate(30);
            Turtle.Forward(200);
            Turtle.Rotate(120);
            Turtle.Forward(200);
            Turtle.Rotate(120);
            Turtle.Forward(200);

            // Draw a line in the triangle

            Turtle.Rotate(-30);
            Turtle.PenUp();
            Turtle.Backward(50);
            Turtle.PenDown();
            Turtle.Backward(100);
            Turtle.PenUp();
            Turtle.Forward(150);
            Turtle.PenDown();
            Turtle.Rotate(30);
        }


        private void button1_Click(object sender, EventArgs e)
        {
            Turtle.Delay = 200;
            for (int i = 0; i < 5; i++)
            {
                
                Turtle.Forward(200);
                Turtle.Rotate(144);
            }
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Turtle.Reset();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (Turtle.ShowTurtle)
            {
                Turtle.ShowTurtle = false;
                this.buttonShowTurtle = "Show Turtle";
            }
        }
    }
}
