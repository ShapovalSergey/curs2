#pragma once
#include "doc1.cpp"
#include "doctor.cpp"
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <msclr\marshal.h>
#include <msclr/marshal_cppstd.h>
#include <fstream>




namespace curs2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� doc_enter
	/// </summary>
	public ref class doc_enter : public System::Windows::Forms::Form
	{
	public:
		doc_enter(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~doc_enter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Label^ label1_mode;
	private: System::Windows::Forms::Button^ enter;
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::TextBox^ textBox_login;
	private: System::Windows::Forms::Label^ login;
	private: System::Windows::Forms::Label^ password;

	private: System::Windows::Forms::Label^ error_pass;
	private: System::Windows::Forms::Label^ error_login;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->back = (gcnew System::Windows::Forms::Button());
			this->label1_mode = (gcnew System::Windows::Forms::Label());
			this->enter = (gcnew System::Windows::Forms::Button());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_login = (gcnew System::Windows::Forms::TextBox());
			this->login = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->error_pass = (gcnew System::Windows::Forms::Label());
			this->error_login = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->back->ForeColor = System::Drawing::SystemColors::ControlText;
			this->back->Location = System::Drawing::Point(12, 499);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(150, 50);
			this->back->TabIndex = 17;
			this->back->Text = L"�����";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &doc_enter::back_Click);
			// 
			// label1_mode
			// 
			this->label1_mode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1_mode->Location = System::Drawing::Point(285, 150);
			this->label1_mode->Name = L"label1_mode";
			this->label1_mode->Size = System::Drawing::Size(232, 24);
			this->label1_mode->TabIndex = 18;
			this->label1_mode->Text = L"������� ����� � ������\r\n";
			// 
			// enter
			// 
			this->enter->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enter->ForeColor = System::Drawing::SystemColors::ControlText;
			this->enter->Location = System::Drawing::Point(622, 499);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(150, 50);
			this->enter->TabIndex = 19;
			this->enter->Text = L"�����";
			this->enter->UseVisualStyleBackColor = false;
			this->enter->Click += gcnew System::EventHandler(this, &doc_enter::enter_Click);
			// 
			// textBox_password
			// 
			this->textBox_password->Location = System::Drawing::Point(482, 250);
			this->textBox_password->MaxLength = 60;
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(158, 20);
			this->textBox_password->TabIndex = 23;
			// 
			// textBox_login
			// 
			this->textBox_login->Location = System::Drawing::Point(162, 250);
			this->textBox_login->MaxLength = 30;
			this->textBox_login->Name = L"textBox_login";
			this->textBox_login->Size = System::Drawing::Size(158, 20);
			this->textBox_login->TabIndex = 22;
			// 
			// login
			// 
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login->Location = System::Drawing::Point(85, 246);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(71, 29);
			this->login->TabIndex = 24;
			this->login->Text = L"�����:";
			// 
			// password
			// 
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password->Location = System::Drawing::Point(392, 246);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(84, 24);
			this->password->TabIndex = 25;
			this->password->Text = L"������:";
			// 
			// error_pass
			// 
			this->error_pass->AutoSize = true;
			this->error_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->error_pass->ForeColor = System::Drawing::Color::Red;
			this->error_pass->Location = System::Drawing::Point(479, 273);
			this->error_pass->Name = L"error_pass";
			this->error_pass->Size = System::Drawing::Size(204, 16);
			this->error_pass->TabIndex = 30;
			this->error_pass->Text = L"������: �������� ������";
			this->error_pass->Visible = false;
			// 
			// error_login
			// 
			this->error_login->AutoSize = true;
			this->error_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->error_login->ForeColor = System::Drawing::Color::Red;
			this->error_login->Location = System::Drawing::Point(159, 273);
			this->error_login->Name = L"error_login";
			this->error_login->Size = System::Drawing::Size(194, 16);
			this->error_login->TabIndex = 31;
			this->error_login->Text = L"������: �������� �����";
			this->error_login->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(85, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 32;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// doc_enter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->error_login);
			this->Controls->Add(this->error_pass);
			this->Controls->Add(this->password);
			this->Controls->Add(this->login);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_login);
			this->Controls->Add(this->enter);
			this->Controls->Add(this->label1_mode);
			this->Controls->Add(this->back);
			this->Name = L"doc_enter";
			this->Text = L"����";
			this->Load += gcnew System::EventHandler(this, &doc_enter::doc_enter_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::string dekod(std::string par1, std::string kod1)
		{
			char en1[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z' };
			char ru1[] = { '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�','�' };

			std::string par;
			for (int i = 0; i < par1.length(); i++)
			{
				if (kod1[i] == '0')
				{
					for (int j = 0; j < 66; j++)
					{
						if (par1[i] == ru1[j])
						{
							if (j - i > -1)
							{
								par += en1[j - i];
							}
							else
							{
								par += en1[62 - j - i];
							}
						}
					}
				}
				else if (kod1[i] == '1')
				{
					for (int z = 0; z < 62; z++)
					{
						if (par1[i] == en1[z])
						{
							if (z - i > -1)
							{
								par += ru1[z - i];
							}
							else
							{
								par += ru1[66 - z - i];
							}
						}
					}
				}
			}
			return par;


		};
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	private: System::Void doc_enter_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox_login->Text = "";
		textBox_password->Text = "";
	}
private: System::Void enter_Click(System::Object^ sender, System::EventArgs^ e) 
{
	error_login->Visible = false; error_pass->Visible = false;
	FILE* p2; char str1[153], stroka[153]; std::string str,par,kod,pass; msclr::interop::marshal_context context; int k=0;
	p2 = fopen("logins.txt", "r");
	if (p2 == NULL)
	{
		p2 = fopen("logins.txt", "w");
	}
	fcloseall();
	int n = -2;
	p2 = fopen("logins.txt", "r");
	for (int i = 0; fscanf(p2, "%s", str) != EOF; i++)
	{
		fseek(p2, i * 153, SEEK_SET);
		n++;
	}
	fcloseall();
	p2 = fopen("logins.txt", "r");
	for (int i = 0; i < n; i++)
	{
		fgets(str1, 153, p2);
		strcpy(stroka, str1);
		char* ptr = strtok(stroka, " ");
		while (ptr == NULL)
		{
			fgets(str1, 153, p2); strcpy(stroka, str1); ptr = strtok(stroka, " ");
		}
		if (!textBox_login->Text->Equals(context.marshal_as<String^>(ptr)))
		{
			k++;
		}
	}
	if ((k==n)||(n==-2))
	{
		error_login->Visible = true;
	}
	fcloseall();

	p2 = fopen("logins.txt", "r");
	for (int i = 0; i < n; i++)
	{
		fgets(str1, 153, p2);
		strcpy(stroka, str1);
		char* ptr = strtok(stroka, " "); 
		if ((ptr != NULL)&&(textBox_login->Text->Equals(context.marshal_as<String^>(ptr))))
		{
			ptr = strtok(NULL, " "); par = ptr; ptr = strtok(NULL, " "); kod = ptr;
		}
		else
		{
			while (ptr == NULL)
		{
			fgets(str1, 153, p2); strcpy(stroka, str1); ptr = strtok(stroka, " ");
		}
			if (textBox_login->Text->Equals(context.marshal_as<String^>(ptr))) 
			{
				ptr = strtok(NULL, " "); par = ptr; ptr = strtok(NULL, " "); kod = ptr;
			}
		}
	}
	fcloseall();
	//MessageBox::Show(context.marshal_as<String^>(par)+" "+ context.marshal_as<String^>(kod), "�������������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	pass=dekod(par,kod);
	//MessageBox::Show(context.marshal_as<String^>(pass), "�������������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	if (!textBox_password->Text->Equals(context.marshal_as<String^>(pass)))
	{
		error_pass->Visible = true;
	}


	if ((error_pass->Visible == false)&&(error_login->Visible == false))
	{
		std::string vivod,vivod1,log;
		login->Visible = false;
		password->Visible = false;
		label1_mode->Visible = false;
		textBox_login->Visible = false;
		textBox_password->Visible = false;
		enter->Visible = false;
		back->Text = "�����";
		label1->Visible = true;
		p2 = fopen("doctors.txt", "r");
		for (int i = 0; i < n; i++)
		{
			vivod = "";
			fgets(str1, 153, p2);
			strcpy(stroka, str1);
			char* ptr = strtok(stroka, " "); //ptr = strtok(NULL, " ");
			if (ptr != NULL) 
			{
				vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr;  vivod += '\n'; ptr = strtok(NULL, " "); vivod += ptr; ptr = strtok(NULL, " "); log = ptr;
			//MessageBox::Show(context.marshal_as<String^>(vivod), "�������������", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			
			else 	if (ptr == NULL)
			{
				while (ptr == NULL)
				{
					fgets(str1, 153, p2); strcpy(stroka, str1); ptr = strtok(stroka, " ");
				}
				vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr; vivod += '\n'; ptr = strtok(NULL, " "); vivod += ptr; ptr = strtok(NULL, " "); log = ptr;
			}
			//MessageBox::Show(context.marshal_as<String^>(vivod), "�������������", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (textBox_login->Text->Equals(context.marshal_as<String^>(log)))
			{
				vivod1 = vivod;
			}
		}
		fcloseall();
		label1->Text = context.marshal_as<String^>(vivod1);




	}



}
};
}
