#pragma once

#include "Form3.h"
#include "Form4.h"
#include "Form5.h"

namespace Prometheus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  servicesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  statusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  manageToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  indexToolStripMenuItem;
	public: String^ uname;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->servicesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->indexToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->manageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->servicesToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(692, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// servicesToolStripMenuItem
			// 
			this->servicesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->statusToolStripMenuItem, 
				this->indexToolStripMenuItem, this->manageToolStripMenuItem});
			this->servicesToolStripMenuItem->Name = L"servicesToolStripMenuItem";
			this->servicesToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->servicesToolStripMenuItem->Text = L"Services";
			// 
			// statusToolStripMenuItem
			// 
			this->statusToolStripMenuItem->Name = L"statusToolStripMenuItem";
			this->statusToolStripMenuItem->Size = System::Drawing::Size(227, 22);
			this->statusToolStripMenuItem->Text = L"Condition Monitoring Dashboard";
			this->statusToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::statusToolStripMenuItem_Click);
			// 
			// indexToolStripMenuItem
			// 
			this->indexToolStripMenuItem->Name = L"indexToolStripMenuItem";
			this->indexToolStripMenuItem->Size = System::Drawing::Size(227, 22);
			this->indexToolStripMenuItem->Text = L"Decision Making Dashboard";
			this->indexToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::indexToolStripMenuItem_Click);
			// 
			// manageToolStripMenuItem
			// 
			this->manageToolStripMenuItem->Name = L"manageToolStripMenuItem";
			this->manageToolStripMenuItem->Size = System::Drawing::Size(227, 22);
			this->manageToolStripMenuItem->Text = L"Manage Pump Measurements";
			this->manageToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::manageToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(334, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(273, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Welcome ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(613, 35);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(52, 13);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"( Logout )";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form2::linkLabel1_LinkClicked);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(117, 214);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(450, 128);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(117, 73);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(450, 135);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(692, 416);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Prometheus";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->label1->Text += this->uname;
			 }
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 Form2::Hide();
			 }
	private: System::Void statusToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 Form2::Hide();
				 Form3^ f3 = gcnew Form3();
				 f3->ShowDialog();
				 Form2::Show();
			 }
	private: System::Void manageToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 Form2::Hide();
				 Form4^ f4 = gcnew Form4();
				 f4->ShowDialog();
				 Form2::Show();
			 }
	private: System::Void indexToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 Form2::Hide();
				 Form5^ f5 = gcnew Form5();
				 f5->ShowDialog();
				 Form2::Show();
			 }
};
}
