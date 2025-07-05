#pragma once

namespace TaskNTrack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for ResetPasswordForm
	/// </summary>
	public ref class ResetPasswordForm : public System::Windows::Forms::Form
	{
	public:
		ResetPasswordForm(void)
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
		~ResetPasswordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblQuestion;
	private: System::Windows::Forms::Label^ lblNewPass;
	protected:

	protected:


	private: System::Windows::Forms::Label^ lblUser;
	private: System::Windows::Forms::TextBox^ txtNewPass;


	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtAnswer;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnReset;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblQuestion = (gcnew System::Windows::Forms::Label());
			this->lblNewPass = (gcnew System::Windows::Forms::Label());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->txtNewPass = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtAnswer = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(281, 106);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(451, 60);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"\tReset Your Password";
			// 
			// lblQuestion
			// 
			this->lblQuestion->AutoSize = true;
			this->lblQuestion->Location = System::Drawing::Point(272, 286);
			this->lblQuestion->Name = L"lblQuestion";
			this->lblQuestion->Size = System::Drawing::Size(127, 20);
			this->lblQuestion->TabIndex = 1;
			this->lblQuestion->Text = L"Security Answer:";
			// 
			// lblNewPass
			// 
			this->lblNewPass->AutoSize = true;
			this->lblNewPass->Location = System::Drawing::Point(272, 352);
			this->lblNewPass->Name = L"lblNewPass";
			this->lblNewPass->Size = System::Drawing::Size(113, 20);
			this->lblNewPass->TabIndex = 2;
			this->lblNewPass->Text = L"New Password";
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->Location = System::Drawing::Point(272, 223);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(87, 20);
			this->lblUser->TabIndex = 3;
			this->lblUser->Text = L"Username:";
			// 
			// txtNewPass
			// 
			this->txtNewPass->Location = System::Drawing::Point(427, 346);
			this->txtNewPass->Name = L"txtNewPass";
			this->txtNewPass->PasswordChar = '*';
			this->txtNewPass->Size = System::Drawing::Size(245, 26);
			this->txtNewPass->TabIndex = 4;
			this->txtNewPass->TextChanged += gcnew System::EventHandler(this, &ResetPasswordForm::textBox1_TextChanged);
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(427, 217);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(245, 26);
			this->txtUsername->TabIndex = 5;
			// 
			// txtAnswer
			// 
			this->txtAnswer->Location = System::Drawing::Point(427, 283);
			this->txtAnswer->Name = L"txtAnswer";
			this->txtAnswer->Size = System::Drawing::Size(245, 26);
			this->txtAnswer->TabIndex = 6;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(452, 502);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(198, 35);
			this->btnCancel->TabIndex = 7;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ResetPasswordForm::btnCancel_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(427, 424);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(245, 44);
			this->btnReset->TabIndex = 8;
			this->btnReset->Text = L"Reset Password";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &ResetPasswordForm::btnReset_Click);
			// 
			// ResetPasswordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1044, 672);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->txtAnswer);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtNewPass);
			this->Controls->Add(this->lblUser);
			this->Controls->Add(this->lblNewPass);
			this->Controls->Add(this->lblQuestion);
			this->Controls->Add(this->lblTitle);
			this->Name = L"ResetPasswordForm";
			this->Text = L"ResetPasswordForm";
			this->Load += gcnew System::EventHandler(this, &ResetPasswordForm::ResetPasswordForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ResetPasswordForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = txtUsername->Text;
		String^ answer = txtAnswer->Text;
		String^ newPass = txtNewPass->Text;

		if (username == "" || answer == "" || newPass == "") {
			MessageBox::Show("All fields are required.");
			return;
		}

		String^ connStr = "Data Source=.;Initial Catalog=TaskNTrackDB;Integrated Security=True";
		SqlConnection^ conn = gcnew SqlConnection(connStr);

		try {
			conn->Open();
			SqlCommand^ cmd = gcnew SqlCommand("SELECT SecurityAnswer FROM Users WHERE Username=@user", conn);
			cmd->Parameters->AddWithValue("@user", username);
			Object^ result = cmd->ExecuteScalar();

			if (result != nullptr && answer->ToLower() == ((String^)result)->ToLower()) {
				SqlCommand^ updateCmd = gcnew SqlCommand("UPDATE Users SET Password=@pass WHERE Username=@user", conn);
				updateCmd->Parameters->AddWithValue("@pass", newPass);
				updateCmd->Parameters->AddWithValue("@user", username);
				updateCmd->ExecuteNonQuery();

				MessageBox::Show("Password reset successfully!");
				this->Close();
			}
			else {
				MessageBox::Show("Incorrect answer.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			conn->Close();
		}
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
