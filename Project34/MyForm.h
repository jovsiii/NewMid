#pragma once

#include"Filehandling.h"
#include"MyForm1.h"
namespace Project34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Signup->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Signup_MouseUp);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	private: System::Windows::Forms::Label^ lblUser;
	private: System::Windows::Forms::Label^ lblPass;
	private: System::Windows::Forms::TextBox^ txtboxUser;
	private: System::Windows::Forms::TextBox^ txtBoxPass;




	private: System::Windows::Forms::Button^ btnSignin;
	private: System::Windows::Forms::Label^ Signup;
	private: System::Windows::Forms::Label^ label1;







	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->lblPass = (gcnew System::Windows::Forms::Label());
			this->txtboxUser = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->btnSignin = (gcnew System::Windows::Forms::Button());
			this->Signup = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblUser
			// 
			this->lblUser->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->lblUser, L"lblUser");
			this->lblUser->ForeColor = System::Drawing::SystemColors::Desktop;
			this->lblUser->Name = L"lblUser";
			this->lblUser->Click += gcnew System::EventHandler(this, &MyForm::lblUser_Click);
			// 
			// lblPass
			// 
			this->lblPass->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->lblPass, L"lblPass");
			this->lblPass->ForeColor = System::Drawing::SystemColors::Desktop;
			this->lblPass->Name = L"lblPass";
			// 
			// txtboxUser
			// 
			this->txtboxUser->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->txtboxUser, L"txtboxUser");
			this->txtboxUser->ForeColor = System::Drawing::SystemColors::ControlText;
			this->txtboxUser->Name = L"txtboxUser";
			// 
			// txtBoxPass
			// 
			this->txtBoxPass->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->txtBoxPass, L"txtBoxPass");
			this->txtBoxPass->ForeColor = System::Drawing::SystemColors::ControlText;
			this->txtBoxPass->Name = L"txtBoxPass";
			this->txtBoxPass->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// btnSignin
			// 
			this->btnSignin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			resources->ApplyResources(this->btnSignin, L"btnSignin");
			this->btnSignin->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnSignin->Name = L"btnSignin";
			this->btnSignin->UseVisualStyleBackColor = false;
			this->btnSignin->Click += gcnew System::EventHandler(this, &MyForm::btnSignin_Click);
			// 
			// Signup
			// 
			resources->ApplyResources(this->Signup, L"Signup");
			this->Signup->BackColor = System::Drawing::Color::Transparent;
			this->Signup->ForeColor = System::Drawing::SystemColors::Highlight;
			this->Signup->Name = L"Signup";
			this->Signup->Click += gcnew System::EventHandler(this, &MyForm::Signup_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->label1, L"label1");
			this->label1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label1->Name = L"label1";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->lblUser);
			this->panel1->Controls->Add(this->txtboxUser);
			this->panel1->Controls->Add(this->Signup);
			this->panel1->Controls->Add(this->lblPass);
			this->panel1->Controls->Add(this->btnSignin);
			this->panel1->Controls->Add(this->txtBoxPass);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Name = L"label6";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowInTaskbar = false;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close(); 

	}

	private: System::Void lblUser_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSignin_Click(System::Object^ sender, System::EventArgs^ e) {
	Login::login(txtboxUser, txtBoxPass);	
	
	}

	private: System::Void Signup_Click(System::Object^ sender, System::EventArgs^ e) {
		Signup->ForeColor = System::Drawing::Color::Red;

		MyForm1^ signup = gcnew MyForm1();
		signup->ShowDialog();
	}
	private: System::Void Signup_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Signup->ForeColor = System::Drawing::Color::Black;

	}


private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
