#pragma once
#include "Comp.h"

namespace Prometheus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox4;
	protected: 
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
			 
	public: Comp^ comp;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form4::typeid));
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
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
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(226, 159);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(95, 20);
			this->textBox4->TabIndex = 27;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(131, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Pressure 3";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(226, 133);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(95, 20);
			this->textBox3->TabIndex = 25;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(131, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Pressure 2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(226, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(95, 20);
			this->textBox2->TabIndex = 23;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(131, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Pressure 1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(131, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Date";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(342, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 25);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Go";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form4::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(618, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 29);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(226, 184);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(95, 20);
			this->textBox5->TabIndex = 35;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(131, 239);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Speed";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(226, 210);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(95, 20);
			this->textBox6->TabIndex = 33;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(131, 213);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 13);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Temperature";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(226, 236);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(95, 20);
			this->textBox7->TabIndex = 31;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(131, 187);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 13);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Volume Flow";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(226, 262);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(95, 20);
			this->textBox8->TabIndex = 39;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(131, 291);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Remarks";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(226, 288);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(95, 20);
			this->textBox9->TabIndex = 37;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(131, 265);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 13);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Torque";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(200, 330);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 25);
			this->button3->TabIndex = 40;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form4::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(134, 330);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 25);
			this->button4->TabIndex = 41;
			this->button4->Text = L"New";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form4::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(266, 330);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 25);
			this->button5->TabIndex = 42;
			this->button5->Text = L"Delete";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form4::button5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(480, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 43;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(586, -1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(106, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 44;
			this->pictureBox2->TabStop = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(226, 80);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(95, 20);
			this->dateTimePicker1->TabIndex = 47;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(327, 114);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(22, 13);
			this->label10->TabIndex = 48;
			this->label10->Text = L"bar";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(327, 140);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(22, 13);
			this->label11->TabIndex = 49;
			this->label11->Text = L"bar";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(327, 166);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(30, 13);
			this->label12->TabIndex = 50;
			this->label12->Text = L"mbar";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(327, 187);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 13);
			this->label13->TabIndex = 51;
			this->label13->Text = L"m³/h";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(327, 217);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(18, 13);
			this->label14->TabIndex = 52;
			this->label14->Text = L"°C";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(327, 243);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 13);
			this->label15->TabIndex = 53;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(327, 243);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 13);
			this->label16->TabIndex = 54;
			this->label16->Text = L"1/min";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(327, 265);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(23, 13);
			this->label17->TabIndex = 55;
			this->label17->Text = L"Nm";
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(692, 416);
			this->ControlBox = false;
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"l";
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
					this->textBox9->Text = myRows[0]->default[8]->ToString();
				}
				else
				{
					clear_fields();
					MessageBox::Show( "No data found on this date", "Warning",
					MessageBoxButtons::OK, MessageBoxIcon::Warning );
				}
			 }
	private: void clear_fields() {
					this->textBox2->Text = "";
					this->textBox3->Text = "";
					this->textBox4->Text = "";
					this->textBox5->Text = "";
					this->textBox6->Text = "";
					this->textBox7->Text = "";
					this->textBox8->Text = "";
					this->textBox9->Text = "";
			 }
private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) {
					this->comp = gcnew Comp();
					this->comp->read_db();
				}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
					this->comp->write_db();
					Form4::Hide();
				}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				String^ query = "date = '"+this->dateTimePicker1->Text+"T00:00:00+05:30'";
				array<DataRow^>^ myRows = this->comp->pump->Select(query);
				if(myRows->Length > 0)
				{
					myRows[0]->BeginEdit();
					if(this->textBox2->Text== "")
					myRows[0]->default[1] = "0";
					else
					myRows[0]->default[1] = this->textBox2->Text;

					if(this->textBox3->Text== "")
					myRows[0]->default[2] = "0";
					else
					myRows[0]->default[2] = this->textBox3->Text;
					
					if(this->textBox4->Text== "")
					myRows[0]->default[3] = "0";
					else
					myRows[0]->default[3] = this->textBox4->Text;
					
					if(this->textBox5->Text== "")
					myRows[0]->default[4] = "0";
					else
					myRows[0]->default[4] = this->textBox5->Text;
					
					if(this->textBox6->Text== "")
					myRows[0]->default[5] = "0";
					else
					myRows[0]->default[5] = this->textBox6->Text;
					
					if(this->textBox7->Text== "")
					myRows[0]->default[6] = "0";
					else
					myRows[0]->default[6] = this->textBox7->Text;
					
					if(this->textBox8->Text== "")
					myRows[0]->default[7] = "0";
					else
					myRows[0]->default[7] = this->textBox8->Text;
					
					myRows[0]->default[8] = this->textBox9->Text;
					myRows[0]->EndEdit();

					clear_fields();
					MessageBox::Show( "Data updated successfully", "Success",
					MessageBoxButtons::OK, MessageBoxIcon::None );
				}
				else
				{
					MessageBox::Show( "No data found on this date", "Warning",
					MessageBoxButtons::OK, MessageBoxIcon::Warning );
				}
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			    String^ query = "date = '"+this->dateTimePicker1->Text+"T00:00:00+05:30'";
				array<DataRow^>^ myRows = this->comp->pump->Select(query);
				if(myRows->Length > 0)
				{
					MessageBox::Show( "Already data maintained on this date", "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error );					
				}
				else
				{
					DataRow^ myr = this->comp->pump->NewRow();
						
					myr->default[0] = this->dateTimePicker1->Text+"T00:00:00+05:30'";
					if(this->textBox2->Text== "")
					myr->default[1] = "0";
					else
					myr->default[1] = this->textBox2->Text;

					if(this->textBox3->Text== "")
					myr->default[2] = "0";
					else
					myr->default[2] = this->textBox3->Text;
					
					if(this->textBox4->Text== "")
					myr->default[3] = "0";
					else
					myr->default[3] = this->textBox4->Text;
					
					if(this->textBox5->Text== "")
					myr->default[4] = "0";
					else
					myr->default[4] = this->textBox5->Text;
					
					if(this->textBox6->Text== "")
					myr->default[5] = "0";
					else
					myr->default[5] = this->textBox6->Text;
					
					if(this->textBox7->Text== "")
					myr->default[6] = "0";
					else
					myr->default[6] = this->textBox7->Text;
					
					if(this->textBox8->Text== "")
					myr->default[7] = "0";
					else
					myr->default[7] = this->textBox8->Text;
					
					myr->default[8] = this->textBox9->Text;
					
					this->comp->pump->Rows->Add(myr);

					clear_fields();
					MessageBox::Show( "New record inserted successfully", "Success",
					MessageBoxButtons::OK, MessageBoxIcon::None );
				}
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ query = "date = '"+this->dateTimePicker1->Text+"T00:00:00+05:30'";
				array<DataRow^>^ myRows = this->comp->pump->Select(query);
				if(myRows->Length > 0)
				{
					this->comp->pump->Rows->Remove(myRows[0]);

					clear_fields();
					MessageBox::Show( "Record data deleted successfully", "Success",
					MessageBoxButtons::OK, MessageBoxIcon::None );
				}
				else
				{
					MessageBox::Show( "No data found on this date", "Warning",
					MessageBoxButtons::OK, MessageBoxIcon::Warning );
				}
		 }
};
}
