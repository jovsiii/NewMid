#pragma once
#include"Custom.h"
#include"recieptManager.h"
#include"MenuFC.h"
#include"MenuEB.h"
#include"MenuCC.h"


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
	private:
		Order^ order;

	public:
		Menus(void)
		{
			InitializeComponent();
			panelOrder->Hide();
			panelReciept->Hide();
		
			//
			//TODO: Add the constructor code here
			//
			
	
			dataGridView1->Columns->Add("Column1", "Drink Name");
			dataGridView1->Columns->Add("Column2", "Size");
			dataGridView1->Columns->Add("Column3", "Quantity");
			dataGridView1->Columns->Add("Total", "Total");
			// Set the background color and text color for selected cells
			dataGridView1->DefaultCellStyle->SelectionBackColor = Color::FromArgb(60, 42, 33);
			

			// Set DataGridView dimensions
			dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			printDocument1 = gcnew System::Drawing::Printing::PrintDocument();
			printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Menus::printDocument1_);
			printPreviewDialog1->Document = printDocument1;
			order = gcnew Order(dataGridView1, richTextBox1, comboBox1, comboBox2, textBox1);
			order->fillCombobox();

			//Rounded components
			Rounded::CurveButton(btnOrder, 30);

			Rounded::RoundCorners(panel1, 30);
			Rounded::RoundCorners(panelTop1, 30);

			Rounded::CurveButton(button2, 20);
			Rounded::CurveButton(btnPrint, 20);
			Rounded::CurveButton(btnSeeMenu, 20);
			Rounded::CurveButton(btnAdd, 20);
			Rounded::CurveButton(btnRemove, 20);
			Rounded::CurveButton(btnReciept, 20);
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
private: System::Drawing::Printing::PrintDocument^ printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Button^ btnOrder;
private: System::Windows::Forms::Label^ lblFC;
private: System::Windows::Forms::Label^ lblEB;
private: System::Windows::Forms::Label^ lblCC;
private: System::Windows::Forms::Panel^ panelOrder;
private: System::Windows::Forms::Panel^ panelReciept;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ btnPrint;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Button^ btnAdd;
private: System::Windows::Forms::Button^ btnSeeMenu;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ btnReciept;
private: System::Windows::Forms::Button^ btnRemove;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Panel^ panelTop1;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->btnOrder = (gcnew System::Windows::Forms::Button());
			this->lblFC = (gcnew System::Windows::Forms::Label());
			this->lblEB = (gcnew System::Windows::Forms::Label());
			this->lblCC = (gcnew System::Windows::Forms::Label());
			this->panelOrder = (gcnew System::Windows::Forms::Panel());
			this->panelReciept = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->btnReciept = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panelTop1 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSeeMenu = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panelOrder->SuspendLayout();
			this->panelReciept->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panelTop1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Menus::printDocument1_);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox4->Location = System::Drawing::Point(988, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(30, 36);
			this->pictureBox4->TabIndex = 18;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Menus::pictureBox4_Click);
			// 
			// btnOrder
			// 
			this->btnOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnOrder->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOrder->FlatAppearance->BorderSize = 0;
			this->btnOrder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
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
			// lblFC
			// 
			this->lblFC->AutoSize = true;
			this->lblFC->BackColor = System::Drawing::Color::Transparent;
			this->lblFC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lblFC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFC->ForeColor = System::Drawing::Color::White;
			this->lblFC->Location = System::Drawing::Point(397, 20);
			this->lblFC->Name = L"lblFC";
			this->lblFC->Size = System::Drawing::Size(45, 15);
			this->lblFC->TabIndex = 8;
			this->lblFC->Text = L"See all";
			this->lblFC->Click += gcnew System::EventHandler(this, &Menus::lblFC_Click);
			// 
			// lblEB
			// 
			this->lblEB->AutoSize = true;
			this->lblEB->BackColor = System::Drawing::Color::Transparent;
			this->lblEB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lblEB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEB->ForeColor = System::Drawing::Color::White;
			this->lblEB->Location = System::Drawing::Point(367, 11);
			this->lblEB->Name = L"lblEB";
			this->lblEB->Size = System::Drawing::Size(45, 15);
			this->lblEB->TabIndex = 15;
			this->lblEB->Text = L"See all";
			this->lblEB->Click += gcnew System::EventHandler(this, &Menus::lblEB_Click_1);
			// 
			// lblCC
			// 
			this->lblCC->AutoSize = true;
			this->lblCC->BackColor = System::Drawing::Color::Transparent;
			this->lblCC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lblCC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCC->ForeColor = System::Drawing::Color::White;
			this->lblCC->Location = System::Drawing::Point(354, 23);
			this->lblCC->Name = L"lblCC";
			this->lblCC->Size = System::Drawing::Size(45, 15);
			this->lblCC->TabIndex = 17;
			this->lblCC->Text = L"See all";
			this->lblCC->Click += gcnew System::EventHandler(this, &Menus::lblCC_Click);
			// 
			// panelOrder
			// 
			this->panelOrder->Controls->Add(this->panelReciept);
			this->panelOrder->Controls->Add(this->btnReciept);
			this->panelOrder->Controls->Add(this->btnRemove);
			this->panelOrder->Controls->Add(this->pictureBox2);
			this->panelOrder->Controls->Add(this->label18);
			this->panelOrder->Controls->Add(this->panelTop1);
			this->panelOrder->Controls->Add(this->dataGridView1);
			this->panelOrder->Controls->Add(this->pictureBox5);
			this->panelOrder->Controls->Add(this->panel4);
			this->panelOrder->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelOrder->Location = System::Drawing::Point(0, 0);
			this->panelOrder->Name = L"panelOrder";
			this->panelOrder->Size = System::Drawing::Size(1017, 617);
			this->panelOrder->TabIndex = 4;
			// 
			// panelReciept
			// 
			this->panelReciept->Controls->Add(this->pictureBox1);
			this->panelReciept->Controls->Add(this->pictureBox7);
			this->panelReciept->Controls->Add(this->pictureBox6);
			this->panelReciept->Controls->Add(this->button2);
			this->panelReciept->Controls->Add(this->panel1);
			this->panelReciept->Controls->Add(this->btnPrint);
			this->panelReciept->Controls->Add(this->richTextBox1);
			this->panelReciept->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelReciept->Location = System::Drawing::Point(0, 0);
			this->panelReciept->Name = L"panelReciept";
			this->panelReciept->Size = System::Drawing::Size(1017, 617);
			this->panelReciept->TabIndex = 20;
		
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(869, 58);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 116);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(569, 552);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(48, 47);
			this->pictureBox7->TabIndex = 19;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Menus::pictureBox7_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox6->Location = System::Drawing::Point(985, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(30, 41);
			this->pictureBox6->TabIndex = 18;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Menus::pictureBox6_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(316, 552);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 44);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Menus::button2_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(44, -80);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(228, 156);
			this->panel1->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label5->Location = System::Drawing::Point(55, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 31);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Receipt";
			// 
			// btnPrint
			// 
			this->btnPrint->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnPrint->FlatAppearance->BorderSize = 0;
			this->btnPrint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->Location = System::Drawing::Point(768, 548);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(95, 44);
			this->btnPrint->TabIndex = 1;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = false;
			this->btnPrint->Click += gcnew System::EventHandler(this, &Menus::btnPrint_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Location = System::Drawing::Point(316, 58);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(547, 474);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// btnReciept
			// 
			this->btnReciept->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnReciept->FlatAppearance->BorderSize = 0;
			this->btnReciept->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReciept->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
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
			this->btnRemove->FlatAppearance->BorderSize = 0;
			this->btnRemove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRemove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
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
			this->pictureBox2->Location = System::Drawing::Point(836, 23);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(128, 116);
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
			this->label18->Location = System::Drawing::Point(441, 108);
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
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(981, -3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(37, 38);
			this->pictureBox5->TabIndex = 21;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Menus::pictureBox5_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->comboBox2);
			this->panel4->Controls->Add(this->btnAdd);
			this->panel4->Controls->Add(this->btnSeeMenu);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Location = System::Drawing::Point(-1, -1);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(405, 618);
			this->panel4->TabIndex = 5;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(107, 471);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(164, 128);
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(38, 252);
			this->label19->Name = L"label19";
			this->label19->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label19->Size = System::Drawing::Size(54, 20);
			this->label19->TabIndex = 12;
			this->label19->Text = L"Size: ";
			// 
			// comboBox2
			// 
			this->comboBox2->AllowDrop = true;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"29", L"39" });
			this->comboBox2->Location = System::Drawing::Point(47, 275);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(299, 24);
			this->comboBox2->TabIndex = 11;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->btnAdd->Location = System::Drawing::Point(257, 402);
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
			this->btnSeeMenu->FlatAppearance->BorderSize = 0;
			this->btnSeeMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSeeMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->btnSeeMenu->Location = System::Drawing::Point(43, 402);
			this->btnSeeMenu->Name = L"btnSeeMenu";
			this->btnSeeMenu->Size = System::Drawing::Size(88, 50);
			this->btnSeeMenu->TabIndex = 9;
			this->btnSeeMenu->Text = L"See Menu";
			this->btnSeeMenu->UseVisualStyleBackColor = false;
			this->btnSeeMenu->Click += gcnew System::EventHandler(this, &Menus::btnSeeMenu_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->textBox1->Location = System::Drawing::Point(46, 335);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(299, 22);
			this->textBox1->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->AllowDrop = true;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(46, 218);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(299, 24);
			this->comboBox1->TabIndex = 7;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(39, 312);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(81, 20);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Quantity:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(38, 196);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(99, 20);
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
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->panel2->Controls->Add(this->panelOrder);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->btnOrder);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1017, 617);
			this->panel2->TabIndex = 1;
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Controls->Add(this->lblCC);
			this->panel7->Location = System::Drawing::Point(592, 307);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(412, 238);
			this->panel7->TabIndex = 21;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->Controls->Add(this->lblFC);
			this->panel5->Location = System::Drawing::Point(38, 336);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(465, 279);
			this->panel5->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Location = System::Drawing::Point(-2, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(503, 308);
			this->panel3->TabIndex = 19;
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->Controls->Add(this->lblEB);
			this->panel6->Location = System::Drawing::Point(580, 83);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(426, 238);
			this->panel6->TabIndex = 20;
			// 
			// Menus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1017, 617);
			this->ControlBox = false;
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Menus";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menus";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panelOrder->ResumeLayout(false);
			this->panelOrder->PerformLayout();
			this->panelReciept->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panelTop1->ResumeLayout(false);
			this->panelTop1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void btnReciept_Click(System::Object^ sender, System::EventArgs^ e) {
	// button for the reciept
	if (dataGridView1->Rows->Count < 1) {
		//if no data is present display a message
		MessageBox::Show("No items in the DataGridView. Please add items before generating a receipt.");
		return; 
	}
	//shows the reciept panel
	panelReciept->Show();
	//uses the functions to generate a reciept
	order->Reciept();
	order->saveToText();
	
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//builds the order of the customer
		order->buildOrder();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//removes the selected row
		order->removeRow();
	}

	private: System::Void btnOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		//shows the order panel
		panelOrder->Show();
	}


	private:System::Void btnBackOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		//hides the order panel 
		panelOrder->Hide();
		//shows the home panel
		panel2->Show();
	}


	private: System::Void lblFC_Click(System::Object^ sender, System::EventArgs^ e) {
		//initializes the form Menufc
		Menufc^ menufc = gcnew Menufc();
		//shows the menu fc
		menufc->Show();
	
	}
	private: System::Void lblEB_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//initializes the MenuEb
		MenuEB^ menueb = gcnew MenuEB();
		//shows the menuEB
		menueb->Show();
	
	}
	private: System::Void lblCC_Click(System::Object^ sender, System::EventArgs^ e) {
		//Initializes the Menu
		MenuCC^ menucc = gcnew MenuCC();
		//shows the menu CC
		menucc->Show();
	}

	private: System::Void printDocument1_(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
		//formats the font and size of the printed reciept
		System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
		e->Graphics->DrawString(richTextBox1->Text, fntString, Brushes::Black, 120, 120);
	}

	private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		//shows the print dialog box
		printPreviewDialog1->ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Exception Type: " + ex->GetType()->Name + "\nMessage: " + ex->Message);

		}
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//Shows the ooder panel
	panelReciept->Hide();
	panelOrder->Show();

	}

private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//closed the application
	Application::Exit();
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//closed the application
	Application::Exit();
}
private: System::Void btnSeeMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	//Shows the menu from the order panel
	panel2->Show();
	panelOrder->Hide();
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//closed the application
	Application::Exit();
}

private: System::Void button4_Click_2(System::Object^ sender, System::EventArgs^ e) {
	//closed the application
	Application::Exit();
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	//closed the application
	Application::Exit();
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Clear();
	dataGridView1->Rows->Clear();
	panelOrder->Hide();
	panel2->Show();
}

private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	//reset's the components for new order
	richTextBox1->Clear();
	dataGridView1->Rows->Clear();
	panelReciept->Hide();
	panelOrder->Hide();
	panel2->Show();
}


private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	//closed the application
	Application::Exit();
}

};
}
