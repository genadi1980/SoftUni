using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class FormCalculate : Form
    {
        public FormCalculate()
        {
            InitializeComponent();
        }

        private void calculateButton_Click(object sender, EventArgs e)
        {
            try
                { 
            var firstNumber = decimal.Parse(this.firstNumber.Text);
            var secondNumber = decimal.Parse(this.secondNumber.Text);
            var result = firstNumber + secondNumber;
            textBoxSum.Text = result.ToString();
            }
          catch (Exception)
            {
                textBoxSum.Text = "error";
            }
        }
    
        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
