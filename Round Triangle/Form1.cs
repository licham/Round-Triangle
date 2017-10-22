using System;
using System.Drawing;
using System.Windows.Forms;


namespace Round_Triangle {
    public partial class Form1 : Form
    {
        float a, b, c, r, R;
        Point center;
        Bitmap bmp;
        Graphics g;

        public Form1() {
            InitializeComponent();  
            label6.Text = trackBar1.Value.ToString();
            label7.Text = trackBar2.Value.ToString();
            label8.Text = trackBar3.Value.ToString();
        }

        private void TrackBarChanged(object sender, EventArgs e) {
            if (trackBar1.Value + trackBar2.Value > trackBar3.Value &&
                trackBar2.Value + trackBar3.Value > trackBar1.Value &&
                trackBar3.Value + trackBar1.Value > trackBar2.Value) {
                button1.Enabled = true;
            } else {
                button1.Enabled = false;
            }
            label6.Text = trackBar1.Value.ToString();
            label7.Text = trackBar2.Value.ToString();
            label8.Text = trackBar3.Value.ToString();
        }

        private void Button1_Click(object sender, EventArgs e) {
            a = trackBar1.Value;
            b = trackBar2.Value;
            c = trackBar3.Value;
            R = (float)(a / (Math.Sin(Math.Acos((a * a - b * b - c * c) / (-2 * b * c))) * 2));
            float p = (a + b + c) / 2;
            r = (float)Math.Sqrt((p - a) * (p - b) * (p - c) / p);
            pictureBox1.Width = Width - pictureBox1.Left;
            pictureBox1.Height = Height - pictureBox1.Top;
            center = new Point(pictureBox1.Width / 2, pictureBox1.Height / 2);
            bmp = new Bitmap(pictureBox1.Width, pictureBox1.Height);
            g = Graphics.FromImage(bmp);
            g.Clear(Color.White);
            label5.Text = ((int)R).ToString();
            label10.Text = ((int)r).ToString();
            DrawBigCircle();
            DrawTriangle();
            DrawSmallCircle();
            pictureBox1.Image = bmp;
        }

        private void DrawBigCircle() {
            g.DrawEllipse(Pens.Black, center.X - R, center.Y - R, R * 2, R * 2);
        }

        private void DrawTriangle() {
            float min = Math.Min(a, Math.Min(b, c));
            float mid = ((a >= b && a <= c) || (a <= b && a >= c)) ? a : ((b >= a && b <= c) || (b <= a && b >= c)) ? b : c;
            float cos1 = (min * min - R * R - R * R) / (-2 * R * R), cos2 = (mid * mid - R * R - R * R) / (-2 * R * R);
            float sin1 = (float)Math.Sin(Math.Acos(cos1)), sin2 = (float)Math.Sin(Math.Acos(cos2));
            PointF[] points = new PointF[] {
                new PointF(center.X + R, center.Y),
                new PointF(center.X + R * cos1, center.Y - R * sin1),
                new PointF(center.X + R * cos2, center.Y + R * sin2)
            };
            g.DrawPolygon(Pens.Black, points);
        }

        private void DrawSmallCircle() {
            float min = Math.Min(a, Math.Min(b, c));
            float mid = ((a >= b && a <= c) || (a <= b && a >= c)) ? a : ((b >= a && b <= c) || (b <= a && b >= c)) ? b : c;
            float max = Math.Max(a, Math.Max(b, c));
            float cos1 = (min * min - R * R - R * R) / (-2 * R * R), cos2 = (max * max - min * min - mid * mid) / (-2 * min * mid);
            float sin1 = (float)Math.Sin(Math.Acos(cos1));
            float tan2 = (float)Math.Tan(Math.Acos(cos2) / 2);
            float AM = r / tan2;
            PointF A = new PointF(center.X + R, center.Y);
            PointF B = new PointF(center.X + R * cos1, center.Y - R * sin1);
            PointF AB_vec = new PointF((A.X - B.X) / min, (A.Y - B.Y) / min);
            PointF M = new PointF(A.X - AB_vec.X * AM, A.Y - AB_vec.Y * AM);
            PointF MO_vec = new PointF(-AB_vec.Y, AB_vec.X);
            PointF O = new PointF(M.X + MO_vec.X * r, M.Y + MO_vec.Y * r);
            g.DrawEllipse(Pens.Black, O.X - r, O.Y - r, r * 2, r * 2);
        }
    }
}
