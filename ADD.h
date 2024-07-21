#pragma once
#include"year1_R.h"
#include"year1_P.h"
#include"year2.h"
#include"year3.h"
#include"year4.h"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ADD
	/// </summary>
	public ref class ADD : public System::Windows::Forms::Form
	{
	public:
		ADD(void)
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
		~ADD()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ADD::typeid));
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::White;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton2->Location = System::Drawing::Point(147, 190);
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(190, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"1st year(probation)";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &ADD::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::White;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton3->Location = System::Drawing::Point(147, 251);
			this->radioButton3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(273, 24);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"2nd year(probation and drop)";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &ADD::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::White;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton4->Location = System::Drawing::Point(147, 318);
			this->radioButton4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(156, 24);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->Text = L"3rd year(drop )";
			this->radioButton4->UseVisualStyleBackColor = false;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &ADD::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::White;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton5->Location = System::Drawing::Point(147, 375);
			this->radioButton5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(171, 24);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->Text = L"4th year(regular)";
			this->radioButton5->UseVisualStyleBackColor = false;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &ADD::radioButton5_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::White;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton1->Location = System::Drawing::Point(147, 127);
			this->radioButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(177, 24);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->Text = L"1st year (regular)";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &ADD::radioButton1_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(113, 105);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, -7);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(513, 566);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &ADD::pictureBox2_Click);
			// 
			// ADD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Brown;
			this->ClientSize = System::Drawing::Size(501, 484);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->pictureBox2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ADD";
			this->Text = L"ADD";
			this->Load += gcnew System::EventHandler(this, &ADD::ADD_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		year1_P^ year = gcnew year1_P(this);
		this->Hide();
		year->Show();
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		year2^ year_2 = gcnew year2(this);
		this->Hide();
		year_2->Show();
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		year3^ year_3 = gcnew year3();
		this->Hide();
		year_3->Show();
	}
	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		year4^ year_4 = gcnew year4();
		this->Hide();
		year_4->Show();
	}
	private: System::Void ADD_Load(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		year1_R^ year = gcnew year1_R(this);
		this->Hide();
		year->Show();
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}