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
			//
			//TODO: Add the constructor code here
			//
			comboBox1->Items->Add(" ");
			
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
	private: System::Windows::Forms::Panel^ panelHolder8;
	private: System::Windows::Forms::Panel^ panelHolder6;
	private: System::Windows::Forms::Panel^ panelHolder7;
	private: System::Windows::Forms::Panel^ panelHolder5;
	private: System::Windows::Forms::Panel^ panelHolder4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panelTop;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel1;
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

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;








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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panelTop1 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panelHolder9 = (gcnew System::Windows::Forms::Panel());
			this->panelHolder8 = (gcnew System::Windows::Forms::Panel());
			this->panelHolder6 = (gcnew System::Windows::Forms::Panel());
			this->panelHolder7 = (gcnew System::Windows::Forms::Panel());
			this->panelHolder5 = (gcnew System::Windows::Forms::Panel());
			this->panelHolder4 = (gcnew System::Windows::Forms::Panel());
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panelTop1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panelMenu->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelHome->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->panelMenu);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->panelHolder9);
			this->panel2->Controls->Add(this->panelHolder8);
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
			this->panel2->Location = System::Drawing::Point(-1, -1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1019, 618);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Menus::panel2_Paint);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->panelTop1);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1016, 615);
			this->panel1->TabIndex = 4;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(855, 36);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(116, 87);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Montserrat ExtraBold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(455, 118);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(68, 37);
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
			this->label14->Font = (gcnew System::Drawing::Font(L"Montserrat ExtraBold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label14->Location = System::Drawing::Point(67, 108);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(100, 37);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Order";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->panel4->Controls->Add(this->button2);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(405, 615);
			this->panel4->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(219, 413);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 38);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(67, 413);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 38);
			this->button1->TabIndex = 9;
			this->button1->Text = L"See Menu";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(44, 358);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(299, 20);
			this->textBox1->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->AllowDrop = true;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(44, 273);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(299, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Menus::comboBox1_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(43, 324);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(49, 13);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Quantity:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(41, 257);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(64, 13);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Drink name:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Montserrat ExtraBold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(37, 118);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(192, 37);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Order Setup";
			// 
			// panelMenu
			// 
			this->panelMenu->Controls->Add(this->panel3);
			this->panelMenu->Controls->Add(this->panelTop);
			this->panelMenu->Location = System::Drawing::Point(3, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(1016, 615);
			this->panelMenu->TabIndex = 18;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Location = System::Drawing::Point(44, 111);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(918, 473);
			this->panel3->TabIndex = 3;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label13->Location = System::Drawing::Point(413, 273);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(274, 29);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Espresso-Based Coffees";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label12->Location = System::Drawing::Point(413, 47);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(274, 29);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Espresso-Based Coffees";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label11->Location = System::Drawing::Point(25, 273);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(274, 29);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Espresso-Based Coffees";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label10->Location = System::Drawing::Point(25, 47);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(274, 29);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Espresso-Based Coffees";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(27, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"label9";
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
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat ExtraBold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label8->Location = System::Drawing::Point(64, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 37);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Menu";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(934, 302);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 17;
			this->label7->Text = L"See all";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(598, 290);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(175, 33);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Cold Coffees";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(934, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"See all";
			this->label5->Click += gcnew System::EventHandler(this, &Menus::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(353, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(317, 33);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Espresso-Based Coffees";
			// 
			// panelHolder9
			// 
			this->panelHolder9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder9->Location = System::Drawing::Point(870, 341);
			this->panelHolder9->Name = L"panelHolder9";
			this->panelHolder9->Size = System::Drawing::Size(108, 154);
			this->panelHolder9->TabIndex = 13;
			// 
			// panelHolder8
			// 
			this->panelHolder8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder8->Location = System::Drawing::Point(740, 341);
			this->panelHolder8->Name = L"panelHolder8";
			this->panelHolder8->Size = System::Drawing::Size(108, 154);
			this->panelHolder8->TabIndex = 12;
			// 
			// panelHolder6
			// 
			this->panelHolder6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder6->Location = System::Drawing::Point(870, 111);
			this->panelHolder6->Name = L"panelHolder6";
			this->panelHolder6->Size = System::Drawing::Size(108, 154);
			this->panelHolder6->TabIndex = 13;
			// 
			// panelHolder7
			// 
			this->panelHolder7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder7->Location = System::Drawing::Point(604, 341);
			this->panelHolder7->Name = L"panelHolder7";
			this->panelHolder7->Size = System::Drawing::Size(108, 154);
			this->panelHolder7->TabIndex = 11;
			// 
			// panelHolder5
			// 
			this->panelHolder5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder5->Location = System::Drawing::Point(740, 111);
			this->panelHolder5->Name = L"panelHolder5";
			this->panelHolder5->Size = System::Drawing::Size(108, 154);
			this->panelHolder5->TabIndex = 12;
			// 
			// panelHolder4
			// 
			this->panelHolder4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder4->Location = System::Drawing::Point(604, 111);
			this->panelHolder4->Name = L"panelHolder4";
			this->panelHolder4->Size = System::Drawing::Size(108, 154);
			this->panelHolder4->TabIndex = 11;
			// 
			// panelHolder3
			// 
			this->panelHolder3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder3->Location = System::Drawing::Point(316, 405);
			this->panelHolder3->Name = L"panelHolder3";
			this->panelHolder3->Size = System::Drawing::Size(108, 154);
			this->panelHolder3->TabIndex = 10;
			// 
			// panelHolder2
			// 
			this->panelHolder2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder2->Location = System::Drawing::Point(186, 405);
			this->panelHolder2->Name = L"panelHolder2";
			this->panelHolder2->Size = System::Drawing::Size(108, 154);
			this->panelHolder2->TabIndex = 10;
			// 
			// panelHolder1
			// 
			this->panelHolder1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panelHolder1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHolder1->Location = System::Drawing::Point(50, 405);
			this->panelHolder1->Name = L"panelHolder1";
			this->panelHolder1->Size = System::Drawing::Size(108, 154);
			this->panelHolder1->TabIndex = 9;
			this->panelHolder1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Menus::panel1_Paint);
			// 
			// lblSee
			// 
			this->lblSee->AutoSize = true;
			this->lblSee->BackColor = System::Drawing::Color::Transparent;
			this->lblSee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lblSee->Font = (gcnew System::Drawing::Font(L"Montserrat", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSee->ForeColor = System::Drawing::Color::White;
			this->lblSee->Location = System::Drawing::Point(375, 365);
			this->lblSee->Name = L"lblSee";
			this->lblSee->Size = System::Drawing::Size(44, 16);
			this->lblSee->TabIndex = 8;
			this->lblSee->Text = L"See all";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(43, 351);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(235, 33);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Popular Products";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat Black", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(39, 194);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(446, 66);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Morning Coffee.";
			// 
			// lblLong
			// 
			this->lblLong->AutoSize = true;
			this->lblLong->BackColor = System::Drawing::Color::Transparent;
			this->lblLong->Font = (gcnew System::Drawing::Font(L"Montserrat Black", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLong->ForeColor = System::Drawing::Color::White;
			this->lblLong->Location = System::Drawing::Point(39, 128);
			this->lblLong->Name = L"lblLong";
			this->lblLong->Size = System::Drawing::Size(307, 66);
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
			this->lblHome->Font = (gcnew System::Drawing::Font(L"Montserrat ExtraBold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lblHome->Location = System::Drawing::Point(64, 102);
			this->lblHome->Name = L"lblHome";
			this->lblHome->Size = System::Drawing::Size(102, 37);
			this->lblHome->TabIndex = 2;
			this->lblHome->Text = L"Home";
			// 
			// btnOrder
			// 
			this->btnOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnOrder->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOrder->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOrder->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOrder->Location = System::Drawing::Point(711, 526);
			this->btnOrder->Name = L"btnOrder";
			this->btnOrder->Size = System::Drawing::Size(176, 58);
			this->btnOrder->TabIndex = 0;
			this->btnOrder->Text = L"Order Now";
			this->btnOrder->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(436, 151);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(534, 429);
			this->dataGridView1->TabIndex = 9;
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
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panelTop1->ResumeLayout(false);
			this->panelTop1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panelMenu->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelHome->ResumeLayout(false);
			this->panelHome->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
					array<String^>^ parts = line->Split('|');
					if (parts->Length > 0) {
						comboBox1->Items->Add(parts[0]->Trim());
					}
				}

				file->Close();
			}
			catch (IOException^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}


	}
	private: System::Void Menus_Load(System::Object^ sender, System::EventArgs^ e) {
		panelMenu->Hide();
		array<Panel^>^ panels = gcnew array<Panel^>{ panelHolder1, panelHolder2, panelHolder3, panelHolder4, panelHolder5, panelHolder6, panelHolder7, panelHolder8 , panelHolder9};
		for each (Panel ^ panel in panels) {
			Rounded::RoundCorners(panel, 20);
		}
		Rounded::RoundCorners(panelHome, 30);
		Rounded::RoundCorners(panelTop, 30);
		Rounded::RoundCorners(panelTop1, 30);

		ButtonStyler::CurveButton(btnOrder, 30);
		

	}

	private: System::Void panelHome_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMenu->Show();
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	fill();
	
	}


};
}
