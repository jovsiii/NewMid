#pragma once

#include "MenuDrinkOne.h"
#include "CappuccinoOrder.h"



namespace Project34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
		{
			InitializeComponent();\
			//
			//TODO: Add the constructor code here
			//
		}
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblUsername;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ PBcappuccino;
	private: System::Windows::Forms::PictureBox^ PBmochaFrappuccino;
	private: System::Windows::Forms::PictureBox^ PBcaffeLatte;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ pnlBS3;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ pnlBS1;
	private: System::Windows::Forms::Panel^ pnlBS2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->PBcappuccino = (gcnew System::Windows::Forms::PictureBox());
			this->PBmochaFrappuccino = (gcnew System::Windows::Forms::PictureBox());
			this->PBcaffeLatte = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlBS3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pnlBS1 = (gcnew System::Windows::Forms::Panel());
			this->pnlBS2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBcappuccino))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBmochaFrappuccino))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBcaffeLatte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->pnlBS3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 17, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(42, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hi! ";
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->BackColor = System::Drawing::Color::Transparent;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Calibri", 17, System::Drawing::FontStyle::Bold));
			this->lblUsername->ForeColor = System::Drawing::SystemColors::Control;
			this->lblUsername->Location = System::Drawing::Point(75, 27);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(116, 28);
			this->lblUsername->TabIndex = 2;
			this->lblUsername->Text = L"Username,";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(8, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"What are you waiting for\?";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(24, 23);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(356, 27);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 25);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 90);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(374, 33);
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(8, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 21);
			this->label3->TabIndex = 9;
			this->label3->Text = L"New Releases";
			// 
			// PBcappuccino
			// 
			this->PBcappuccino->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBcappuccino.Image")));
			this->PBcappuccino->Location = System::Drawing::Point(12, 168);
			this->PBcappuccino->Name = L"PBcappuccino";
			this->PBcappuccino->Size = System::Drawing::Size(115, 182);
			this->PBcappuccino->TabIndex = 10;
			this->PBcappuccino->TabStop = false;
			this->PBcappuccino->Click += gcnew System::EventHandler(this, &Home::PBcappuccino_Click);
			// 
			// PBmochaFrappuccino
			// 
			this->PBmochaFrappuccino->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBmochaFrappuccino.Image")));
			this->PBmochaFrappuccino->Location = System::Drawing::Point(143, 168);
			this->PBmochaFrappuccino->Name = L"PBmochaFrappuccino";
			this->PBmochaFrappuccino->Size = System::Drawing::Size(115, 182);
			this->PBmochaFrappuccino->TabIndex = 11;
			this->PBmochaFrappuccino->TabStop = false;
			// 
			// PBcaffeLatte
			// 
			this->PBcaffeLatte->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBcaffeLatte.Image")));
			this->PBcaffeLatte->Location = System::Drawing::Point(271, 168);
			this->PBcaffeLatte->Name = L"PBcaffeLatte";
			this->PBcaffeLatte->Size = System::Drawing::Size(115, 182);
			this->PBcaffeLatte->TabIndex = 12;
			this->PBcaffeLatte->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(12, 364);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 21);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Best sellers";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(108, 357);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(19, 28);
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// pnlBS3
			// 
			this->pnlBS3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlBS3.BackgroundImage")));
			this->pnlBS3->Controls->Add(this->panel2);
			this->pnlBS3->Location = System::Drawing::Point(12, 608);
			this->pnlBS3->Name = L"pnlBS3";
			this->pnlBS3->Size = System::Drawing::Size(374, 100);
			this->pnlBS3->TabIndex = 17;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->flowLayoutPanel1);
			this->panel2->Location = System::Drawing::Point(17, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(47, 97);
			this->panel2->TabIndex = 0;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(42, 121);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(263, 21);
			this->flowLayoutPanel1->TabIndex = 20;
			// 
			// pnlBS1
			// 
			this->pnlBS1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlBS1.BackgroundImage")));
			this->pnlBS1->Location = System::Drawing::Point(12, 395);
			this->pnlBS1->Name = L"pnlBS1";
			this->pnlBS1->Size = System::Drawing::Size(374, 100);
			this->pnlBS1->TabIndex = 18;
			// 
			// pnlBS2
			// 
			this->pnlBS2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlBS2.BackgroundImage")));
			this->pnlBS2->Location = System::Drawing::Point(12, 501);
			this->pnlBS2->Name = L"pnlBS2";
			this->pnlBS2->Size = System::Drawing::Size(374, 100);
			this->pnlBS2->TabIndex = 19;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Location = System::Drawing::Point(56, 714);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(287, 58);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(226, 20);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(20, 21);
			this->pictureBox9->TabIndex = 7;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(171, 23);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(32, 18);
			this->pictureBox8->TabIndex = 6;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(126, 18);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(26, 26);
			this->pictureBox7->TabIndex = 5;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Home::pictureBox7_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(30, 9);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(46, 35);
			this->pictureBox5->TabIndex = 3;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(84, 22);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(25, 19);
			this->pictureBox10->TabIndex = 5;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Home::pictureBox10_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(398, 781);
			this->Controls->Add(this->lblUsername);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnlBS2);
			this->Controls->Add(this->pnlBS1);
			this->Controls->Add(this->pnlBS3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->PBcaffeLatte);
			this->Controls->Add(this->PBmochaFrappuccino);
			this->Controls->Add(this->PBcappuccino);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBcappuccino))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBmochaFrappuccino))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBcaffeLatte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->pnlBS3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


private: System::Void PBcappuccino_Click(System::Object^ sender, System::EventArgs^ e) {
	CappuccinoOrder^ cappiccinoorder = gcnew CappuccinoOrder();
	cappiccinoorder->Show();
	this->Hide();

}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

};
}
