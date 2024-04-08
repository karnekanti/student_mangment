#pragma once

namespace studentmangment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ student_textbox;
	private: System::Windows::Forms::Button^ refresh_button;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ dbo_textbox;
	private: System::Windows::Forms::TextBox^ gender_textbox;
	private: System::Windows::Forms::TextBox^ phone_textbox;
	private: System::Windows::Forms::TextBox^ email_textbox;
	private: System::Windows::Forms::Button^ save_button;





	private: System::Windows::Forms::Button^ update_button;
	private: System::Windows::Forms::Button^ delete_button;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ studentIdtextBox;
	private: System::Windows::Forms::PictureBox^ Search_pictureBox;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->student_textbox = (gcnew System::Windows::Forms::TextBox());
			this->refresh_button = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dbo_textbox = (gcnew System::Windows::Forms::TextBox());
			this->gender_textbox = (gcnew System::Windows::Forms::TextBox());
			this->phone_textbox = (gcnew System::Windows::Forms::TextBox());
			this->email_textbox = (gcnew System::Windows::Forms::TextBox());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->update_button = (gcnew System::Windows::Forms::Button());
			this->delete_button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->studentIdtextBox = (gcnew System::Windows::Forms::TextBox());
			this->Search_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(187, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"STUDENT";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(8, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"student name";
			// 
			// student_textbox
			// 
			this->student_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->student_textbox->Location = System::Drawing::Point(260, 146);
			this->student_textbox->Name = L"student_textbox";
			this->student_textbox->Size = System::Drawing::Size(178, 33);
			this->student_textbox->TabIndex = 4;
			// 
			// refresh_button
			// 
			this->refresh_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refresh_button->ForeColor = System::Drawing::Color::Red;
			this->refresh_button->Location = System::Drawing::Point(981, 452);
			this->refresh_button->Name = L"refresh_button";
			this->refresh_button->Size = System::Drawing::Size(293, 62);
			this->refresh_button->TabIndex = 5;
			this->refresh_button->Text = L"Refresh student list";
			this->refresh_button->UseVisualStyleBackColor = true;
			this->refresh_button->Click += gcnew System::EventHandler(this, &RegisterForm::refresh_button_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 223);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Dote of birth";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(22, 365);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 29);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Phone no";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(22, 304);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 29);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Gender";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(43, 437);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 29);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Email";
			// 
			// dbo_textbox
			// 
			this->dbo_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dbo_textbox->Location = System::Drawing::Point(260, 227);
			this->dbo_textbox->Name = L"dbo_textbox";
			this->dbo_textbox->Size = System::Drawing::Size(178, 33);
			this->dbo_textbox->TabIndex = 10;
			// 
			// gender_textbox
			// 
			this->gender_textbox->Location = System::Drawing::Point(260, 304);
			this->gender_textbox->Name = L"gender_textbox";
			this->gender_textbox->Size = System::Drawing::Size(178, 26);
			this->gender_textbox->TabIndex = 11;
			// 
			// phone_textbox
			// 
			this->phone_textbox->Location = System::Drawing::Point(260, 369);
			this->phone_textbox->Name = L"phone_textbox";
			this->phone_textbox->Size = System::Drawing::Size(178, 26);
			this->phone_textbox->TabIndex = 12;
			// 
			// email_textbox
			// 
			this->email_textbox->Location = System::Drawing::Point(260, 437);
			this->email_textbox->Name = L"email_textbox";
			this->email_textbox->Size = System::Drawing::Size(178, 26);
			this->email_textbox->TabIndex = 13;
			// 
			// save_button
			// 
			this->save_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_button->ForeColor = System::Drawing::Color::Red;
			this->save_button->Location = System::Drawing::Point(85, 518);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(160, 62);
			this->save_button->TabIndex = 14;
			this->save_button->Text = L"save";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &RegisterForm::save_button_Click);
			// 
			// update_button
			// 
			this->update_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_button->ForeColor = System::Drawing::Color::Red;
			this->update_button->Location = System::Drawing::Point(309, 518);
			this->update_button->Name = L"update_button";
			this->update_button->Size = System::Drawing::Size(160, 62);
			this->update_button->TabIndex = 15;
			this->update_button->Text = L"update";
			this->update_button->UseVisualStyleBackColor = true;
			this->update_button->Click += gcnew System::EventHandler(this, &RegisterForm::update_button_Click);
			// 
			// delete_button
			// 
			this->delete_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_button->ForeColor = System::Drawing::Color::Red;
			this->delete_button->Location = System::Drawing::Point(508, 518);
			this->delete_button->Name = L"delete_button";
			this->delete_button->Size = System::Drawing::Size(160, 62);
			this->delete_button->TabIndex = 17;
			this->delete_button->Text = L"delete";
			this->delete_button->UseVisualStyleBackColor = true;
			this->delete_button->Click += gcnew System::EventHandler(this, &RegisterForm::delete_button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1088, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 29);
			this->label2->TabIndex = 19;
			this->label2->Text = L"student list";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(696, 146);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(791, 305);
			this->dataGridView1->TabIndex = 20;
			// 
			// studentIdtextBox
			// 
			this->studentIdtextBox->Location = System::Drawing::Point(664, 99);
			this->studentIdtextBox->Name = L"studentIdtextBox";
			this->studentIdtextBox->Size = System::Drawing::Size(248, 26);
			this->studentIdtextBox->TabIndex = 21;
			this->studentIdtextBox->Text = L"Enter Your Student Id Here";
			// 
			// Search_pictureBox
			// 
			this->Search_pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Search_pictureBox.Image")));
			this->Search_pictureBox->Location = System::Drawing::Point(949, 87);
			this->Search_pictureBox->Name = L"Search_pictureBox";
			this->Search_pictureBox->Size = System::Drawing::Size(48, 48);
			this->Search_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Search_pictureBox->TabIndex = 22;
			this->Search_pictureBox->TabStop = false;
			this->Search_pictureBox->Click += gcnew System::EventHandler(this, &RegisterForm::Search_pictureBox_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1807, 605);
			this->Controls->Add(this->Search_pictureBox);
			this->Controls->Add(this->studentIdtextBox);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->delete_button);
			this->Controls->Add(this->update_button);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->email_textbox);
			this->Controls->Add(this->phone_textbox);
			this->Controls->Add(this->gender_textbox);
			this->Controls->Add(this->dbo_textbox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->refresh_button);
			this->Controls->Add(this->student_textbox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search_pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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


		//Refresh Method
			void RefreshData() {
				try {
					// Establish connection to the database
					ensureconnection();

					// SQL command to select all data from the student_table
					String^ query = "SELECT * FROM student_table";
					SqlCommand^ command = gcnew SqlCommand(query, connection);

					// Create a DataTable to hold the results
					DataTable^ dataTable = gcnew DataTable();

					// Execute the SQL query and fill the DataTable with the results
					SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
					adapter->Fill(dataTable);

					// Bind the DataTable to the DataGridView
					dataGridView1->DataSource = dataTable;

					// Close the connection
					connection->Close();
				}
				catch (Exception^ ex) {
					// Handle any exceptions that occur during database operations
					MessageBox::Show("Error: " + ex->Message);
				}
			}



		
		//kjjjjhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh

private: System::Void save_button_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ name = student_textbox->Text;
	String^ phoneNumber = phone_textbox->Text;
	String^ dateOfBirth = dbo_textbox->Text;
	String^ email = email_textbox->Text;

	SqlCommand^ command = gcnew SqlCommand();
	command->Connection = connection;
	
	try {
		ensureconnection();

		command->CommandText = "INSERT INTO student_table (name, phone_number, date_of_birth, email) VALUES (@Name, @PhoneNumber, @DateOfBirth, @Email)";
		command->Parameters->AddWithValue("@Name", name);
		command->Parameters->AddWithValue("@PhoneNumber", phoneNumber);
		command->Parameters->AddWithValue("@DateOfBirth", dateOfBirth);
		command->Parameters->AddWithValue("@Email", email);

		command->ExecuteNonQuery();

		MessageBox::Show("Data saved successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		RefreshData();
	}

	catch(SqlException^ex){
		MessageBox::Show("Error saving data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void update_button_Click(System::Object^ sender, System::EventArgs^ e) {
	
	

	// Convert the text entered in the studentIdtextBox to an integer
	int id = System::Convert::ToInt32(studentIdtextBox->Text);

	try {
		// Establish connection to the database
		ensureconnection();

		// SQL command to update student details based on the student ID
		String^ query = "UPDATE student_table SET name = @Name, phone_number = @PhoneNumber, date_of_birth = @DOB, email = @Email WHERE id = @ID";
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		// Add parameters for the update command
		command->Parameters->AddWithValue("@ID", id);
		command->Parameters->AddWithValue("@Name", student_textbox->Text);
		command->Parameters->AddWithValue("@PhoneNumber", phone_textbox->Text);
		command->Parameters->AddWithValue("@DOB", dbo_textbox->Text);
		command->Parameters->AddWithValue("@Email", email_textbox->Text);

		// Execute the SQL update command
		int rowsAffected = command->ExecuteNonQuery();

		// Check if any rows were affected by the update operation
		if (rowsAffected > 0) {
			MessageBox::Show("Update successful");
		}
		else {
			MessageBox::Show("No rows updated. Student ID not found.");
		}

		// Close the connection
		connection->Close();
	}
	catch (Exception^ ex) {
		// Handle any exceptions that occur during database operations
		MessageBox::Show("Error: " + ex->Message);
	}

}

private: System::Void refresh_button_Click(System::Object^ sender, System::EventArgs^ e) {
	

	RefreshData();
}
private: System::Void delete_button_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// Convert the text entered in the studentIdtextBox to an integer
		int id = System::Convert::ToInt32(studentIdtextBox->Text);

	try {
		// Establish connection to the database
		ensureconnection();

		// SQL command to update student details based on the student ID
		String^ query = "DELETE FROM student_table WHERE id = @ID";
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		// Add parameters for the update command
		command->Parameters->AddWithValue("@ID", id);
		

		// Execute the SQL update command
		int rowsAffected = command->ExecuteNonQuery();

		// Check if any rows were affected by the update operation
		if (rowsAffected > 0) {
			MessageBox::Show("Delete successful");
		}
		else {
			MessageBox::Show("No rows updated. Student ID not found.");
		}

		// Close the connection
		connection->Close();
	}
	catch (Exception^ ex) {
		// Handle any exceptions that occur during database operations
		MessageBox::Show("Error: " + ex->Message);
	}
}


private: System::Void Search_pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	

	int id = System::Convert::ToInt32(studentIdtextBox->Text);

	try {
		// Establish connection to the database
		ensureconnection();

		// SQL command to retrieve ticket details based on the ticket ID
		String^ query = "SELECT name, phone_number, date_of_birth, email FROM student_table WHERE id = @ID";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@ID", id);

		// Execute the SQL command and read the data
		SqlDataReader^ reader = command->ExecuteReader();
		if (reader->Read()) {
			// Update the form controls with the retrieved ticket details
			dbo_textbox->Text = reader["date_of_birth"]->ToString();
			phone_textbox->Text = reader["phone_number"]->ToString();
			email_textbox->Text = reader["email"]->ToString();
			student_textbox->Text = reader["name"]->ToString();
			
		}

		// Close the connection
		connection->Close();
	}
	catch (Exception^ ex) {
		// Handle any exceptions that occur during database operations
		MessageBox::Show("Error: " + ex->Message);
	}
}
private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshData();
}

};
}
