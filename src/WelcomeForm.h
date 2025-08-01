#pragma once
#include "LoginForm.h"
#include "CreateAccountForm.h"

namespace TaskNTrack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WelcomeForm
	/// </summary>
	public ref class WelcomeForm : public System::Windows::Forms::Form
	{
	public:
		WelcomeForm(void)
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
		~WelcomeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnCreate;
	private: System::Windows::Forms::Button^ btnExit;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WelcomeForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(232, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(592, 65);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Task N Track";
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(343, 272);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(362, 49);
			this->btnLogin->TabIndex = 1;
			this->btnLogin->Text = L"Login to Existing Account";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &WelcomeForm::button1_Click);
			// 
			// btnCreate
			// 
			this->btnCreate->Location = System::Drawing::Point(343, 353);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(362, 49);
			this->btnCreate->TabIndex = 2;
			this->btnCreate->Text = L"Create New Account";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &WelcomeForm::btnCreate_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(438, 454);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(170, 43);
			this->btnExit->TabIndex = 3;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &WelcomeForm::btnExit_Click);
			// 
			// WelcomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1038, 661);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"WelcomeForm";
			this->Text = L"WelcomeForm";
			this->Load += gcnew System::EventHandler(this, &WelcomeForm::WelcomeForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void WelcomeForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//MessageBox::Show("Login button clicked. This will open the LoginForm in the future.", "Login", MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->Hide();
	TaskNTrack::LoginForm^ login = gcnew TaskNTrack::LoginForm();
	login->ShowDialog();
	this->Show();
	}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Thanks For Using Task And Track", "See Ya !!!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	Application::Exit();
}
	   private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		   // Later we will open the LoginForm from here
		   // LoginForm^ loginForm = gcnew LoginForm();
		   // loginForm->ShowDialog();
		   MessageBox::Show("Login button clicked. This will open the LoginForm in the future.", "Login", MessageBoxButtons::OK, MessageBoxIcon::Information);
	   }
private: System::Void btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	TaskNTrack::CreateAccountForm^ createForm = gcnew TaskNTrack::CreateAccountForm();
	createForm->ShowDialog();
	this->Show();
}
};
}
