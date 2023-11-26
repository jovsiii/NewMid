#pragma once

namespace Project34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Menufc
	/// </summary>
	public ref class Menufc : public System::Windows::Forms::Form
	{
	public:
		Menufc(void)
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
		~Menufc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelMenu;


	protected:

	private: System::Windows::Forms::Panel^ panel3;



	private: System::Windows::Forms::Label^ label9;







	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnBFC;

	private: System::Windows::Forms::PictureBox^ pictureBox2;


	protected:
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Menufc::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnBFC = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panelMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panelTop->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->panelMenu->Controls->Add(this->btnBFC);
			this->panelMenu->Controls->Add(this->pictureBox2);
			this->panelMenu->Controls->Add(this->panel3);
			this->panelMenu->Controls->Add(this->panelTop);
			this->panelMenu->Controls->Add(this->label9);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(1019, 618);
			this->panelMenu->TabIndex = 19;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(872, 40);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(85, 60);
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// btnBFC
			// 
			this->btnBFC->BackColor = System::Drawing::Color::Transparent;
			this->btnBFC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->btnBFC->ForeColor = System::Drawing::SystemColors::Control;
			this->btnBFC->Location = System::Drawing::Point(979, 0);
			this->btnBFC->Name = L"btnBFC";
			this->btnBFC->Size = System::Drawing::Size(40, 40);
			this->btnBFC->TabIndex = 21;
			this->btnBFC->Text = L"<";
			this->btnBFC->UseVisualStyleBackColor = false;
			this->btnBFC->Click += gcnew System::EventHandler(this, &Menufc::btnBFC_Click_1);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Location = System::Drawing::Point(3, 111);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1016, 507);
			this->panel3->TabIndex = 3;
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->panelTop->Controls->Add(this->label8);
			this->panelTop->Location = System::Drawing::Point(44, -80);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(228, 156);
			this->panelTop->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label8->Location = System::Drawing::Point(64, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 31);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Menu";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::Snow;
			this->label9->Location = System::Drawing::Point(312, 40);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(256, 36);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Flavored Coffees";
			// 
			// Menufc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1019, 618);
			this->Controls->Add(this->panelMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Menufc";
			this->Text = L"Menufc";
			this->Load += gcnew System::EventHandler(this, &Menufc::Menufc_Load);
			this->panelMenu->ResumeLayout(false);
			this->panelMenu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Menufc_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}

private: System::Void btnBFC_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

}
};
}
