#pragma once

#include "Comp.h"
#include "math.h"

namespace Prometheus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

	public: Comp^ comp;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	public: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(148, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(46, 25);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Go";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(549, 181);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(95, 20);
			this->textBox4->TabIndex = 19;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(573, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Pressure 3";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(324, 181);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(95, 20);
			this->textBox3->TabIndex = 17;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(348, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Pressure 2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(94, 181);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(95, 20);
			this->textBox2->TabIndex = 15;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(118, 204);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Pressure 1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Date";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(618, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 29);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(480, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(28, 524);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 17);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Status : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(142, 524);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 17);
			this->label6->TabIndex = 24;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(586, -1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(106, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 45;
			this->pictureBox2->TabStop = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(64, 21);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(78, 20);
			this->dateTimePicker1->TabIndex = 46;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(430, 447);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(95, 20);
			this->textBox8->TabIndex = 54;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(459, 470);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 13);
			this->label9->TabIndex = 53;
			this->label9->Text = L"Torque";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(208, 313);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(95, 20);
			this->textBox5->TabIndex = 52;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(239, 470);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 13);
			this->label7->TabIndex = 51;
			this->label7->Text = L"Speed";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(430, 313);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(95, 20);
			this->textBox6->TabIndex = 50;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(444, 336);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 13);
			this->label8->TabIndex = 49;
			this->label8->Text = L"Temperature";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(208, 447);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(95, 20);
			this->textBox7->TabIndex = 48;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(222, 336);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 13);
			this->label10->TabIndex = 47;
			this->label10->Text = L"Volume Flow";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(195, 184);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(22, 13);
			this->label11->TabIndex = 55;
			this->label11->Text = L"bar";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(425, 184);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 13);
			this->label12->TabIndex = 56;
			this->label12->Text = L"bar";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(650, 184);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 13);
			this->label13->TabIndex = 57;
			this->label13->Text = L"mbar";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(309, 316);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(29, 13);
			this->label14->TabIndex = 58;
			this->label14->Text = L"m³/h";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(531, 316);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(18, 13);
			this->label15->TabIndex = 59;
			this->label15->Text = L"°C";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(309, 450);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 13);
			this->label16->TabIndex = 60;
			this->label16->Text = L"1/min";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(531, 450);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(23, 13);
			this->label17->TabIndex = 61;
			this->label17->Text = L"Nm";
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(692, 566);
			this->ControlBox = false;
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Condition Monitoring Dashboard";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form3::Hide();
				}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ query = "date = '"+this->dateTimePicker1->Text+"T00:00:00+05:30'";
				array<DataRow^>^ myRows = this->comp->pump->Select(query);
				if(myRows->Length > 0)
				{
					this->textBox2->Text = myRows[0]->default[1]->ToString();
					this->textBox3->Text = myRows[0]->default[2]->ToString();
					this->textBox4->Text = myRows[0]->default[3]->ToString();
					this->textBox5->Text = myRows[0]->default[4]->ToString();
					this->textBox6->Text = myRows[0]->default[5]->ToString();
					this->textBox7->Text = myRows[0]->default[6]->ToString();
					this->textBox8->Text = myRows[0]->default[7]->ToString();
					System::Drawing::Graphics^ formGraphics = this->CreateGraphics();
					formGraphics->Clear(this->BackColor);
					int v;
					int p1 = int::Parse(this->textBox2->Text);
					int p2 = int::Parse(this->textBox3->Text);
					int p3 = int::Parse(this->textBox4->Text);
					int p4 = int::Parse(this->textBox5->Text);
					int p5 = int::Parse(this->textBox6->Text);
					int p6 = int::Parse(this->textBox7->Text);
					int p7 = int::Parse(this->textBox8->Text);

					v = ConvRange180(p1,20);
					DrawGauge(50, 135, 167, v);
					v = ConvRange180(p2,15);
					DrawGauge(50, 370, 167, v);
					v = ConvRange180(p3,550);
					DrawGauge(50, 600, 167, v);
					v = ConvRange180(p4,550);
					DrawGauge(50, 249, 299, v);
					v = ConvRange180(p5,70);
					DrawGauge(50, 471, 299, v);
					v = ConvRange180(p6,7000);
					DrawGauge(50, 249, 433, v);
					v = ConvRange180(p7,250);
					DrawGauge(50, 471, 433, v);


					if(p1>11 || p2>10 || p3>500 || p4>450 || p5>70 || p6>6000 || p7>175)
					{
						this->label6->Text = "Pump is not functional";
						this->label6->BackColor = Color::Red;
						Image^ img = Image::FromFile("error.png");
						formGraphics->DrawImage(img, 98, 510);
					}
					else if(p1>9 || p2>8 || p3>400 || p4>400 || p5>60 || p6>5500 || p7>150)
					{
						this->label6->Text = "Warning, Pump is exceeding threshold limits";
						this->label6->BackColor = Color::Yellow;
						Image^ img = Image::FromFile("warning.png");
						formGraphics->DrawImage(img, 98, 510);
					}
					else
					{
						this->label6->Text = "Pump is functional";
						this->label6->BackColor = Color::Lime;
						Image^ img = Image::FromFile("success.png");
						formGraphics->DrawImage(img, 98, 510);
					}
						
				}	
				else
				{
					this->textBox2->Text = "";
					this->textBox3->Text = "";
					this->textBox4->Text = "";
					this->label6->Text = "";
					System::Drawing::Graphics^ formGraphics = this->CreateGraphics();
					formGraphics->Clear(this->BackColor);
					MessageBox::Show( "No data found on this date", "Warning",
					MessageBoxButtons::OK, MessageBoxIcon::Warning );
				}		 
			}
		private: System::Void DrawGauge(int length, int x, int y, int value)
			{
				System::Drawing::Graphics^ formGraphics = this->CreateGraphics();
				Pen^ p = gcnew Pen(Color::Black, 5);
				p->StartCap = LineCap::DiamondAnchor;
				p->EndCap = LineCap::RoundAnchor;
				int x1 = x + (int)(length * -cos(-value * 3.14 / 180));
				int y1 = y + (int)(length *  sin(-value * 3.14 / 180));
				int x2 = x - 63;
				int y2 = y - 60;
				Image^ img = Image::FromFile("gauge.png");
				formGraphics->DrawImage(img, x2, y2);
				formGraphics->DrawLine(p, x1, y1, x, y);
			}
		private: int ConvRange180(int value, int upperlimit)
			{
				 int v = (int)(value*180/upperlimit);
				 if(v > 180)
					 v = 180;
				 return v;
			}
		private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->comp = gcnew Comp();
				 this->comp->read_db();
			}
	};
}
