#pragma once
#include "OnBoarding.h"

namespace Project34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SplashScreen
	/// </summary>
	public ref class SplashScreen : public System::Windows::Forms::Form
	{
	public:
		SplashScreen(void)
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
		~SplashScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ PB1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ PB2;
	private: System::Windows::Forms::PictureBox^ PB3;
	private: System::Windows::Forms::PictureBox^ PB4;
	private: System::Windows::Forms::PictureBox^ PB5;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SplashScreen::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PB1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->PB2 = (gcnew System::Windows::Forms::PictureBox());
			this->PB3 = (gcnew System::Windows::Forms::PictureBox());
			this->PB4 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB5))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(145, 234);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(131, 106);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// PB1
			// 
			this->PB1->Location = System::Drawing::Point(205, 1);
			this->PB1->Name = L"PB1";
			this->PB1->Size = System::Drawing::Size(207, 227);
			this->PB1->TabIndex = 2;
			this->PB1->TabStop = false;
			this->PB1->Click += gcnew System::EventHandler(this, &SplashScreen::PB1_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(185, 764);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(40, 10);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// PB2
			// 
			this->PB2->Location = System::Drawing::Point(282, 234);
			this->PB2->Name = L"PB2";
			this->PB2->Size = System::Drawing::Size(130, 293);
			this->PB2->TabIndex = 4;
			this->PB2->TabStop = false;
			this->PB2->Click += gcnew System::EventHandler(this, &SplashScreen::PB2_Click);
			// 
			// PB3
			// 
			this->PB3->Location = System::Drawing::Point(205, 346);
			this->PB3->Name = L"PB3";
			this->PB3->Size = System::Drawing::Size(71, 412);
			this->PB3->TabIndex = 5;
			this->PB3->TabStop = false;
			this->PB3->Click += gcnew System::EventHandler(this, &SplashScreen::PB3_Click);
			// 
			// PB4
			// 
			this->PB4->Location = System::Drawing::Point(282, 533);
			this->PB4->Name = L"PB4";
			this->PB4->Size = System::Drawing::Size(130, 275);
			this->PB4->TabIndex = 6;
			this->PB4->TabStop = false;
			this->PB4->Click += gcnew System::EventHandler(this, &SplashScreen::PB4_Click);
			// 
			// PB5
			// 
			this->PB5->Location = System::Drawing::Point(205, 780);
			this->PB5->Name = L"PB5";
			this->PB5->Size = System::Drawing::Size(71, 28);
			this->PB5->TabIndex = 7;
			this->PB5->TabStop = false;
			// 
			// SplashScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(414, 820);
			this->Controls->Add(this->PB5);
			this->Controls->Add(this->PB4);
			this->Controls->Add(this->PB3);
			this->Controls->Add(this->PB2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->PB1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SplashScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SplashScreen";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PB1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		//Initializes the Menu
		OnBoarding^ onboarding = gcnew OnBoarding();
		//shows the menu CC
		onboarding->Show();
	
		
	}
private: System::Void PB2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
		//Initializes the Menu
		OnBoarding^ onboarding = gcnew OnBoarding();
		//shows the menu CC
		onboarding->Show();
		
		
}
private: System::Void PB3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
		//Initializes the Menu
		OnBoarding^ onboarding = gcnew OnBoarding();
		//shows the menu CC
		onboarding->Show();
		
	
}
private: System::Void PB4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
		//Initializes the Menu
		OnBoarding^ onboarding = gcnew OnBoarding();
		//shows the menu CC
		onboarding->Show();
		
		
}
};
}
