#pragma once

namespace Project34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
		int pipeSpeed = 8;
		int gravity = 5;
		int score = 0;
		
		   

	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pipeTop;
	protected:
	private: System::Windows::Forms::PictureBox^ flappyBird;
	private: System::Windows::Forms::PictureBox^ pipeGround;
	private: System::Windows::Forms::PictureBox^ ground;
	private: System::Windows::Forms::Label^ scoreTxt;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Timer^ gameTimer;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->pipeTop = (gcnew System::Windows::Forms::PictureBox());
			this->flappyBird = (gcnew System::Windows::Forms::PictureBox());
			this->pipeGround = (gcnew System::Windows::Forms::PictureBox());
			this->ground = (gcnew System::Windows::Forms::PictureBox());
			this->scoreTxt = (gcnew System::Windows::Forms::Label());
			this->gameTimer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pipeTop))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flappyBird))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pipeGround))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground))->BeginInit();
			this->SuspendLayout();
			// 
			// pipeTop
			// 
			this->pipeTop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pipeTop.BackgroundImage")));
			this->pipeTop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pipeTop->Location = System::Drawing::Point(257, 2);
			this->pipeTop->Name = L"pipeTop";
			this->pipeTop->Size = System::Drawing::Size(100, 216);
			this->pipeTop->TabIndex = 0;
			this->pipeTop->TabStop = false;
			// 
			// flappyBird
			// 
			this->flappyBird->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flappyBird.BackgroundImage")));
			this->flappyBird->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->flappyBird->Location = System::Drawing::Point(39, 240);
			this->flappyBird->Name = L"flappyBird";
			this->flappyBird->Size = System::Drawing::Size(70, 56);
			this->flappyBird->TabIndex = 1;
			this->flappyBird->TabStop = false;
			// 
			// pipeGround
			// 
			this->pipeGround->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pipeGround.BackgroundImage")));
			this->pipeGround->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pipeGround->Location = System::Drawing::Point(257, 523);
			this->pipeGround->Name = L"pipeGround";
			this->pipeGround->Size = System::Drawing::Size(100, 237);
			this->pipeGround->TabIndex = 2;
			this->pipeGround->TabStop = false;
			// 
			// ground
			// 
			this->ground->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ground.BackgroundImage")));
			this->ground->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ground->Location = System::Drawing::Point(-1, 757);
			this->ground->Name = L"ground";
			this->ground->Size = System::Drawing::Size(421, 139);
			this->ground->TabIndex = 3;
			this->ground->TabStop = false;
			// 
			// scoreTxt
			// 
			this->scoreTxt->AutoSize = true;
			this->scoreTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scoreTxt->Location = System::Drawing::Point(21, 19);
			this->scoreTxt->Name = L"scoreTxt";
			this->scoreTxt->Size = System::Drawing::Size(55, 13);
			this->scoreTxt->TabIndex = 4;
			this->scoreTxt->Text = L"Score: 0";
			// 
			// gameTimer
			// 
			this->gameTimer->Enabled = true;
			this->gameTimer->Interval = 20;
			this->gameTimer->Tick += gcnew System::EventHandler(this, &Game::gameTimerEvent);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(414, 893);
			this->Controls->Add(this->scoreTxt);
			this->Controls->Add(this->ground);
			this->Controls->Add(this->pipeGround);
			this->Controls->Add(this->flappyBird);
			this->Controls->Add(this->pipeTop);
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::gameKeyIsDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::gameKeyIsUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pipeTop))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flappyBird))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pipeGround))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ground))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void gameTimerEvent(System::Object^ sender, System::EventArgs^ e) {
	flappyBird->Top += gravity;
	pipeGround->Left -= pipeSpeed;
	pipeTop->Left -= pipeSpeed;


	if (pipeGround->Left < -50) {
		pipeGround->Left = 400;
	}
	if (pipeTop->Left < -80) {
		pipeTop->Left = 360;
	}
}
private: System::Void gameKeyIsDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Space) {
		gravity = -10;
	}
}
private: System::Void gameKeyIsUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Space) {
		gravity = 10;
	}

}
};
}
