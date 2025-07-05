
#pragma once

namespace TaskNTrack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class CreateAccountForm : public System::Windows::Forms::Form
	{
	public:
		CreateAccountForm(void)
		{
			InitializeComponent();
		}

	protected:
		~CreateAccountForm()
		{
			if (components)
			{
				delete components;
			}
		}

		// GUI Controls
	private: System::Windows::Forms::Label^ TITLE;
	private: System::Windows::Forms::Button^ btnCreate;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtConfirm;
	private: System::Windows::Forms::TextBox^ txtAnswer;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ Error;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->TITLE = (gcnew System::Windows::Forms::Label());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtAnswer = (gcnew System::Windows::Forms::TextBox());
			this->txtConfirm = (gcnew System::Windows::Forms::TextBox());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Error = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TITLE
			// 
			this->TITLE->AutoSize = true;
			this->TITLE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Bold));
			this->TITLE->Location = System::Drawing::Point(415, 103);
			this->TITLE->Name = L"TITLE";
			this->TITLE->Size = System::Drawing::Size(279, 60);
			this->TITLE->TabIndex = 0;
			this->TITLE->Text = L"Registration";
			// 
			// btnCreate
			// 
			this->btnCreate->Location = System::Drawing::Point(456, 441);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(193, 40);
			this->btnCreate->TabIndex = 1;
			this->btnCreate->Text = L"Create account";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &CreateAccountForm::btnCreate_Click);
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(425, 228);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(248, 26);
			this->txtUsername->TabIndex = 2;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(425, 276);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(248, 26);
			this->txtPassword->TabIndex = 3;
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// txtAnswer
			// 
			this->txtAnswer->Location = System::Drawing::Point(425, 365);
			this->txtAnswer->Name = L"txtAnswer";
			this->txtAnswer->Size = System::Drawing::Size(248, 26);
			this->txtAnswer->TabIndex = 5;
			// 
			// txtConfirm
			// 
			this->txtConfirm->Location = System::Drawing::Point(425, 321);
			this->txtConfirm->Name = L"txtConfirm";
			this->txtConfirm->Size = System::Drawing::Size(248, 26);
			this->txtConfirm->TabIndex = 4;
			this->txtConfirm->UseSystemPasswordChar = true;
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(479, 513);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(137, 40);
			this->btnBack->TabIndex = 5;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &CreateAccountForm::btnBack_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(275, 327);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Confirm Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(275, 282);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(275, 234);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Username";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(275, 371);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 20);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Security Word";
			// 
			// Error
			// 
			this->Error->AutoSize = true;
			this->Error->ForeColor = System::Drawing::Color::Red;
			this->Error->Location = System::Drawing::Point(421, 411);
			this->Error->Name = L"Error";
			this->Error->Size = System::Drawing::Size(0, 20);
			this->Error->TabIndex = 0;
			// 
			// CreateAccountForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1089, 672);
			this->Controls->Add(this->Error);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->txtConfirm);
			this->Controls->Add(this->txtAnswer);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->TITLE);
			this->Name = L"CreateAccountForm";
			this->Text = L"Create Account";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// ✅ EVENT FUNCTIONS BELOW MUST MATCH THE ONES IN InitializeComponent()

	private: System::Void btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = txtUsername->Text;
		String^ pass = txtPassword->Text;
		String^ confirm = txtConfirm->Text;
		String^ answer = txtAnswer->Text;

		if (username == "" || pass == "" || confirm == "" || answer == "") {
			MessageBox::Show("All fields are required.");
			return;
		}

		if (pass != confirm) {
			MessageBox::Show("Passwords do not match.");
			return;
		}

		String^ connStr = "Data Source=.;Initial Catalog=TaskNTrackDB;Integrated Security=True";
		SqlConnection^ conn = gcnew SqlConnection(connStr);

		try {
			conn->Open();
			SqlCommand^ checkCmd = gcnew SqlCommand("SELECT COUNT(*) FROM Users WHERE Username=@user", conn);
			checkCmd->Parameters->AddWithValue("@user", username);
			int exists = (int)checkCmd->ExecuteScalar();

			if (exists > 0) {
				MessageBox::Show("Username already exists.");
			}
			else {
				SqlCommand^ insertCmd = gcnew SqlCommand(
					"INSERT INTO Users (Username, Password, SecurityAnswer) VALUES (@user, @pass, @ans)", conn);
				insertCmd->Parameters->AddWithValue("@user", username);
				insertCmd->Parameters->AddWithValue("@pass", pass);
				insertCmd->Parameters->AddWithValue("@ans", answer);
				insertCmd->ExecuteNonQuery();

				MessageBox::Show("Account created successfully!");
				this->Close();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			conn->Close();
		}
	}

	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	};
}

