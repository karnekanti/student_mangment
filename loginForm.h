#pragma once
#include "RegisterForm.h"
namespace studentmangment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
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
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ login_button;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ user_textBox;

	private: System::Windows::Forms::TextBox^ password_textBox;


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
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->user_textBox = (gcnew System::Windows::Forms::TextBox());
			this->password_textBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// login_button
			// 
			this->login_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_button->ForeColor = System::Drawing::Color::Red;
			this->login_button->Location = System::Drawing::Point(232, 268);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(191, 63);
			this->login_button->TabIndex = 0;
			this->login_button->Text = L"Login";
			this->login_button->UseVisualStyleBackColor = true;
			this->login_button->Click += gcnew System::EventHandler(this, &loginForm::login_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(215, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Admin Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(85, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(85, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"possword";
			// 
			// user_textBox
			// 
			this->user_textBox->Location = System::Drawing::Point(293, 103);
			this->user_textBox->Name = L"user_textBox";
			this->user_textBox->Size = System::Drawing::Size(178, 26);
			this->user_textBox->TabIndex = 4;
			this->user_textBox->TextChanged += gcnew System::EventHandler(this, &loginForm::user_textBox_TextChanged);
			// 
			// password_textBox
			// 
			this->password_textBox->Location = System::Drawing::Point(293, 158);
			this->password_textBox->Name = L"password_textBox";
			this->password_textBox->Size = System::Drawing::Size(178, 26);
			this->password_textBox->TabIndex = 5;
			this->password_textBox->UseSystemPasswordChar = true;
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 343);
			this->Controls->Add(this->password_textBox);
			this->Controls->Add(this->user_textBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->login_button);
			this->Name = L"loginForm";
			this->Text = L"loginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//authontication method
		String^ connectionstring = "Data Source=localhost\\sqlexpress;Initial Catalog=schooldb;Integrated Security=True;";
		SqlConnection^ connection = gcnew SqlConnection(connectionstring);

		void ensureconnection() {
			if (connection->State == ConnectionState::Closed) {
				try {
					connection->Open();
					Console::WriteLine("Connection opened successfully.");
				}
				catch (SqlException^ ex) {
					Console::WriteLine("Error opening connection: " + ex->Message);
				}
			}
			else {
				Console::WriteLine("Connection is already open.");
			}
		}

		bool isuserValid(String^ username, String^ password) {
			String^ query = "SELECT Password FROM logintab WHERE Username = @username";

			try {
				ensureconnection();
				SqlCommand^ cmd = gcnew SqlCommand(query, connection);

				//add parameter
				cmd->Parameters->AddWithValue("@username", username);
				//command execution
				SqlDataReader^ reader = cmd->ExecuteReader();

				if (reader->Read()) { //if thrue then user exist
					String^ dbPassword = safe_cast<String^>(reader["Password"]);

					if (dbPassword == password) {
						MessageBox::Show("Login successful!");
						return true;
					}
					else {
						MessageBox::Show("Incorrect password. Please try again.");
						return false;
					}
				}
				else { // If username doesn't exist

					MessageBox::Show("Username not found.");
					return false;
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
				return false;
			}
			finally {
				connection->Close();

			}

		}


	
private: System::Void login_button_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = user_textBox->Text;
	String^ password = password_textBox->Text;

	// Check if both username and password fields are empty
	if (String::IsNullOrEmpty(username) || String::IsNullOrEmpty(password)) {
		MessageBox::Show("Please enter both username and password.");
		return;
	}

	// Check if username is empty
	if (String::IsNullOrEmpty(username)) {
		MessageBox::Show("Please enter a username.");
		return;
	}

	// Check if password is empty
	if (String::IsNullOrEmpty(password)) {
		MessageBox::Show("Please enter a password.");
		return;
	}

	if (isuserValid(username, password)) {
		//action after user authorised
		this->Hide();
		RegisterForm^registerpage  = gcnew RegisterForm();
		registerpage->ShowDialog();
	}
}
private: System::Void user_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
