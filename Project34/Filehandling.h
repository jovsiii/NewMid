#pragma once
#include"Menus.h"

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
using namespace Project34;


ref class Login {
    static String^ currentDirectory = Path::GetDirectoryName(Application::ExecutablePath);
    static String^ fileName = "cred.txt";
    static String^ filePath = Path::Combine(currentDirectory, fileName);

public:
    static bool login(TextBox^ txtboxUser, TextBox^ txtBoxPass) {
        String^ username = txtboxUser->Text;
        String^ password = txtBoxPass->Text;


        try {
            StreamReader^ file = gcnew StreamReader(filePath);

            String^ line;
            bool loggedIn = false;

            while ((line = file->ReadLine()) != nullptr) {
                array<String^>^ parts = line->Split(',');

                if (parts->Length == 3 && parts[0]->Trim() == username && parts[1]->Trim() == password) {
                    loggedIn = true;
                    break;

                }
            }

            file->Close();

            if (loggedIn) {
                Menus^ main = gcnew Menus();

                main->Show();
                return true;
            }
            else {
                MessageBox::Show("Invalid username or password. Please try again.");
                return false;
            }
        }
        catch (IOException^ e) {
            MessageBox::Show("Error accessing the file: " + e->Message);
            return false;
        }
    }

    static bool reg(TextBox^ tbUsername, TextBox^ tbPassword, TextBox^ tbConfirm) {
        array<TextBox^>^ textBoxes = { tbUsername, tbPassword, tbConfirm };

        for each (TextBox ^ textBox in textBoxes) {
            String^ text = textBox->Text->Trim();
            if (String::IsNullOrEmpty(text) || String::IsNullOrWhiteSpace(text)) {
                MessageBox::Show("Please fill in all the fields.");
                return false; 
            }
        }

        if (tbPassword->Text->Trim() != tbConfirm->Text->Trim()) {
            MessageBox::Show("Passwords do not match.");
            return false; 
        }

        try {
            if (File::Exists(filePath)) {
                String^ Accounts = File::ReadAllText(filePath);

                String^ newAccount = tbUsername->Text->Trim() + "," + tbPassword->Text->Trim() + "," + tbConfirm->Text->Trim();

          
                if (Accounts->Contains(newAccount)) {
                    MessageBox::Show("Account already exists.");
                    return false;
                }
            }

            StreamWriter^ file = gcnew StreamWriter(filePath, true);

            String^ newAccount = tbUsername->Text->Trim() + "," + tbPassword->Text->Trim() + "," + tbConfirm->Text->Trim();

            file->WriteLine(newAccount);

            file->Close();

            MessageBox::Show("Account created successfully!");
            return true; 
        }
        catch (IOException^ ex) {
            MessageBox::Show("Error accessing the file: " + ex->Message);
            return false; 
        }
    }


};








