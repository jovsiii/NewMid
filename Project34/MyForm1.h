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
	private: System::Windows::Forms::Button^ btnCancel;








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
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tbUsername
			// 
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbUsername->Location = System::Drawing::Point(43, 390);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(240, 23);
			this->tbUsername->TabIndex = 5;
			// 
			// tbPassword
			// 
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbPassword->Location = System::Drawing::Point(43, 472);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(240, 23);
			this->tbPassword->TabIndex = 7;
			// 
			// tbConfirm
			// 
			this->tbConfirm->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbConfirm->Location = System::Drawing::Point(43, 549);
			this->tbConfirm->Name = L"tbConfirm";
			this->tbConfirm->Size = System::Drawing::Size(240, 23);
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
			this->btnRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnRegister->FlatAppearance->BorderSize = 0;
			this->btnRegister->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnRegister->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnRegister->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnRegister->Location = System::Drawing::Point(101, 746);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(138, 36);
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
			this->lblUser->Location = System::Drawing::Point(40, 367);
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
			this->label1->Location = System::Drawing::Point(40, 449);
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
			this->label2->Location = System::Drawing::Point(40, 526);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Username";
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnCancel->FlatAppearance->BorderSize = 0;
			this->btnCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCancel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnCancel->Location = System::Drawing::Point(280, 591);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(96, 36);
			this->btnCancel->TabIndex = 12;
			this->btnCancel->Text = L"EXIT";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MyForm1::btnCancel_Click);
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
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblUser);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tbConfirm);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->tbUsername);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
			//formats the component
			Rounded::CurveButton(btnCancel, 20);
			Rounded::CurveButton(btnRegister, 20);
		}
		private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		}
		private: System::Void btnRegister_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (Login::reg(tbUsername, tbPassword, tbConfirm)) {
		// Registration succeeded, close the form
		this->Close();
		}
	}
};

}
