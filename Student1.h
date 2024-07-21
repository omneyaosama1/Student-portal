#pragma once
#include "Student1.h"
#include"Admin.h"
#include<string>
#include<string.h>
#include"year1_Rs.h"
#include"year1_Ps.h"
#include"year2_s.h"
#include"year3s.h"
#include"year4_s.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Student1
	/// </summary>
	public ref class Student1 : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ op;
	public:
		Student1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Student1(System::Windows::Forms::Form^ o)
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
		~Student1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Student1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(324, 365);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Student1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(208, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter Your ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(208, 283);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(248, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Your Password:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightGray;
			this->textBox1->Location = System::Drawing::Point(213, 310);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(334, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->UseSystemPasswordChar = true;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightGray;
			this->textBox2->Location = System::Drawing::Point(213, 216);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(334, 22);
			this->textBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 486);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(76, 36);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Student1::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 4);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(133, 123);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Student1::pictureBox1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-46, -9);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(762, 567);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Student1::pictureBox3_Click);
			// 
			// Student1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 535);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Student1";
			this->Text = L"Student1";
			this->Load += gcnew System::EventHandler(this, &Student1::Student1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		op->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)

	{

		if (textBox2->Text == "nada2205619")
		{
			if (textBox1->Text == "05619")

			{
				MessageBox::Show("Correct!,Access Granted.");
				year1_Rs^ year1rs = gcnew year1_Rs();
				this->Hide();
				year1rs->Show();
			}
			else
			{
				MessageBox::Show("Error");
			}
		}
		else if (textBox2->Text == "hana2200912")
		{
			if (textBox1->Text == "00912")

			{
				MessageBox::Show("Correct!,Access Granted.");
				year1_Ps^ year1rs = gcnew year1_Ps();
				this->Hide();
				year1rs->Show();
			}
			else
			{
				MessageBox::Show("Error");
			}
		}
		else if (textBox2->Text == "omneya2207190")
		{
			if (textBox1->Text == "07190")

			{
				MessageBox::Show("Correct!,Access Granted.");
				year2_s^ year1rs = gcnew year2_s();
				this->Hide();
				year1rs->Show();
			}
			else
			{
				MessageBox::Show("Error");
			}

		}
		else if (textBox2->Text == "yomna2207085")
		{
			if (textBox1->Text == "07085")

			{
				MessageBox::Show("Correct!,Access Granted.");
				year3s^ year1rs = gcnew year3s();
				this->Hide();
				year1rs->Show();
			}
			else
			{
				MessageBox::Show("Error");
			}

		}
		else if (textBox2->Text == "karen2202729")
		{
			if (textBox1->Text == "02729")

			{
				MessageBox::Show("Correct!,Access Granted.");
				year4_s^ year1rs = gcnew year4_s();
				this->Hide();
				year1rs->Show();
			}
			else
			{
				MessageBox::Show("Error");
			}

		}
		else
		{
			MessageBox::Show("Error!, Access Denied");
		}
	}

	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Student1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}