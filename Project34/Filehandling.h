#pragma once
#include"Menus.h"
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
using namespace Project34;
ref class Login {
public:

    static void login(TextBox^ txtboxUser, TextBox^ txtBoxPass) {
        String^ username = txtboxUser->Text;
        String^ password = txtBoxPass->Text;

        String^ documentsPath = Environment::GetFolderPath(Environment::SpecialFolder::MyDocuments);
        String^ fileName = "cred.txt";
        String^ filePath = Path::Combine(documentsPath, fileName);

        try {
            StreamReader^ file = gcnew StreamReader(filePath);

            String^ line;
            bool loggedIn = false;

            while ((line = file->ReadLine()) != nullptr) {
                array<String^>^ parts = line->Split(',');

                if (parts->Length == 4 && parts[0]->Trim() == username && parts[1]->Trim() == password) {
                    loggedIn = true;
                    break;
                }
            }

            file->Close();

            if (loggedIn) {
                Menus^ main = gcnew Menus();
                main->Show();
              
            }
            else {
                MessageBox::Show("Invalid username or password. Please try again.");
            }
        }
        catch (IOException^ e) {
            MessageBox::Show("Error accessing the file: " + e->Message);
        }
    
    }
};

ref class Register {


public: static void reg(TextBox^ tbUsername, TextBox^ tbEmail, TextBox^ tbPassword, TextBox^ tbConfirm) {

    array<TextBox^>^ textBoxes = { tbUsername, tbEmail, tbPassword, tbConfirm };
    
    for each (TextBox ^ textBox in textBoxes) {
        String^ text = textBox->Text->Trim(); 
        if (String::IsNullOrEmpty(text) || String::IsNullOrWhiteSpace(text)) {
            MessageBox::Show("Please fill in all the fields.");
            return;
        }
    }
    
    if (tbPassword->Text->Trim() != tbConfirm->Text->Trim()) {
        MessageBox::Show("Passwords do not match.");
    }
    String^ documentsPath = Environment::GetFolderPath(Environment::SpecialFolder::MyDocuments);
    String^ fileName = "cred.txt";
    String^ filePath = Path::Combine(documentsPath, fileName);
    try {
        StreamWriter^ file = gcnew StreamWriter(filePath, true);
       
        String^ newAccount = tbUsername->Text->Trim() + "," + tbPassword->Text->Trim() + "," + tbEmail->Text->Trim() + "," + tbConfirm->Text->Trim();

        file->WriteLine(newAccount);

        file->Close(); 

        MessageBox::Show("Account created successfully!");
    }
    catch (IOException^ ex) {
        MessageBox::Show("Error accessing the file: " + ex->Message);
    }
}
};





