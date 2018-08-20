#pragma once

#include "Comp.h"
#include "About.h"
#include "Form2.h"

namespace Prometheus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutUsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewHelpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  contactUsToolStripMenuItem;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutUsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewHelpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactUsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(227, 113);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(230, 156);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Login";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(81, 110);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 24);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(89, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(108, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"pass1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(89, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"user1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User Name";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(692, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->viewHelpToolStripMenuItem, 
				this->aboutUsToolStripMenuItem, this->contactUsToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutUsToolStripMenuItem
			// 
			this->aboutUsToolStripMenuItem->Name = L"aboutUsToolStripMenuItem";
			this->aboutUsToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aboutUsToolStripMenuItem->Text = L"About Us";
			this->aboutUsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutUsToolStripMenuItem_Click);
			// 
			// viewHelpToolStripMenuItem
			// 
			this->viewHelpToolStripMenuItem->Name = L"viewHelpToolStripMenuItem";
			this->viewHelpToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->viewHelpToolStripMenuItem->Text = L"View Help";
			// 
			// contactUsToolStripMenuItem
			// 
			this->contactUsToolStripMenuItem->Name = L"contactUsToolStripMenuItem";
			this->contactUsToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->contactUsToolStripMenuItem->Text = L"Contact Us";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(692, 416);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Prometheus";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				Comp^ comp = gcnew Comp();
				if(comp->read_db() == 0)
				{
					String^ uname;
					String^ upwd;
					String^ query;
					uname = this->textBox1->Text;
					upwd  = this->textBox2->Text;
					query = "uname = '"+uname+"'";
					array<DataRow^>^ myRows = comp->UserLogin->Select(query);
					if(myRows->Length > 0)
					{
						if(myRows[0]->default[1]->ToString() == upwd)
						{
							this->textBox1->Text = "";
							this->textBox2->Text = "";
							Form1::Hide();
							Form2^ f2 = gcnew Form2();
							f2->uname = uname;
							f2->ShowDialog();
							Form1::Show();
						}
						else
						{
							MessageBox::Show( "Invalid password. Please try again.", "Login Error",
							MessageBoxButtons::OK, MessageBoxIcon::Error );						
						}
					}
					else
					{
						MessageBox::Show( "Invalid user name. Contact Administrator for new access.", "Login Error",
						MessageBoxButtons::OK, MessageBoxIcon::Exclamation );						
					}
				}
			 }
	private: System::Void aboutUsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				About^ ab = gcnew About();
				ab->ShowDialog();	
			 }
};
}

