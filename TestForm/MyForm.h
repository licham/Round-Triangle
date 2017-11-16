#pragma once

namespace TestForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			checkTrackBars();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(6, 337);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(217, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Намалювати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(241, 478);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Головна панель";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(6, 411);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(229, 62);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Інформаційна пенль";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 17);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Радіус r:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 17);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Радіус R:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox6);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->groupBox5);
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(6, 29);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(229, 376);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Керуюча панель";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label3);
			this->groupBox6->Controls->Add(this->trackBar3);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox6->Location = System::Drawing::Point(6, 231);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(217, 100);
			this->groupBox6->TabIndex = 2;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Сторона C";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Розмір:";
			// 
			// trackBar3
			// 
			this->trackBar3->LargeChange = 1;
			this->trackBar3->Location = System::Drawing::Point(6, 40);
			this->trackBar3->Maximum = 200;
			this->trackBar3->Minimum = 1;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(205, 45);
			this->trackBar3->TabIndex = 2;
			this->trackBar3->Value = 100;
			this->trackBar3->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar_ValueChanged);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->trackBar2);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox5->Location = System::Drawing::Point(6, 125);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(217, 100);
			this->groupBox5->TabIndex = 2;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Сторона B";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Розмір:";
			// 
			// trackBar2
			// 
			this->trackBar2->LargeChange = 1;
			this->trackBar2->Location = System::Drawing::Point(6, 40);
			this->trackBar2->Maximum = 200;
			this->trackBar2->Minimum = 1;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(205, 45);
			this->trackBar2->TabIndex = 2;
			this->trackBar2->Value = 100;
			this->trackBar2->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar_ValueChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->trackBar1);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(6, 26);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(217, 100);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Сторона A";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Розмір:";
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(6, 40);
			this->trackBar1->Maximum = 200;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(205, 45);
			this->trackBar1->TabIndex = 2;
			this->trackBar1->Value = 100;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar_ValueChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(259, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(354, 518);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(625, 542);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Цікава геометрія";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->groupBox1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		};
#pragma endregion
	private: void checkTrackBars() {
		if (trackBar1->Value + trackBar2->Value > trackBar3->Value &&
			trackBar2->Value + trackBar3->Value > trackBar1->Value &&
			trackBar3->Value + trackBar1->Value > trackBar2->Value) {
			button1->Enabled = true;
		} else {
			button1->Enabled = false;
		}
		label1->Text = "Розмір: " + trackBar1->Value.ToString();
		label2->Text = "Розмір: " + trackBar2->Value.ToString();
		label3->Text = "Розмір: " + trackBar3->Value.ToString();
	}

	private: void drawBigCircle(Graphics^ g, PointF^ center, float R) {
		g->DrawEllipse(Pens::Black, center->X - R, center->Y - R, R * 2, R * 2);
	}

	private: void drawTriangle(Graphics^ g, PointF^ center, float a, float b, float c, float R) {
		float min = Math::Min(a, Math::Min(b, c));
		float mid = ((a >= b && a <= c) || (a <= b && a >= c)) ? a : ((b >= a && b <= c) || (b <= a && b >= c)) ? b : c;
		float cos1 = (min * min - R * R - R * R) / (-2 * R * R), cos2 = (mid * mid - R * R - R * R) / (-2 * R * R);
		float sin1 = (float)Math::Sin(Math::Acos(cos1)), sin2 = (float)Math::Sin(Math::Acos(cos2));
		array<PointF>^ points = gcnew array<PointF>(3) {
			PointF(center->X + R, center->Y),
			PointF(center->X + R * cos1, center->Y - R * sin1),
			PointF(center->X + R * cos2, center->Y + R * sin2)
		};
		g->DrawPolygon(Pens::Black, points);
	}
	
	private: void DrawSmallCircle(Graphics^ g, PointF^ center, float a, float b, float c, float r, float R) {
				float min = Math::Min(a, Math::Min(b, c));
				float mid = ((a >= b && a <= c) || (a <= b && a >= c)) ? a : ((b >= a && b <= c) || (b <= a && b >= c)) ? b : c;
				float max = Math::Max(a, Math::Max(b, c));
				float cos1 = (min * min - R * R - R * R) / (-2 * R * R), cos2 = (max * max - min * min - mid * mid) / (-2 * min * mid);
				float sin1 = (float)Math::Sin(Math::Acos(cos1));
				float tan2 = (float)Math::Tan(Math::Acos(cos2) / 2);
				float AM = r / tan2;
				PointF A = PointF(center->X + R, center->Y);
				PointF B = PointF(center->X + R * cos1, center->Y - R * sin1);
				PointF AB_vec = PointF((A.X - B.X) / min, (A.Y - B.Y) / min);
				PointF M = PointF(A.X - AB_vec.X * AM, A.Y - AB_vec.Y * AM);
				PointF MO_vec = PointF(-AB_vec.Y, AB_vec.X);
				PointF O = PointF(M.X + MO_vec.X * r, M.Y + MO_vec.Y * r);
				g->DrawEllipse(Pens::Black, O.X - r, O.Y - r, r * 2, r * 2);
			}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		float a = trackBar1->Value, b = trackBar2->Value, c = trackBar3->Value;
		float R = a / (Math::Sin(Math::Acos( (Math::Pow(a, 2) - Math::Pow(b, 2) - Math::Pow(c, 2)) / (-2 * b * c))) * 2);
		float p = (a + b + c) / 2;
		float r = Math::Sqrt(((p - a) * (p - b) * (p - c)) / p);
		label4->Text = "Радіус R: " + R.ToString();
		label5->Text = "Радіус r: " + r.ToString();
		pictureBox1->Width = Width - pictureBox1->Left;
		pictureBox1->Height = Height - pictureBox1->Top;
		PointF^ center = gcnew PointF(pictureBox1->Width / 2, pictureBox1->Height / 2);
		Bitmap^ bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		Graphics^ g = Graphics::FromImage(bmp);
		g->Clear(Color::White);
		drawBigCircle(g, center, R);
		drawTriangle(g, center, a, b, c, R);
		DrawSmallCircle(g, center, a, b, c, r, R);
		pictureBox1->Image = bmp;
	}
	
	private: System::Void trackBar_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		checkTrackBars();
	}
};
}
