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
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (i_focus == 1)
                name1.Text += '1';
            else
                name2.Text += '1';
        }

        int i_focus = 1;
        double a;
        double b;
        double c;

        private void Form1_Load(object sender, EventArgs e)
        {
            i_focus = 1;
            button10.Enabled = false;
            button11.Enabled = false;
            button12.Enabled = false;
            button13.Enabled = false;
            button14.Enabled = false;
            button15.Enabled = false;
            button16.Enabled = false;
            button18.Enabled = false;
            button17.Enabled = false;
            button20.Enabled = false;
            button22.Enabled = false;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (i_focus == 1)
                name1.Text += '2';
            else
                name2.Text += '2';
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (i_focus == 1)
                name1.Text += '3';
            else
                name2.Text += '3';
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (i_focus == 1)
                name1.Text += '4';
            else
                name2.Text += '4';
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (i_focus == 1)
                name1.Text += '5';
            else
                name2.Text += '5';
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (i_focus == 1)
                name1.Text += '6';
            else
                name2.Text += '6';
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (i_focus == 1)
                name1.Text += '7';
            else
                name2.Text += '7';
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (i_focus == 1)
                name1.Text += '8';
            else
                name2.Text += '8';
        }

        private void button9_Click(object sender, EventArgs e)
        {
            if (i_focus == 1)
                name1.Text += '9';
            else
                name2.Text += '9';
        }

        private void button12_Click(object sender, EventArgs e)
        {
            try
            {
                a = Convert.ToDouble(name1.Text);
            }
            catch
            {
                MessageBox.Show("error");
                return;
                
            }

            b = Convert.ToDouble(name2.Text);
            c = a + b;
            name3.Text = c.ToString();
        }

        private void button15_Click(object sender, EventArgs e)
        {
            try
            {
                a = Convert.ToDouble(name1.Text);
            }
            catch
            {
                MessageBox.Show("error");
                return;

            }

            b = Convert.ToDouble(name2.Text);
            c = a - b;
            name3.Text = c.ToString();
        }

        private void button14_Click(object sender, EventArgs e)
        {
            try
            {
                a = Convert.ToDouble(name1.Text);
            }
            catch
            {
                MessageBox.Show("error");
                return;

            }

            b = Convert.ToDouble(name2.Text);
            c = a * b;
            name3.Text = c.ToString();
        }

        private void button11_Click(object sender, EventArgs e)
        {
            try
            {
                a = Convert.ToDouble(name1.Text);
            }
            catch
            {
                MessageBox.Show("error");
                return;

            }

            b = Convert.ToDouble(name2.Text);
            c = a / b;
            name3.Text = c.ToString();
        }

        private void button10_Click(object sender, EventArgs e)
        {
            try
            {
                a = Convert.ToDouble(name1.Text);
            }
            catch
            {
                MessageBox.Show("error");
                return;
            }

            b = Convert.ToDouble(name2.Text);
            c = Math.Pow(a, b);
            name3.Text = c.ToString();
        }

        private void button13_Click(object sender, EventArgs e)
        {
            if (i_focus ==1)
            {
                try
                {
                    a = Convert.ToDouble(name1.Text);
                }
                catch
                {
                    MessageBox.Show("error");
                    return;
                }
                c = Math.Cos(a);
                name3.Text = c.ToString();

            }
            else
            {
                try
                {
                    b = Convert.ToDouble(name2.Text);
                }
                catch
                {
                    MessageBox.Show("error");
                    return;
                }
                c = Math.Cos(b);
                name3.Text = c.ToString();
            }

        }

       

        private void fokus(object sender, EventArgs e)
        {
            i_focus = 2;
        }

        private void fokus1(object sender, EventArgs e)
        {
            i_focus = 1;
        }

        private void button19_Click(object sender, EventArgs e)
        {
            if (i_focus == 1)
                name1.Text += '0';
            else
                name2.Text += '0';
        }


        private void button17_Click(object sender, EventArgs e)
        {
            {
                if (i_focus == 1)
                {
                    try
                    {
                        a = Convert.ToDouble(name1.Text);
                    }
                    catch
                    {
                        MessageBox.Show("error");
                        return;
                    }
                    c = Math.Sin(a);
                    name3.Text = c.ToString();

                }
                else
                {
                    try
                    {
                        b = Convert.ToDouble(name2.Text);
                    }
                    catch
                    {
                        MessageBox.Show("error");
                        return;
                    }
                    c = Math.Sin(b);
                    name3.Text = c.ToString();
                }

            }

        }

        private void button16_Click(object sender, EventArgs e)
            {
                if (i_focus == 1)
                {
                    try
                    {
                        a = Convert.ToDouble(name1.Text);
                    }
                    catch
                    {
                        MessageBox.Show("error");
                        return;
                    }
                    c = Math.Tan(a);
                    name3.Text = c.ToString();

                }
                else
                {
                    try
                    {
                        b = Convert.ToDouble(name2.Text);
                    }
                    catch
                    {
                        MessageBox.Show("error");
                        return;
                    }
                    c = Math.Tan(b);
                    name3.Text = c.ToString();
                }

            }

        private void button18_Click(object sender, EventArgs e)
        {
            {
                if (i_focus == 1)
                {
                    try
                    {
                        a = Convert.ToDouble(name1.Text);
                    }
                    catch
                    {
                        MessageBox.Show("error");
                        return;
                    }
                    c = Math.Tan(a);
                    name3.Text = c.ToString();

                }
                else
                {
                    try
                    {
                        b = Convert.ToDouble(name2.Text);
                    }
                    catch
                    {
                        MessageBox.Show("error");
                        return;
                    }
                    c = 1/ Math.Tan(b);
                    name3.Text = c.ToString();
                }

            }

        }

        private void name1_TextChanged(object sender, EventArgs e)
        {
            if (name1.Text.Length > 0 && name2.Text.Length > 0)
            {
                button10.Enabled = true;
                button11.Enabled = true;
                button12.Enabled = true;
                button13.Enabled = true;
                button14.Enabled = true;
                button15.Enabled = true;
                button16.Enabled = true;
                button18.Enabled = true;
                button17.Enabled = true;
                button20.Enabled = true;
                button22.Enabled = true;
            }
            else
            {
                button10.Enabled = false;
                button11.Enabled = false;
                button12.Enabled = false;
                button13.Enabled = false;
                button14.Enabled = false;
                button15.Enabled = false;
                button16.Enabled = false;
                button18.Enabled = false;
                button17.Enabled = false;
                button20.Enabled = false;
                button22.Enabled = false;
            }

            if (name1.Text.Length > 0 || name2.Text.Length > 0)
            {
                button10.Enabled = true;
                button11.Enabled = true;
                button12.Enabled = true;
                button13.Enabled = true;
                button14.Enabled = true;
                button15.Enabled = true;
                button16.Enabled = true;
                button18.Enabled = true;
                button17.Enabled = true;
                button20.Enabled = true;
                button22.Enabled = true;
            }
            else
            {
                button10.Enabled = false;
                button11.Enabled = false;
                button12.Enabled = false;
                button13.Enabled = false;
                button14.Enabled = false;
                button15.Enabled = false;
                button16.Enabled = false;
                button18.Enabled = false;
                button17.Enabled = false;
                button20.Enabled = false;
                button22.Enabled = false;
            }

        }

        private void name2_TextChanged(object sender, EventArgs e)
        {
            if (name1.Text. Length>0 && name2.Text.Length >0 )
            {
                button10.Enabled = true;
                button11.Enabled = true;
                button12.Enabled = true;
                button13.Enabled = true;
                button14.Enabled = true;
                button15.Enabled = true;
                button16.Enabled = true;
                button17.Enabled = true;
                button18.Enabled = true;
                button20.Enabled = true;
                button22.Enabled = true;
            }
            else
            {
                button10.Enabled = false;
                button11.Enabled = false;
                button12.Enabled = false;
                button13.Enabled = false;
                button14.Enabled = false;
                button15.Enabled = false;
                button16.Enabled = false;
                button17.Enabled = false;
                button18.Enabled = false;
                button20.Enabled = false;
                button22.Enabled = false;
            }

            if (name1.Text. Length>0 || name2.Text.Length >0 )
            {
                button10.Enabled = true;
                button11.Enabled = true;
                button12.Enabled = true;
                button13.Enabled = true;
                button14.Enabled = true;
                button15.Enabled = true;
                button16.Enabled = true;
                button17.Enabled = true;
                button18.Enabled = true;
                button20.Enabled = true;
                button22.Enabled = true;
            }
            else
            {
                button10.Enabled = false;
                button11.Enabled = false;
                button12.Enabled = false;
                button13.Enabled = false;
                button14.Enabled = false;
                button15.Enabled = false;
                button16.Enabled = false;
                button17.Enabled = false;
                button18.Enabled = false;
                button20.Enabled = false;
                button22.Enabled = false;
            }

        }

        private void button20_Click(object sender, EventArgs e)
        {
            if (i_focus ==1 )
            {
            if (name1.Text.Contains('-'))
            name1.Text = name1.Text.Substring(1, name1.Text.Length -1);
            }
            else 
            name1.Text = "-" + name1.Text;

           

        }

        private void button21_Click(object sender, EventArgs e)
        {
            AboutBox1 a = new AboutBox1();
            a.ShowDialog();
        }

        private void button22_Click(object sender, EventArgs e)
        {
                name1.Text = "";
                name2.Text = "";
                name3.Text = "";
        }

        private void button23_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

    }
}
