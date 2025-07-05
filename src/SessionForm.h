#pragma once

#include "MainForm.h"

namespace TaskNTrack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class SessionForm : public System::Windows::Forms::Form
	{
	private:
		String^ loggedInUser;
	//private: void LoadSessions();

	public:
		SessionForm(String^ username)
		{
			InitializeComponent();
			loggedInUser = username;
			LoadSessions();
		}

	protected:
		~SessionForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnCreate;
	private: System::Windows::Forms::TextBox^ txtSessionName;
	private: System::Windows::Forms::ComboBox^ cmbRole;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtBudget;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cmbSessions;
	private: System::Windows::Forms::Button^ btnLoad;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnLogout;
	private: System::ComponentModel::Container^ components;




#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->txtSessionName = (gcnew System::Windows::Forms::TextBox());
			this->cmbRole = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBudget = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmbSessions = (gcnew System::Windows::Forms::ComboBox());
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(67, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(469, 65);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Create New Session";
			// 
			// btnCreate
			// 
			this->btnCreate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreate->Location = System::Drawing::Point(166, 448);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(208, 47);
			this->btnCreate->TabIndex = 1;
			this->btnCreate->Text = L"Create";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &SessionForm::btnCreate_Click);
			/*this->btnCreate->Click += gcnew System::EventHandler(this, &SessionForm::btnCreate_Click_1);*/
			// 
			// txtSessionName
			// 
			this->txtSessionName->Location = System::Drawing::Point(306, 247);
			this->txtSessionName->Name = L"txtSessionName";
			this->txtSessionName->Size = System::Drawing::Size(197, 26);
			this->txtSessionName->TabIndex = 2;
			this->txtSessionName->TextChanged += gcnew System::EventHandler(this, &SessionForm::textBox1_TextChanged);
			// 
			// cmbRole
			// 
			this->cmbRole->FormattingEnabled = true;
			this->cmbRole->Location = System::Drawing::Point(306, 295);
			this->cmbRole->Name = L"cmbRole";
			this->cmbRole->Size = System::Drawing::Size(197, 28);
			this->cmbRole->TabIndex = 3;
			this->cmbRole->SelectedIndexChanged += gcnew System::EventHandler(this, &SessionForm::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(74, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Session Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(74, 306);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Role(Student , Teacher)";
			// 
			// txtBudget
			// 
			this->txtBudget->Location = System::Drawing::Point(306, 356);
			this->txtBudget->Name = L"txtBudget";
			this->txtBudget->Size = System::Drawing::Size(152, 26);
			this->txtBudget->TabIndex = 6;
			this->txtBudget->TextChanged += gcnew System::EventHandler(this, &SessionForm::textBox2_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(74, 362);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Enter Budget:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(674, 121);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(511, 65);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Load Existing Session";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(748, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Sessions:";
			// 
			// cmbSessions
			// 
			this->cmbSessions->FormattingEnabled = true;
			this->cmbSessions->Location = System::Drawing::Point(865, 242);
			this->cmbSessions->Name = L"cmbSessions";
			this->cmbSessions->Size = System::Drawing::Size(197, 28);
			this->cmbSessions->TabIndex = 10;

			// 
			// btnLoad
			// 
			this->btnLoad->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLoad->Location = System::Drawing::Point(853, 335);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(231, 47);
			this->btnLoad->TabIndex = 9;
			this->btnLoad->Text = L"Load";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &SessionForm::btnLoad_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(54, 645);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(136, 33);
			this->btnExit->TabIndex = 13;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &SessionForm::btnExit_Click);
			// 
			// btnLogout
			// 
			this->btnLogout->Location = System::Drawing::Point(213, 645);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(136, 33);
			this->btnLogout->TabIndex = 14;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = true;
			this->btnLogout->Click += gcnew System::EventHandler(this, &SessionForm::btnLogout_Click);
			// 
			// SessionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1323, 748);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cmbSessions);
			this->Controls->Add(this->btnLoad);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtBudget);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cmbRole);
			this->Controls->Add(this->txtSessionName);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->label1);
			this->Name = L"SessionForm";
			this->Text = L"SessionForm";
			this->Load += gcnew System::EventHandler(this, &SessionForm::SessionForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SessionForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: void LoadSessions() {
		cmbSessions->Items->Clear();
		String^ connStr = "Data Source=.;Initial Catalog=TaskNTrackDB;Integrated Security=True";
		SqlConnection^ conn = gcnew SqlConnection(connStr);
		try {
			conn->Open();
			SqlCommand^ cmd = gcnew SqlCommand("SELECT SessionName FROM Sessions WHERE Username=@user", conn);
			cmd->Parameters->AddWithValue("@user", loggedInUser);
			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				cmbSessions->Items->Add(reader["SessionName"]->ToString());
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			conn->Close();
		}
	}

	private: System::Void btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sessionName = txtSessionName->Text;
		String^ role = cmbRole->Text;
		String^ budgetText = txtBudget->Text;

		if (sessionName == "" || role == "" || budgetText == "") {
			MessageBox::Show("Please fill in all fields.");
			return;
		}

		double budget = Convert::ToDouble(budgetText);
		String^ connStr = "Data Source=.;Initial Catalog=TaskNTrackDB;Integrated Security=True";
		SqlConnection^ conn = gcnew SqlConnection(connStr);
		try {
			conn->Open();
			SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO Sessions (Username, SessionName, Role, Budget) VALUES (@u, @s, @r, @b)", conn);
			cmd->Parameters->AddWithValue("@u", loggedInUser);
			cmd->Parameters->AddWithValue("@s", sessionName);
			cmd->Parameters->AddWithValue("@r", role);
			cmd->Parameters->AddWithValue("@b", budget);
			cmd->ExecuteNonQuery();
			MessageBox::Show("Session created successfully!");
			LoadSessions();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			conn->Close();
		}
	}

	private: System::Void btnLoad_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedSession = cmbSessions->Text;
		if (selectedSession == "") {
			MessageBox::Show("Please select a session to load.");
			return;
		}
		MessageBox::Show("Session '" + selectedSession + "' loaded!");
		this->Hide(); // hide current form
		MainForm^ mainForm = gcnew MainForm(loggedInUser, selectedSession);
		mainForm->ShowDialog(); // open as modal
		this->Show(); // return here after closing MainForm
	}

	private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
//private: System::Void btnCreate_Click_1(System::Object^ sender, System::EventArgs^ e) {
//}
};
}
