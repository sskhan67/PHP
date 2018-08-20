#pragma once

namespace Prometheus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Comp
	/// </summary>
	public ref class Comp : public System::Windows::Forms::Form
	{
	public:
		Comp(void)
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
		~Comp()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Data::DataSet^  UserDataSet1;
	public: System::Data::DataTable^  UserLogin;
	public: System::Data::DataColumn^  dataColumn1;
	public: System::Data::DataColumn^  dataColumn2;

	public: int error;

	public: System::Data::DataSet^  PumpDataSet1;
	public: System::Data::DataTable^  pump;
	public: System::Data::DataColumn^  dataColumn3;
	public: System::Data::DataColumn^  dataColumn4;
	public: System::Data::DataColumn^  dataColumn5;
	public: System::Data::DataColumn^  dataColumn6;
	public: System::Data::DataColumn^  dataColumn7;
	public: System::Data::DataColumn^  dataColumn8;
	public: System::Data::DataColumn^  dataColumn9;
	public: System::Data::DataColumn^  dataColumn10;
	public: System::Data::DataColumn^  dataColumn11;

	protected: 

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
			this->UserDataSet1 = (gcnew System::Data::DataSet());
			this->UserLogin = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->PumpDataSet1 = (gcnew System::Data::DataSet());
			this->pump = (gcnew System::Data::DataTable());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->dataColumn6 = (gcnew System::Data::DataColumn());
			this->dataColumn7 = (gcnew System::Data::DataColumn());
			this->dataColumn8 = (gcnew System::Data::DataColumn());
			this->dataColumn9 = (gcnew System::Data::DataColumn());
			this->dataColumn10 = (gcnew System::Data::DataColumn());
			this->dataColumn11 = (gcnew System::Data::DataColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->UserDataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->UserLogin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PumpDataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pump))->BeginInit();
			this->SuspendLayout();
			// 
			// UserDataSet1
			// 
			this->UserDataSet1->DataSetName = L"NewDataSet";
			this->UserDataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->UserLogin});
			// 
			// UserLogin
			// 
			this->UserLogin->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(2) {this->dataColumn1, this->dataColumn2});
			this->UserLogin->TableName = L"UserLogin";
			// 
			// dataColumn1
			// 
			this->dataColumn1->ColumnName = L"uname";
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"upwd";
			// 
			// PumpDataSet1
			// 
			this->PumpDataSet1->DataSetName = L"NewDataSet";
			this->PumpDataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->pump});
			// 
			// pump
			// 
			this->pump->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(9) {this->dataColumn3, this->dataColumn4, this->dataColumn5, 
				this->dataColumn6, this->dataColumn7, this->dataColumn8, this->dataColumn9, this->dataColumn10, this->dataColumn11});
			cli::array< System::String^ >^ __mcTemp__1 = gcnew cli::array< System::String^  >(1) {L"date"};
			this->pump->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__1, true))});
			this->pump->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) {this->dataColumn3};
			this->pump->TableName = L"pump";
			// 
			// dataColumn3
			// 
			this->dataColumn3->AllowDBNull = false;
			this->dataColumn3->ColumnName = L"date";
			this->dataColumn3->DataType = System::DateTime::typeid;
			// 
			// dataColumn4
			// 
			this->dataColumn4->ColumnName = L"pres1";
			this->dataColumn4->DataType = System::Int16::typeid;
			// 
			// dataColumn5
			// 
			this->dataColumn5->ColumnName = L"pres2";
			this->dataColumn5->DataType = System::Int16::typeid;
			// 
			// dataColumn6
			// 
			this->dataColumn6->ColumnName = L"pres3";
			this->dataColumn6->DataType = System::Int16::typeid;
			// 
			// dataColumn7
			// 
			this->dataColumn7->ColumnName = L"volumeflow";
			this->dataColumn7->DataType = System::Int16::typeid;
			// 
			// dataColumn8
			// 
			this->dataColumn8->ColumnName = L"temp";
			this->dataColumn8->DataType = System::Int16::typeid;
			// 
			// dataColumn9
			// 
			this->dataColumn9->ColumnName = L"speed";
			this->dataColumn9->DataType = System::Int16::typeid;
			// 
			// dataColumn10
			// 
			this->dataColumn10->ColumnName = L"torque";
			this->dataColumn10->DataType = System::Int16::typeid;
			// 
			// dataColumn11
			// 
			this->dataColumn11->ColumnName = L"remarks";
			// 
			// Comp
			// 
			this->ClientSize = System::Drawing::Size(292, 266);
			this->Name = L"Comp";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->UserDataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->UserLogin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PumpDataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pump))->EndInit();
			this->ResumeLayout(false);

		}
		public: int read_db()
		{
			String^ ermsg;
			try
			{
				this->UserDataSet1->ReadXml("UserLogin.xml");
				try
				{
					this->PumpDataSet1->ReadXml("pump.xml");
					this->error = 0;
				}
				catch(System::IO::FileNotFoundException^ e)
				{
					ermsg = e->ToString();
					MessageBox::Show( "Pump Database(pump.xml) missing", "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error );
					this->error = 1;
				}
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Login Database(UserLogin.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		
		public: int write_db()
		{
			String^ ermsg;
			try
			{
				this->PumpDataSet1->WriteXml("pump.xml");
				this->error = 0;
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Error in Updating Database", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
#pragma endregion
	};
}
