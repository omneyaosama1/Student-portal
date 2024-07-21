#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for year1_R
	/// </summary>
	public ref class year2 : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ op;
	public:
		year2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		year2(System::Windows::Forms::Form^ o)
		{
			op = o;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~year2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;







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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 37);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(624, 260);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &year2::richTextBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(271, 319);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 32);
			this->button1->TabIndex = 2;
			this->button1->Text = L"submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &year2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 327);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &year2::button2_Click);
			// 
			// year2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(648, 374);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"year2";
			this->Text = L"year2";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the values from the text boxes
		String^ saturday = richTextBox1->Text;


		// Create a string containing the data in the desired format

		String^ data = String::Format(saturday);



		// Save the data to a file or use it as needed
		// For example, you can save it to a text file
		String^ filePath = "omnya.txt";
		System::IO::File::WriteAllText(filePath, data);


		// Display a success message
		MessageBox::Show("Course data saved successfully!", "Course Creation");
	}
	
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		op->Show();
	}
};
}
