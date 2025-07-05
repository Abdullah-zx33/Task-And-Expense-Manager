#pragma once
#include "SessionForm.h"
#include "ResetPasswordForm.h"

namespace TaskNTrack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Windows::Forms;
	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtUsername;
	protected:

	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::TextBox^ txtPassword;
	protected:



	private: System::Windows::Forms::Label^ lblUsername;
	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::LinkLabel^ lnkForgotPass;

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
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lnkForgotPass = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(423, 238);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(238, 26);
			this->txtUsername->TabIndex = 1;
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(449, 471);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(182, 32);
			this->btnBack->TabIndex = 2;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &LoginForm::btnBack_Click);
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(432, 409);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(219, 39);
			this->btnLogin->TabIndex = 3;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(423, 292);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(238, 26);
			this->txtPassword->TabIndex = 4;
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Location = System::Drawing::Point(313, 244);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(87, 20);
			this->lblUsername->TabIndex = 5;
			this->lblUsername->Text = L"Username:";
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(313, 298);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(82, 20);
			this->lblPassword->TabIndex = 6;
			this->lblPassword->Text = L"Password:";
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(255, 128);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(488, 60);
			this->lblTitle->TabIndex = 7;
			this->lblTitle->Text = L"Login to Your Account";
			// 
			// lnkForgotPass
			// 
			this->lnkForgotPass->ActiveLinkColor = System::Drawing::Color::Lime;
			this->lnkForgotPass->AutoSize = true;
			this->lnkForgotPass->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->lnkForgotPass->Location = System::Drawing::Point(419, 356);
			this->lnkForgotPass->Name = L"lnkForgotPass";
			this->lnkForgotPass->Size = System::Drawing::Size(138, 20);
			this->lnkForgotPass->TabIndex = 8;
			this->lnkForgotPass->TabStop = true;
			this->lnkForgotPass->Text = L"Forgot Password\?";
			this->lnkForgotPass->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::lnkForgotPass_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1035, 676);
			this->Controls->Add(this->lnkForgotPass);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->lblUsername);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->txtUsername);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ username = txtUsername->Text;
		String^ password = txtPassword->Text;

		if (username == "" || password == "") {
			MessageBox::Show("Please enter both username and password.");
			return;
		}

		String^ connStr = "Data Source=.;Initial Catalog=TaskNTrackDB;Integrated Security=True"; // update if needed
		SqlConnection^ conn = gcnew SqlConnection(connStr);

		try {
			conn->Open();
			String^ query = "SELECT COUNT(*) FROM Users WHERE Username=@user AND Password=@pass";
			SqlCommand^ cmd = gcnew SqlCommand(query, conn);
			cmd->Parameters->AddWithValue("@user", username);
			cmd->Parameters->AddWithValue("@pass", password);

			int count = (int)cmd->ExecuteScalar();
			if (count == 1) {
				MessageBox::Show("Login successful!","Success",MessageBoxButtons::OK);

				// Store logged-in user if needed
				// Open session form here
				this->Hide();
				SessionForm^ sessionForm = gcnew SessionForm(username);
				sessionForm->ShowDialog();
				this->Show();
			}
			else {
				MessageBox::Show("Invalid username or password.","Error",MessageBoxButtons::RetryCancel);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			conn->Close();
		}

	}
private: System::Void lnkForgotPass_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Hide();
	ResetPasswordForm^ resetForm = gcnew ResetPasswordForm();
	resetForm->ShowDialog();
	this->Show();

}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
