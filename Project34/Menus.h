#pragma once
#include"Custom.h"
#include <vcclr.h> 
namespace Project34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Project34;

	/// <summary>
	/// Summary for Menus
	/// </summary>
	public ref class Menus : public System::Windows::Forms::Form
	{
	public:
		Menus(void)
		{
			InitializeComponent();
			panelOrder->Hide();
			panelMenu->Hide();
			//
			//TODO: Add the constructor code here
			//
			fill();
			dataGridView1->Columns->Add("Column1", "Drink Name");
			dataGridView1->Columns->Add("Column2", "Price");
			dataGridView1->Columns->Add("Column3", "Quantity");
			dataGridView1->Columns->Add("Total", "Total");
			// Set the background color and text color for selected cells
			dataGridView1->DefaultCellStyle->SelectionBackColor = Color::FromArgb(60, 42, 33);
			

			// Set DataGridView dimensions
			dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Menus()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnOrder;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panelHome;
	private: System::Windows::Forms::Label^ lblHome;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblLong;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblSee;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panelHolder1;
	private: System::Windows::Forms::Panel^ panelHolder3;

	private: System::Windows::Forms::Panel^ panelHolder2;
	private: System::Windows::Forms::Panel^ panelHolder9;

	private: System::Windows::Forms::Panel^ panelHolder6;
	private: System::Windows::Forms::Panel^ panelHolder7;
	private: System::Windows::Forms::Panel^ panelHolder5;
	private: System::Windows::Forms::Panel^ panelHolder4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblEB;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panelTop;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panelOrder;







	private: System::Windows::Forms::Panel^ panelTop1;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnSeeMenu;




	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::Button^ btnRemove;
	private: System::Windows::Forms::Button^ btnReciept;

	private: System::Windows::Forms::Panel^ panelHolder8;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Button^ btnBackOrder;
private: System::Windows::Forms::Button^ btnBackMenu;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Menus::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblEB = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panelHolder9 = (gcnew System::Windows::Forms::Panel());
			this->panelHolder6 = (gcnew System::Windows::Forms::Panel());
			this->panelHolder7 = (gcnew System::Windows::Forms::Panel());
			this->panelHolder5 = (gcnew System::Windows::Forms::Panel());
			this->panelHolder4 = (gcnew System::Windows::Forms::Panel());
			this->panelOrder = (gcnew System::Windows::Forms::Panel());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->btnBackMenu = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnReciept = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panelTop1 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnBackOrder = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSeeMenu = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panelHolder3 = (gcnew System::Windows::Forms::Panel());
			this->panelHolder2 = (gcnew System::Windows::Forms::Panel());
			this->panelHolder1 = (gcnew System::Windows::Forms::Panel());
			this->lblSee = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblLong = (gcnew System::Windows::Forms::Label());
			this->panelHome = (gcnew System::Windows::Forms::Panel());
			this->lblHome = (gcnew System::Windows::Forms::Label());
			this->btnOrder = (gcnew System::Windows::Forms::Button());
			this->panelHolder8 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			this->panelOrder->SuspendLayout();
			this->panelMenu->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panelTop1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelHome->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->panel2->Controls->Add(this->panelMenu);
			this->panel2->Controls->Add(this->panelOrder);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->lblEB);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->panelHolder9);
			this->panel2->Controls->Add(this->panelHolder6);
			this->panel2->Controls->Add(this->panelHolder7);
			this->panel2->Controls->Add(this->panelHolder5);
			this->panel2->Controls->Add(this->panelHolder4);
			this->panel2->Controls->Add(this->panelHolder3);
			this->panel2->Controls->Add(this->panelHolder2);
			this->panel2->Controls->Add(this->panelHolder1);
			this->panel2->Controls->Add(this->lblSee);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->lblLong);
			this->panel2->Controls->Add(this->panelHome);
			this->panel2->Controls->Add(this->btnOrder);
			this->panel2->Controls->Add(this->panelHolder8);
			this->panel2->Location = System::Drawing::Point(-1, -1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1019, 618);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Menus::panel2_Paint);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(934, 302);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 15);
			this->label7->TabIndex = 17;
			this->label7->Text = L"See all";
			this->label7->Click += gcnew System::EventHandler(this, &Menus::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(598, 290);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(165, 29);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Cold Coffees";
			// 
			// lblEB
			// 
			this->lblEB->AutoSize = true;
			this->lblEB->BackColor = System::Drawing::Color::Transparent;
			this->lblEB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lblEB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEB->ForeColor = System::Drawing::Color::White;
			this->lblEB->Location = System::Drawing::Point(945, 82);
			this->lblEB->Name = L"lblEB";
			this->lblEB->Size = System::Drawing::Size(45, 15);
			this->lblEB->TabIndex = 15;
			this->lblEB->Text = L"See all";
			this->lblEB->Click += gcnew System::EventHandler(this, &Menus::lblEB_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(599, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(303, 29);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Espresso-Based Coffees";
			// 
			// panelHolder9
			// 
			this->panelHolder9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelHolder9.BackgroundImage")));
			this->panelHolder9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder9->Location = System::Drawing::Point(870, 341);
			this->panelHolder9->Name = L"panelHolder9";
			this->panelHolder9->Size = System::Drawing::Size(120, 179);
			this->panelHolder9->TabIndex = 13;
			// 
			// panelHolder6
			// 
			this->panelHolder6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelHolder6.BackgroundImage")));
			this->panelHolder6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder6->Location = System::Drawing::Point(870, 111);
			this->panelHolder6->Name = L"panelHolder6";
			this->panelHolder6->Size = System::Drawing::Size(120, 179);
			this->panelHolder6->TabIndex = 13;
			// 
			// panelHolder7
			// 
			this->panelHolder7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelHolder7.BackgroundImage")));
			this->panelHolder7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder7->Location = System::Drawing::Point(604, 341);
			this->panelHolder7->Name = L"panelHolder7";
			this->panelHolder7->Size = System::Drawing::Size(120, 179);
			this->panelHolder7->TabIndex = 11;
			// 
			// panelHolder5
			// 
			this->panelHolder5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelHolder5.BackgroundImage")));
			this->panelHolder5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder5->Location = System::Drawing::Point(736, 111);
			this->panelHolder5->Name = L"panelHolder5";
			this->panelHolder5->Size = System::Drawing::Size(120, 176);
			this->panelHolder5->TabIndex = 12;
			// 
			// panelHolder4
			// 
			this->panelHolder4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelHolder4.BackgroundImage")));
			this->panelHolder4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder4->Location = System::Drawing::Point(603, 111);
			this->panelHolder4->Name = L"panelHolder4";
			this->panelHolder4->Size = System::Drawing::Size(120, 176);
			this->panelHolder4->TabIndex = 11;
			// 
			// panelOrder
			// 
			this->panelOrder->Controls->Add(this->btnReciept);
			this->panelOrder->Controls->Add(this->btnRemove);
			this->panelOrder->Controls->Add(this->pictureBox2);
			this->panelOrder->Controls->Add(this->label18);
			this->panelOrder->Controls->Add(this->panelTop1);
			this->panelOrder->Controls->Add(this->dataGridView1);
			this->panelOrder->Controls->Add(this->btnBackOrder);
			this->panelOrder->Controls->Add(this->panel4);
			this->panelOrder->Location = System::Drawing::Point(3, 3);
			this->panelOrder->Name = L"panelOrder";
			this->panelOrder->Size = System::Drawing::Size(1019, 618);
			this->panelOrder->TabIndex = 4;
			this->panelOrder->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Menus::panel1_Paint_1);
			// 
			// panelMenu
			// 
			this->panelMenu->Controls->Add(this->btnBackMenu);
			this->panelMenu->Controls->Add(this->panel3);
			this->panelMenu->Controls->Add(this->panelTop);
			this->panelMenu->Location = System::Drawing::Point(2, 1);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(1019, 618);
			this->panelMenu->TabIndex = 18;
			// 
			// btnBackMenu
			// 
			this->btnBackMenu->BackColor = System::Drawing::Color::Transparent;
			this->btnBackMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->btnBackMenu->ForeColor = System::Drawing::SystemColors::Control;
			this->btnBackMenu->Location = System::Drawing::Point(979, 0);
			this->btnBackMenu->Name = L"btnBackMenu";
			this->btnBackMenu->Size = System::Drawing::Size(40, 40);
			this->btnBackMenu->TabIndex = 20;
			this->btnBackMenu->Text = L"<";
			this->btnBackMenu->UseVisualStyleBackColor = false;
			this->btnBackMenu->Click += gcnew System::EventHandler(this, &Menus::btnBackMenu_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->panel3->Controls->Add(this->label20);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Location = System::Drawing::Point(44, 111);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(918, 473);
			this->panel3->TabIndex = 3;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->label20->Location = System::Drawing::Point(580, 246);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(97, 24);
			this->label20->TabIndex = 9;
			this->label20->Text = L"Espresso";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(580, 138);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(111, 24);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Americano";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(465, 210);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(97, 98);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(10, 17);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(338, 31);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Espresso-Based Coffees";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Location = System::Drawing::Point(465, 97);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(97, 94);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->label12->Location = System::Drawing::Point(151, 355);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(123, 24);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Vanilla Latte";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(16, 328);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(120, 99);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(151, 246);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(232, 24);
			this->label11->TabIndex = 4;
			this->label11->Text = L"White Chocolate Mocha";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(16, 210);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(120, 98);
			this->pictureBox5->TabIndex = 3;
			this->pictureBox5->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(151, 138);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 24);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Espresso";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(16, 97);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(120, 94);
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
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
			// btnReciept
			// 
			this->btnReciept->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnReciept->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnReciept->Location = System::Drawing::Point(883, 562);
			this->btnReciept->Name = L"btnReciept";
			this->btnReciept->Size = System::Drawing::Size(88, 38);
			this->btnReciept->TabIndex = 14;
			this->btnReciept->Text = L"Reciept";
			this->btnReciept->UseVisualStyleBackColor = false;
			this->btnReciept->Click += gcnew System::EventHandler(this, &Menus::btnReciept_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnRemove->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRemove->Location = System::Drawing::Point(447, 562);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(88, 38);
			this->btnRemove->TabIndex = 13;
			this->btnRemove->Text = L"Remove";
			this->btnRemove->UseVisualStyleBackColor = false;
			this->btnRemove->Click += gcnew System::EventHandler(this, &Menus::button3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(875, 65);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(96, 74);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(455, 108);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(61, 31);
			this->label18->TabIndex = 7;
			this->label18->Text = L"List";
			// 
			// panelTop1
			// 
			this->panelTop1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->panelTop1->Controls->Add(this->label14);
			this->panelTop1->Location = System::Drawing::Point(46, -72);
			this->panelTop1->Name = L"panelTop1";
			this->panelTop1->Size = System::Drawing::Size(228, 156);
			this->panelTop1->TabIndex = 3;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label14->Location = System::Drawing::Point(67, 108);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(88, 31);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Order";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->dataGridView1->Location = System::Drawing::Point(447, 145);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->Size = System::Drawing::Size(524, 411);
			this->dataGridView1->TabIndex = 9;
			// 
			// btnBackOrder
			// 
			this->btnBackOrder->BackColor = System::Drawing::Color::Transparent;
			this->btnBackOrder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->btnBackOrder->ForeColor = System::Drawing::SystemColors::Control;
			this->btnBackOrder->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnBackOrder->Location = System::Drawing::Point(979, 0);
			this->btnBackOrder->Name = L"btnBackOrder";
			this->btnBackOrder->Size = System::Drawing::Size(40, 40);
			this->btnBackOrder->TabIndex = 19;
			this->btnBackOrder->Text = L"<";
			this->btnBackOrder->UseVisualStyleBackColor = false;
			this->btnBackOrder->Click += gcnew System::EventHandler(this, &Menus::btnBackOrder_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->comboBox2);
			this->panel4->Controls->Add(this->btnAdd);
			this->panel4->Controls->Add(this->btnSeeMenu);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Location = System::Drawing::Point(-3, -3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(405, 615);
			this->panel4->TabIndex = 5;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(44, 249);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(30, 13);
			this->label19->TabIndex = 12;
			this->label19->Text = L"Size:";
			// 
			// comboBox2
			// 
			this->comboBox2->AllowDrop = true;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"29", L"39" });
			this->comboBox2->Location = System::Drawing::Point(47, 265);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(299, 21);
			this->comboBox2->TabIndex = 11;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAdd->Location = System::Drawing::Point(254, 362);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(89, 50);
			this->btnAdd->TabIndex = 10;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Menus::button2_Click);
			// 
			// btnSeeMenu
			// 
			this->btnSeeMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnSeeMenu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSeeMenu->Location = System::Drawing::Point(44, 362);
			this->btnSeeMenu->Name = L"btnSeeMenu";
			this->btnSeeMenu->Size = System::Drawing::Size(88, 50);
			this->btnSeeMenu->TabIndex = 9;
			this->btnSeeMenu->Text = L"See Menu";
			this->btnSeeMenu->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(46, 325);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(299, 20);
			this->textBox1->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->AllowDrop = true;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(46, 217);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(299, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Menus::comboBox1_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(44, 299);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(49, 13);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Quantity:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(41, 191);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(59, 13);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Item name:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(37, 108);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(172, 31);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Order Setup";
			// 
			// panelHolder3
			// 
			this->panelHolder3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelHolder3.BackgroundImage")));
			this->panelHolder3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder3->Location = System::Drawing::Point(324, 405);
			this->panelHolder3->Name = L"panelHolder3";
			this->panelHolder3->Size = System::Drawing::Size(136, 201);
			this->panelHolder3->TabIndex = 10;
			// 
			// panelHolder2
			// 
			this->panelHolder2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelHolder2.BackgroundImage")));
			this->panelHolder2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder2->Location = System::Drawing::Point(186, 405);
			this->panelHolder2->Name = L"panelHolder2";
			this->panelHolder2->Size = System::Drawing::Size(132, 201);
			this->panelHolder2->TabIndex = 10;
			// 
			// panelHolder1
			// 
			this->panelHolder1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelHolder1.BackgroundImage")));
			this->panelHolder1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder1->Location = System::Drawing::Point(50, 405);
			this->panelHolder1->Name = L"panelHolder1";
			this->panelHolder1->Size = System::Drawing::Size(130, 201);
			this->panelHolder1->TabIndex = 9;
			this->panelHolder1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Menus::panel1_Paint);
			// 
			// lblSee
			// 
			this->lblSee->AutoSize = true;
			this->lblSee->BackColor = System::Drawing::Color::Transparent;
			this->lblSee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lblSee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSee->ForeColor = System::Drawing::Color::White;
			this->lblSee->Location = System::Drawing::Point(415, 365);
			this->lblSee->Name = L"lblSee";
			this->lblSee->Size = System::Drawing::Size(45, 15);
			this->lblSee->TabIndex = 8;
			this->lblSee->Text = L"See all";
			this->lblSee->Click += gcnew System::EventHandler(this, &Menus::lblSee_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(45, 355);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Flavored Coffees";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->label2->Location = System::Drawing::Point(47, 260);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(419, 58);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Indulge your senses at Pahuyaw Coffee Shop where every cup is a work of art. Join"
				L" us in savoring the rich flavors of life, one sip at a time.";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(398, 68);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(153, 123);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(39, 194);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 55);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Morning Coffee.";
			// 
			// lblLong
			// 
			this->lblLong->AutoSize = true;
			this->lblLong->BackColor = System::Drawing::Color::Transparent;
			this->lblLong->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLong->ForeColor = System::Drawing::Color::White;
			this->lblLong->Location = System::Drawing::Point(39, 128);
			this->lblLong->Name = L"lblLong";
			this->lblLong->Size = System::Drawing::Size(269, 55);
			this->lblLong->TabIndex = 3;
			this->lblLong->Text = L"Enjoy Your";
			// 
			// panelHome
			// 
			this->panelHome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->panelHome->Controls->Add(this->lblHome);
			this->panelHome->Location = System::Drawing::Point(50, -77);
			this->panelHome->Name = L"panelHome";
			this->panelHome->Size = System::Drawing::Size(228, 156);
			this->panelHome->TabIndex = 1;
			this->panelHome->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Menus::panelHome_Paint);
			// 
			// lblHome
			// 
			this->lblHome->AutoSize = true;
			this->lblHome->BackColor = System::Drawing::Color::Transparent;
			this->lblHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lblHome->Location = System::Drawing::Point(64, 102);
			this->lblHome->Name = L"lblHome";
			this->lblHome->Size = System::Drawing::Size(90, 31);
			this->lblHome->TabIndex = 2;
			this->lblHome->Text = L"Home";
			// 
			// btnOrder
			// 
			this->btnOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnOrder->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOrder->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOrder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOrder->Location = System::Drawing::Point(816, 548);
			this->btnOrder->Name = L"btnOrder";
			this->btnOrder->Size = System::Drawing::Size(176, 58);
			this->btnOrder->TabIndex = 0;
			this->btnOrder->Text = L"Order Now";
			this->btnOrder->UseVisualStyleBackColor = false;
			this->btnOrder->Click += gcnew System::EventHandler(this, &Menus::btnOrder_Click);
			// 
			// panelHolder8
			// 
			this->panelHolder8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelHolder8.BackgroundImage")));
			this->panelHolder8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder8->Location = System::Drawing::Point(736, 341);
			this->panelHolder8->Name = L"panelHolder8";
			this->panelHolder8->Size = System::Drawing::Size(120, 179);
			this->panelHolder8->TabIndex = 11;
			// 
			// Menus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1017, 617);
			this->ControlBox = false;
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Menus";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menus";
			this->Load += gcnew System::EventHandler(this, &Menus::Menus_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panelOrder->ResumeLayout(false);
			this->panelOrder->PerformLayout();
			this->panelMenu->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panelTop1->ResumeLayout(false);
			this->panelTop1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelHome->ResumeLayout(false);
			this->panelHome->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	//Fills the combobox
	   private: void fill() {
		comboBox1->Items->Clear();
			String^ documentsPath = Environment::GetFolderPath(Environment::SpecialFolder::MyDocuments);
			String^ fileName = "Menu.txt";
			String^ filePath = Path::Combine(documentsPath, fileName);

			try {
				StreamReader^ file = gcnew StreamReader(filePath);
				String^ line;

				while ((line = file->ReadLine()) != nullptr) {	
						comboBox1->Items->Add(line);
				}
				file->Close();
			}
			catch (IOException^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
	}

	private: void ItemsSetter() {

		if (comboBox1->SelectedItem != nullptr && comboBox2->SelectedItem != nullptr && !String::IsNullOrEmpty(textBox1->Text)) {
			int numericValue;
			if (Int32::TryParse(textBox1->Text, numericValue) && numericValue < 99) {
				array<Object^>^ rowValues = gcnew array<Object^>(dataGridView1->Columns->Count);

				rowValues[0] = comboBox1->SelectedItem;
				rowValues[1] = comboBox2->SelectedItem;
				rowValues[2] = numericValue;

				// Calculate total by multiplying Price and Quantity
				double price, quantity;
				if (Double::TryParse(comboBox2->SelectedItem->ToString(), price) &&
					Double::TryParse(textBox1->Text, quantity)) {
					double total = price * quantity;
					rowValues[3] = total;

					dataGridView1->Rows->Add(rowValues);

					comboBox1->SelectedIndex = -1;
					comboBox2->SelectedIndex = -1;
					textBox1->Text = "";
				}
				else {
					MessageBox::Show("Invalid numeric values in 'Price' or 'Quantity' columns.");
				}
			}
			else {
				MessageBox::Show("Please enter a valid number (less than 99) in the TextBox.");
			}
		}
		else {
			MessageBox::Show("Please select an item from both ComboBoxes and fill the TextBox.");
		}
	}
	private: void deleter() {
		if (dataGridView1->SelectedRows->Count > 0) {
		 // Get the index of the selected row
		int selectedIndex = dataGridView1->SelectedRows[0]->Index;

		// Remove the selected row from the DataGridView
		dataGridView1->Rows->RemoveAt(selectedIndex);
			 }
		else {
		MessageBox::Show("Please select a row to remove.");
		}
	}


		//GUI COMPONENTS
	private: System::Void Menus_Load(System::Object^ sender, System::EventArgs^ e) {
		panelMenu->Hide();
		array<Panel^>^ panels = gcnew array<Panel^>{ panelHolder1, panelHolder2, panelHolder3, panelHolder4, panelHolder5, panelHolder6, panelHolder7, panelHolder8 , panelHolder9};
		for each (Panel ^ panel in panels) {
			Rounded::RoundCorners(panel, 20);
		}
		Rounded::RoundCorners(panelHome, 30);
		Rounded::RoundCorners(panelTop, 30);
		Rounded::RoundCorners(panelTop1, 30);

		array<Button^>^ buttons = gcnew array<Button^>{btnAdd,btnOrder,btnReciept,btnRemove,btnSeeMenu };
		for each (Button ^ button in buttons) {
			ButtonStyler::CurveButton(button, 20);
		}
	}

	private: System::Void panelHome_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ItemsSetter();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		deleter();
	}

private:
	enum class CurrentPanel
	{
		None,
		Order,
		Menu
	};

	CurrentPanel currentPanel = CurrentPanel::None;

private:
	// Call this function to switch to the Order panel
	void ShowOrderPanel()
	{
		panelMenu->Hide();
		panelOrder->Show();
		currentPanel = CurrentPanel::Order;
	}

private:
	// Call this function to switch to the Menu panel
	void ShowMenuPanel()
	{
		panelOrder->Hide();
		panelMenu->Show();
		currentPanel = CurrentPanel::Menu;
	}

private:
	System::Void btnOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowOrderPanel();
		Update();
	}

private:
	System::Void lblEB_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowMenuPanel();
	}

private:
	System::Void btnBackOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		panelOrder->Hide();
		currentPanel = CurrentPanel::None;
	}

private:
	System::Void btnBackMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		panelMenu->Hide();
		currentPanel = CurrentPanel::None;
	}

private: System::Void btnReciept_Click(System::Object^ sender, System::EventArgs^ e) {
	int columnIndex = 3; // Change this to the correct column index

	int total = 0;

	for each (DataGridViewRow ^ row in dataGridView1->Rows) {
		// Check if the row is not empty (avoiding the new row at the bottom)
		if (row->IsNewRow) continue;

		// Get the value in the specified column
		Object^ value = row->Cells[columnIndex]->Value;

		// Check if the value is not null and is convertible to an integer
		if (value != nullptr) {
			total += Convert::ToInt32(value);
		}
	}

	// Display the total or use it as needed
	MessageBox::Show("Sum of Prices: " + total);
}
private: System::Void lblSee_Click(System::Object^ sender, System::EventArgs^ e) {
	panelHome->Hide();
	panelMenu->Show();
}
private: System::Void lblEB_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panelHome->Hide();
	panelMenu->Show();
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	panelHome->Hide();
	panelMenu->Show();
}
};
}
