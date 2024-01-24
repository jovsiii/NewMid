#pragma once
#include"Filehandling.h"

namespace Project34 {
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbConfirm;











	private: System::Windows::Forms::PictureBox^ pictureBox1;




	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblUser;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ Signup;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbConfirm = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Signup = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// tbUsername
			// 
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbUsername->Location = System::Drawing::Point(43, 367);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(309, 23);
			this->tbUsername->TabIndex = 5;
			// 
			// tbPassword
			// 
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbPassword->Location = System::Drawing::Point(43, 519);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(309, 23);
			this->tbPassword->TabIndex = 7;
			// 
			// tbConfirm
			// 
			this->tbConfirm->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbConfirm->Location = System::Drawing::Point(43, 602);
			this->tbConfirm->Name = L"tbConfirm";
			this->tbConfirm->Size = System::Drawing::Size(309, 23);
			this->tbConfirm->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(101, 279);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(0, 0);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->btnRegister->FlatAppearance->BorderSize = 0;
			this->btnRegister->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnRegister->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnRegister->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnRegister->Location = System::Drawing::Point(80, 674);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(240, 40);
			this->btnRegister->TabIndex = 13;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &MyForm1::btnRegister_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Location = System::Drawing::Point(2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(410, 306);
			this->panel1->TabIndex = 14;
			// 
			// lblUser
			// 
			this->lblUser->BackColor = System::Drawing::Color::Transparent;
			this->lblUser->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Bold));
			this->lblUser->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->lblUser->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->lblUser->Location = System::Drawing::Point(40, 344);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(96, 20);
			this->lblUser->TabIndex = 15;
			this->lblUser->Text = L"Username";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(40, 496);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 20);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Password";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(40, 579);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Confirm Password";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(41, 418);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Email";
			// 
			// tbEmail
			// 
			this->tbEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbEmail->Location = System::Drawing::Point(44, 441);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(308, 23);
			this->tbEmail->TabIndex = 19;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox2->Location = System::Drawing::Point(329, 370);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(16, 18);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox3->Location = System::Drawing::Point(329, 444);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(16, 18);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 23;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox4->Location = System::Drawing::Point(329, 522);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(16, 18);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 24;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox5->Location = System::Drawing::Point(329, 605);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(16, 18);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 25;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox6->Location = System::Drawing::Point(34, 744);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(334, 10);
			this->pictureBox6->TabIndex = 26;
			this->pictureBox6->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label6->Location = System::Drawing::Point(120, 768);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 17);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Already a user\?";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Signup
			// 
			this->Signup->AutoSize = true;
			this->Signup->BackColor = System::Drawing::Color::Transparent;
			this->Signup->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Bold));
			this->Signup->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->Signup->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Signup->Location = System::Drawing::Point(214, 768);
			this->Signup->Name = L"Signup";
			this->Signup->Size = System::Drawing::Size(41, 18);
			this->Signup->TabIndex = 28;
			this->Signup->Text = L"Login";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(414, 820);
			this->ControlBox = false;
			this->Controls->Add(this->Signup);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblUser);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tbConfirm);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbUsername);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		private: System::Void btnRegister_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (Login::reg(tbUsername, tbPassword, tbConfirm)) {
		// Registration succeeded, close the form
		this->Close();
		}
	}
};

}
