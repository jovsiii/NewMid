#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;


public ref class Order {
    //directory for file handling
   static String^ currentDirectory = Path::GetDirectoryName(Application::ExecutablePath);

private:
    //private members
    DataGridView^ dataGridView1;
    RichTextBox^ richTextBox1;
    ComboBox^ comboBox1;
    ComboBox^ comboBox2;
    TextBox^ textBox1;

public:
    //constructor
    Order(DataGridView^ dgv, RichTextBox^ rtb, ComboBox^ cb1, ComboBox^ cb2, TextBox^ tb) {
        dataGridView1 = dgv;
        richTextBox1 = rtb;
        comboBox1 = cb1;
        comboBox2 = cb2;
        textBox1 = tb;
    }
    void Reciept() {    
        //clears the rich text box
        richTextBox1->Clear();
        //Get time and date for reciept
        DateTime currentDateTime = DateTime::Now;
        String^ formattedDateTime = currentDateTime.ToString("yyyy-MM-dd HH:mm:ss");
        //properties of the rich textbox
        richTextBox1->Font = gcnew System::Drawing::Font("Courier New", 10);

        //header of the reciept
        richTextBox1->AppendText("===================================================================" + Environment::NewLine);
        richTextBox1->AppendText("=                            PAHUWAY                              =" + Environment::NewLine);
        richTextBox1->AppendText("=                            RECEIPT                              =" + Environment::NewLine);
        richTextBox1->AppendText("=                                                                 = " + Environment::NewLine);
        richTextBox1->AppendText("=                         DATE: (" + formattedDateTime + ")             =" + Environment::NewLine);
        richTextBox1->AppendText("=                                                                 = " + Environment::NewLine);
        richTextBox1->AppendText("===================================================================" + Environment::NewLine);

        //individual paddings of the columns
        array<int>^ contentPadding = gcnew array<int>{5, 5, 8, 5};
        //individual paddings for the items
        array<int>^  barpadding= gcnew array<int>{10, 10, 5, 5}; 
        //interates the head of the column for their name
        for (int i = 0; i < dataGridView1->Columns->Count; ++i) {
            //prints the name of the column
            richTextBox1->AppendText(String::Format("{0," + (barpadding[i] + dataGridView1->Columns[i]->HeaderText->Length) + "}   ", dataGridView1->Columns[i]->HeaderText));
        }
        richTextBox1->AppendText(Environment::NewLine);


        // Iterate through each row in the DataGridView
        for each (DataGridViewRow ^ row in dataGridView1->Rows) {
            if (row->IsNewRow) continue;
            //prints data from the the datagridveiw
            for each (DataGridViewCell ^ cell in row->Cells) {
                richTextBox1->AppendText(String::Format("{0," + (contentPadding[cell->ColumnIndex] + cell->Value->ToString()->Length) + "}   ", cell->Value->ToString()));
            }

            richTextBox1->AppendText(Environment::NewLine);
        }

        int columnIndex = 3;

        int total = 0;
        // Calculate total from  the DataGridView
        for each (DataGridViewRow ^ row in dataGridView1->Rows) {
            if (row->IsNewRow) continue;

            Object^ value = row->Cells[columnIndex]->Value;
            //add the value of all cells in the column total
            if (value != nullptr) {
                total += Convert::ToInt32(value);
            }
        }
        //displays total
        richTextBox1->AppendText("===================================================================" + Environment::NewLine);
        richTextBox1->AppendText(String::Format("                                                TOTAL: Php. {0}", total + ".00") + Environment::NewLine);
     
    }

    void saveToText() {
        //create a unique file name for the receipt 
        String^ fileName = "Receipt_" + DateTime::Now.ToString("yyyyMMdd_HHmmss") + ".txt";
        //directory
        String^ filePath = Path::Combine(currentDirectory, fileName);

        try {
            //saves the content of the richtext box
            richTextBox1->SaveFile(filePath, RichTextBoxStreamType::PlainText);
            MessageBox::Show("Receipt saved successfully!");
        }
        catch (Exception^ ex) {
            //message box for user error
            MessageBox::Show("Error saving receipt: " + ex->Message);
        }
    }

    void fillCombobox() {
        //clears the component
        comboBox1->Items->Clear();
       //file used
        String^ fileName = "Menu.txt";
        //directory
        String^ filePath = Path::Combine(currentDirectory, fileName);

        try {
            //initialization of the file reader
            StreamReader^ file = gcnew StreamReader(filePath);
            //varaible that stores the text
            String^ line;
            //read the file and put
            while ((line = file->ReadLine()) != nullptr) {
                //adds the texts to the combobox
                comboBox1->Items->Add(line);
            }
            //closes the file
            file->Close();
        }
        catch (IOException^ ex) {
            MessageBox::Show("Error: " + ex->Message);
        }

    }

    void buildOrder() {
        //checks if the  input of the user is valid 
        if (comboBox1->SelectedItem != nullptr && comboBox2->SelectedItem != nullptr && !String::IsNullOrEmpty(textBox1->Text)) {
            //stores the converted text to int
            int numericValue;
            //checks if the texts is valid or the int is greater than 99
            if (Int32::TryParse(textBox1->Text, numericValue) && numericValue < 99) {
                array<Object^>^ rowValues = gcnew array<Object^>(dataGridView1->Columns->Count);
                //stores the values 
                rowValues[0] = comboBox1->SelectedItem;
                rowValues[1] = comboBox2->SelectedItem;
                rowValues[2] = numericValue;

                // total by multiplying Price and Quantity
                double price, quantity;
                //converts the combobox and textbox values to double and checks if their values are valid
                if (Double::TryParse(comboBox2->SelectedItem->ToString(), price) &&
                    Double::TryParse(textBox1->Text, quantity)) {
                    //computes for total
                    double total = price * quantity;
                    //stores the total 
                    rowValues[3] = total;
                    //adds all the values to the datagrid view
                    dataGridView1->Rows->Add(rowValues);
                    //resets the components
                    comboBox1->SelectedIndex = -1;
                    comboBox2->SelectedIndex = -1;
                    textBox1->Text = "";
                }
            }
            else {
                //message box for user error
                MessageBox::Show("Please enter a valid number (less than 99) in the TextBox.");
            }
        }
        else {
            //message box for user error
            MessageBox::Show("Please select an item from both ComboBoxes and fill the TextBox.");
        }

    }



    void removeRow() {
        if (dataGridView1->SelectedRows->Count > 0) {
            // Get the index of the selected row
            int selectedIndex = dataGridView1->SelectedRows[0]->Index;

            // Remove the selected row from the DataGridView
            dataGridView1->Rows->RemoveAt(selectedIndex);
        }
        else {
            //message box for user error
            MessageBox::Show("Please select a row to remove.");
        }

    }
};

