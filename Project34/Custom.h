#pragma once

using namespace System::Drawing::Drawing2D;
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

public ref class Rounded
{
public:
    static void RoundCorners(Control^ control, int radius)
    {
        GraphicsPath^ path = gcnew GraphicsPath();

        path->AddArc(0, 0, radius * 2, radius * 2, 180, 90);
        path->AddArc(control->Width - radius * 2, 0, radius * 2, radius * 2, 270, 90);
        path->AddArc(control->Width - radius * 2, control->Height - radius * 2, radius * 2, radius * 2, 0, 90);
        path->AddArc(0, control->Height - radius * 2, radius * 2, radius * 2, 90, 90);
        path->CloseAllFigures();

        control->Region = gcnew System::Drawing::Region(path);
    }
public:
    static void CurveButton(Button^ button, int radius)
    {
        GraphicsPath^ path = gcnew GraphicsPath();

        path->AddArc(0, 0, radius * 2, radius * 2, 180, 90);
        path->AddArc(button->Width - radius * 2, 0, radius * 2, radius * 2, 270, 90);
        path->AddArc(button->Width - radius * 2, button->Height - radius * 2, radius * 2, radius * 2, 0, 90);
        path->AddArc(0, button->Height - radius * 2, radius * 2, radius * 2, 90, 90);
        path->CloseAllFigures();

        button->Region = gcnew System::Drawing::Region(path);
    }



};

public ref class ReceiptManager {
private:
    DataGridView^ dataGridView1;
    RichTextBox^ richTextBox1;
    ComboBox^ comboBox1;
    ComboBox^ comboBox2;
    TextBox^ textBox1;

public:
    ReceiptManager(DataGridView^ dgv, RichTextBox^ rtb, ComboBox^ cb1, ComboBox^ cb2, TextBox^ tb) {
        dataGridView1 = dgv;
        richTextBox1 = rtb;
        comboBox1 = cb1;
        comboBox2 = cb2;
        textBox1 = tb;
    }
    void DisplayAllItemsInRichTextBox() {

        int columnIndex = 3; 

        int total = 0;

        for each (DataGridViewRow ^ row in dataGridView1->Rows) {
            if (row->IsNewRow) continue;

            Object^ value = row->Cells[columnIndex]->Value;

            if (value != nullptr) {
                total += Convert::ToInt32(value);
            }
        }

        DateTime currentDateTime = DateTime::Now;
        String^ formattedDateTime = currentDateTime.ToString("yyyy-MM-dd HH:mm:ss");

        richTextBox1->Clear();

        
        richTextBox1->Font = gcnew System::Drawing::Font("Courier New", 10);

      
        richTextBox1->AppendText("===================================================================" + Environment::NewLine);
        richTextBox1->AppendText("                             PAHUWAY        " + Environment::NewLine);
        richTextBox1->AppendText("                             RECEIPT        " + Environment::NewLine);
        richTextBox1->AppendText("          " + Environment::NewLine);
        richTextBox1->AppendText("                          DATE: (" + formattedDateTime + ")        " + Environment::NewLine);
        richTextBox1->AppendText("          " + Environment::NewLine);
        richTextBox1->AppendText("===================================================================" + Environment::NewLine);

       
        array<int>^ columnPadding = gcnew array<int>{5, 5, 8, 5}; 

        array<int>^ columnPadding1 = gcnew array<int>{10, 10, 5, 5};

        for (int i = 0; i < dataGridView1->Columns->Count; ++i) {
            richTextBox1->AppendText(String::Format("{0," + (columnPadding1[i] + dataGridView1->Columns[i]->HeaderText->Length) + "}   ", dataGridView1->Columns[i]->HeaderText));
        }
        richTextBox1->AppendText(Environment::NewLine);


        // Iterate through each row in the DataGridView
        for each (DataGridViewRow ^ row in dataGridView1->Rows) {
            if (row->IsNewRow) continue;

            for each (DataGridViewCell ^ cell in row->Cells) {
                int padding = (columnPadding[cell->ColumnIndex] - cell->Value->ToString()->Length) / 2;
                richTextBox1->AppendText(String::Format("{0," + (columnPadding[cell->ColumnIndex] + cell->Value->ToString()->Length) + "}   ", cell->Value->ToString()));
            }

            richTextBox1->AppendText(Environment::NewLine);
        }

        richTextBox1->AppendText("===================================================================" + Environment::NewLine);
        richTextBox1->AppendText(String::Format("                                                TOTAL: Php. {0}", total + ".00") + Environment::NewLine);
    }




    void FillComboBox() {
        comboBox1->Items->Clear();
        String^ currentDirectory = Path::GetDirectoryName(Application::ExecutablePath);
        String^ fileName = "Menu.txt";
        String^ filePath = Path::Combine(currentDirectory, fileName);

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

    void SetItems() {

        if (comboBox1->SelectedItem != nullptr && comboBox2->SelectedItem != nullptr && !String::IsNullOrEmpty(textBox1->Text)) {
            int numericValue;
            if (Int32::TryParse(textBox1->Text, numericValue) && numericValue < 99) {
                array<Object^>^ rowValues = gcnew array<Object^>(dataGridView1->Columns->Count);

                rowValues[0] = comboBox1->SelectedItem;
                rowValues[1] = comboBox2->SelectedItem;
                rowValues[2] = numericValue;

                // total by multiplying Price and Quantity
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

    void DeleteSelectedRow() {
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
};
