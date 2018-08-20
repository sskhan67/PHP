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

	/// <summary>
	/// Summary for Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		Form5(void)
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
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	public: Comp^ comp;
	private: System::Windows::Forms::Label^  label3;
	public: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form5::typeid));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(298, 34);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(95, 20);
			this->dateTimePicker1->TabIndex = 50;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(263, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 25);
			this->button2->TabIndex = 49;
			this->button2->Text = L"Go";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form5::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(195, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 48;
			this->label1->Text = L"Date From";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(195, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Date To";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(298, 60);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(95, 20);
			this->dateTimePicker2->TabIndex = 52;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(70, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 13);
			this->label3->TabIndex = 53;
			this->label3->Text = L"No of Failure Days";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(180, 177);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 54;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(431, 177);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 56;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(328, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label4->TabIndex = 55;
			this->label4->Text = L"Total No of Days";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(180, 203);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 58;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(70, 206);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 13);
			this->label5->TabIndex = 57;
			this->label5->Text = L"Availability Index";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(431, 203);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 60;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(328, 206);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 13);
			this->label6->TabIndex = 59;
			this->label6->Text = L"Reliability Index";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(195, 89);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 61;
			this->label7->Text = L"Criteria";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(588, -1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(106, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 65;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(482, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 64;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(620, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 29);
			this->button1->TabIndex = 63;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form5::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"Overall", L"Pressure 1", L"Pressure 2", L"Pressure 3", 
				L"Volume Flow", L"Temperature", L"Speed", L"Torque"});
			this->comboBox1->Location = System::Drawing::Point(298, 86);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(95, 21);
			this->comboBox1->TabIndex = 66;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(70, 273);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 13);
			this->label8->TabIndex = 67;
			this->label8->Text = L"Engineer\'s Comments";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(180, 270);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(351, 104);
			this->textBox5->TabIndex = 68;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(249, 381);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 23);
			this->button3->TabIndex = 69;
			this->button3->Text = L"Export to PDF";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(70, 235);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 13);
			this->label9->TabIndex = 70;
			this->label9->Text = L"Status of the Pump";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(180, 235);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 17);
			this->label10->TabIndex = 71;
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(692, 416);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Name = L"Form5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Decision Making Dashboard";
			this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form5_Load(System::Object^  sender, System::EventArgs^  e) {
			 	this->comp = gcnew Comp();
				this->comp->read_db();
				this->comboBox1->Text = "Overall";
			}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				Form5::Hide();
			}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				int qdays, tdays, i;
				double ai, ri, t1, t2;
				String^ query = "date >= '"+this->dateTimePicker1->Text+"T00:00:00+05:30'"
					+" and date <= '"+this->dateTimePicker2->Text+"T00:00:00+05:30'";
				array<DataRow^>^ myRows = this->comp->pump->Select(query);
				if(myRows->Length > 0)
				{
					tdays = myRows->Length;
					qdays = 0;

					for(i=0;i<tdays;i++)
					{
						int p1 = int::Parse(myRows[i]->default[1]->ToString());
						int p2 = int::Parse(myRows[i]->default[2]->ToString());
						int p3 = int::Parse(myRows[i]->default[3]->ToString());
						int p4 = int::Parse(myRows[i]->default[4]->ToString());
						int p5 = int::Parse(myRows[i]->default[5]->ToString());
						int p6 = int::Parse(myRows[i]->default[6]->ToString());
						int p7 = int::Parse(myRows[i]->default[7]->ToString());

						if(this->comboBox1->Text == "Overall")
						{
							if(p1>11 || p2>10 || p3>500 || p4>450 || p5>70 || p6>6000 || p7>175)
							{
								qdays += 1;
							}							
						}
						else if(this->comboBox1->Text == "Pressure 1")
						{
							if(p1>11)
							{
								qdays += 1;
							}
						}
						else if(this->comboBox1->Text == "Pressure 2")
						{
							if(p2>10)
							{
								qdays += 1;
							}
						}
						else if(this->comboBox1->Text == "Pressure 3")
						{
							if(p3>500)
							{
								qdays += 1;
							}
						}
						else if(this->comboBox1->Text == "Volume Flow")
						{
							if(p4>450)
							{
								qdays += 1;
							}
						}
						else if(this->comboBox1->Text == "Temperature")
						{
							if(p5>70)
							{
								qdays += 1;
							}
						}
						else if(this->comboBox1->Text == "Speed")
						{
							if(p6>6000)
							{
								qdays += 1;
							}
						}
						else if(this->comboBox1->Text == "Torque")
						{
							if(p7>175)
							{
								qdays += 1;
							}
						}
					}
					
					ai = (double)(tdays - qdays) / (double)tdays;

					if(qdays == 0)
					{
						ri = 1;
					}
					else
					{
						t1 = - (double)qdays / (double)tdays;
						t2 = - (double)tdays / (double)qdays;
						ri = expf((float)t1) - expf((float)t2);
					}

					//Rounding off to 2 decimals
					ai = floor(ai * 100 + 0.5) / 100;
					ri = floor(ri * 100 + 0.5) / 100;

					this->textBox1->Text = qdays.ToString();
					this->textBox2->Text = tdays.ToString();
					this->textBox3->Text = ai.ToString();
					this->textBox4->Text = ri.ToString();

					if(ri<0.50)
					{
						this->label10->Text = "Pump needs to be replaced";
						this->label10->BackColor = Color::Red;
					}
					else if(ri<0.80)
					{
						this->label10->Text = "Pump needs to be maintained";
						this->label10->BackColor = Color::Yellow;
					}
					else
					{
						this->label10->Text = "Pump is running properly";
						this->label10->BackColor = Color::Lime;
					}
				}
				else
				{
					this->textBox1->Text = "0";
					this->textBox2->Text = "0";
					this->textBox3->Text = "0";
					this->textBox4->Text = "0";
					this->label10->Text   = "";
					MessageBox::Show( "No data maintained on this date range", "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error );	
				}
			}
};
}
