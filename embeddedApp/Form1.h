#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::IContainer^ components;
		System::Windows::Forms::GroupBox^ lampGroupBox;
		System::Windows::Forms::Button^ lampButton;
		System::Windows::Forms::Label^ lampLabel;
		System::Windows::Forms::GroupBox^ plugGroupBox;
		System::Windows::Forms::Button^ plugButton;
		System::Windows::Forms::Label^ plugLabel;
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->lampGroupBox = (gcnew System::Windows::Forms::GroupBox());
            this->lampButton = (gcnew System::Windows::Forms::Button());
            this->lampLabel = (gcnew System::Windows::Forms::Label());
            this->plugGroupBox = (gcnew System::Windows::Forms::GroupBox());
            this->plugButton = (gcnew System::Windows::Forms::Button());
            this->plugLabel = (gcnew System::Windows::Forms::Label());

            // 
            // lampGroupBox
            // 
            this->lampGroupBox->Controls->Add(this->lampButton);
            this->lampGroupBox->Controls->Add(this->lampLabel);
            this->lampGroupBox->Location = System::Drawing::Point(12, 12);
            this->lampGroupBox->Name = L"lampGroupBox";
            this->lampGroupBox->Size = System::Drawing::Size(200, 100);
            this->lampGroupBox->TabIndex = 0;
            this->lampGroupBox->TabStop = false;
            this->lampGroupBox->Text = L"Lamp On/Off";

            // 
            // lampLabel
            // 
            this->lampLabel->AutoSize = true;
            this->lampLabel->Location = System::Drawing::Point(6, 20);
            this->lampLabel->Name = L"lampLabel";
            this->lampLabel->Size = System::Drawing::Size(75, 13);
            this->lampLabel->TabIndex = 0;
            this->lampLabel->Text = L"Turn Lamp:";

            // 
            // lampButton
            // 
            this->lampButton->Location = System::Drawing::Point(9, 40);
            this->lampButton->Name = L"lampButton";
            this->lampButton->Size = System::Drawing::Size(75, 23);
            this->lampButton->TabIndex = 1;
            this->lampButton->Text = L"Off";
            this->lampButton->UseVisualStyleBackColor = true;
            this->lampButton->Click += gcnew System::EventHandler(this, &Form1::lampButton_Click);

            // 
            // plugGroupBox
            // 
            this->plugGroupBox->Controls->Add(this->plugButton);
            this->plugGroupBox->Controls->Add(this->plugLabel);
            this->plugGroupBox->Location = System::Drawing::Point(12, 130);
            this->plugGroupBox->Name = L"plugGroupBox";
            this->plugGroupBox->Size = System::Drawing::Size(200, 100);
            this->plugGroupBox->TabIndex = 1;
            this->plugGroupBox->TabStop = false;
            this->plugGroupBox->Text = L"Plug On/Off";

            // 
            // plugLabel
            // 
            this->plugLabel->AutoSize = true;
            this->plugLabel->Location = System::Drawing::Point(6, 20);
            this->plugLabel->Name = L"plugLabel";
            this->plugLabel->Size = System::Drawing::Size(80, 13);
            this->plugLabel->TabIndex = 0;
            this->plugLabel->Text = L"Turn Plug:";

            // 
            // plugButton
            // 
            this->plugButton->Location = System::Drawing::Point(9, 40);
            this->plugButton->Name = L"plugButton";
            this->plugButton->Size = System::Drawing::Size(75, 23);
            this->plugButton->TabIndex = 1;
            this->plugButton->Text = L"Off";
            this->plugButton->UseVisualStyleBackColor = true;
            this->plugButton->Click += gcnew System::EventHandler(this, &Form1::plugButton_Click);

            // 
            // Form1
            // 
            this->ClientSize = System::Drawing::Size(284, 261);
            this->Controls->Add(this->plugGroupBox);
            this->Controls->Add(this->lampGroupBox);
            this->Name = L"Form1";
            this->Text = L"IoT Control App";
            this->lampGroupBox->ResumeLayout(false);
            this->lampGroupBox->PerformLayout();
            this->plugGroupBox->ResumeLayout(false);
            this->plugGroupBox->PerformLayout();
            this->ResumeLayout(false);
        }

        // Lamp Button Click Event
        void lampButton_Click(Object^ sender, EventArgs^ e)
        {
            if (lampButton->Text == "Off")
            {
                lampButton->Text = "On";
                // Code to turn lamp on
                // For example: send command to IoT device to turn lamp on
            }
            else
            {
                lampButton->Text = "Off";
                // Code to turn lamp off
                // For example: send command to IoT device to turn lamp off
            }
        }

        // Plug Button Click Event
        void plugButton_Click(Object^ sender, EventArgs^ e)
        {
            if (plugButton->Text == "Off")
            {
                plugButton->Text = "On";
                // Code to turn plug on
                // For example: send command to IoT device to turn plug on
            }
            else
            {
                plugButton->Text = "Off";
                // Code to turn plug off
                // For example: send command to IoT device to turn plug off
            }
        }
    };
}
