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



};

public ref class ButtonStyler
{
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

        // Get the current date and time
        DateTime currentDateTime = DateTime::Now;

        // Format the date and time as a string
        String^ formattedDateTime = currentDateTime.ToString("yyyy-MM-dd HH:mm:ss");

        // Initialize a RichTextBox to hold the formatted values
        richTextBox1->Clear();  // Assuming you have a RichTextBox named richTextBox1

        // Add a header to the receipt with the current date and time
        richTextBox1->AppendText("=====================================================" + Environment::NewLine);
        richTextBox1->AppendText("                             RECEIPT (" + formattedDateTime + ")        " + Environment::NewLine);
        richTextBox1->AppendText("=====================================================" + Environment::NewLine);

        // Display column names with centered text
        for each (DataGridViewColumn ^ column in dataGridView1->Columns) {
            int padding = (20 - column->HeaderText->Length) / 2;
            richTextBox1->AppendText(String::Format("{0," + padding + "}{1," + (20 - padding) + "}", "", column->HeaderText));
        }
        richTextBox1->AppendText(Environment::NewLine);

        // Iterate through each row in the DataGridView
        for each (DataGridViewRow ^ row in dataGridView1->Rows) {
            // Skip the new row at the bottom of the DataGridView
            if (row->IsNewRow) continue;

            // Iterate through each cell in the row
            for each (DataGridViewCell ^ cell in row->Cells) {
                // Check if the cell value is not null
                if (cell->Value != nullptr) {
                    // Append the cell value to the RichTextBox with centered formatting
                    int padding = (20 - cell->Value->ToString()->Length) / 2;
                    richTextBox1->AppendText(String::Format("{0," + padding + "}{1," + (22 - padding) + "}", "", cell->Value->ToString()));
                }
                else {
                    // Append an empty string if the cell value is null
                    richTextBox1->AppendText(String::Format("{20,-40}", " - "));
                }
            }

            // Add a newline after each row
            richTextBox1->AppendText(Environment::NewLine);
        }

        // Add a footer to the receipt
        richTextBox1->AppendText("======================================================" + Environment::NewLine);
        richTextBox1->AppendText("                                                                                 TOTAL:  " + total + Environment::NewLine);
        
    }

    void FillComboBox() {
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

    void SetItems() {

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
