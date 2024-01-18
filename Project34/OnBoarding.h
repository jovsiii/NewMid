#pragma once

namespace Project34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OnBoarding
	/// </summary>
	public ref class OnBoarding : public System::Windows::Forms::Form
	{
	public:
		OnBoarding(void)
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
		~OnBoarding()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OnBoarding::typeid));
			this->SuspendLayout();
			// 
			// OnBoarding
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"OnBoarding";
			this->Load += gcnew System::EventHandler(this, &OnBoarding::OnBoarding_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void OnBoarding_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
