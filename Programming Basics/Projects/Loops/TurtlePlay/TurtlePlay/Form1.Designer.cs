namespace TurtlePlay
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.buttondraw = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.ShowHideTurtle = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // buttondraw
            // 
            this.buttondraw.Location = new System.Drawing.Point(12, 12);
            this.buttondraw.Name = "buttondraw";
            this.buttondraw.Size = new System.Drawing.Size(77, 49);
            this.buttondraw.TabIndex = 0;
            this.buttondraw.Text = "Draw";
            this.buttondraw.UseVisualStyleBackColor = true;
            this.buttondraw.Click += new System.EventHandler(this.buttondraw_Click);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(12, 164);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 41);
            this.button1.TabIndex = 1;
            this.button1.Text = "Star";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(13, 67);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(75, 44);
            this.button2.TabIndex = 2;
            this.button2.Text = "Reset";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // ShowHideTurtle
            // 
            this.ShowHideTurtle.Location = new System.Drawing.Point(13, 117);
            this.ShowHideTurtle.Name = "ShowHideTurtle";
            this.ShowHideTurtle.Size = new System.Drawing.Size(75, 41);
            this.ShowHideTurtle.TabIndex = 3;
            this.ShowHideTurtle.Text = "ShowHideTurtle";
            this.ShowHideTurtle.UseVisualStyleBackColor = true;
            this.ShowHideTurtle.Click += new System.EventHandler(this.button3_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(575, 328);
            this.Controls.Add(this.ShowHideTurtle);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.buttondraw);
            this.Name = "Form1";
            this.Text = "Turtle - Graphics example";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button buttondraw;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button ShowHideTurtle;
    }
}

