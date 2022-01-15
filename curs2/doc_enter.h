#pragma once
//#include "doc1.cpp"
#include "doctor.cpp"
#include "oproscheck.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <msclr\marshal.h>
#include <msclr/marshal_cppstd.h>
#include <fstream>

extern std::vector<std::string>valera;

namespace curs2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для doc_enter
	/// </summary>
	public ref class doc_enter : public System::Windows::Forms::Form
	{
	public:
		doc_enter(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ComboBox^ comboBox_pat;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ error_spec;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
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
			this->comboBox_pat = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->error_spec = (gcnew System::Windows::Forms::Label());
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
			this->back->Text = L"Назад";
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
			this->label1_mode->Text = L"Введите логин и пароль\r\n";
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
			this->enter->Text = L"Войти";
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
			this->login->Text = L"Логин:";
			// 
			// password
			// 
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password->Location = System::Drawing::Point(392, 246);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(84, 24);
			this->password->TabIndex = 25;
			this->password->Text = L"Пароль:";
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
			this->error_pass->Text = L"Ошибка: Неверный пароль";
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
			this->error_login->Text = L"Ошибка: Неверный логин";
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
			// comboBox_pat
			// 
			this->comboBox_pat->FormattingEnabled = true;
			this->comboBox_pat->Location = System::Drawing::Point(304, 321);
			this->comboBox_pat->Name = L"comboBox_pat";
			this->comboBox_pat->Size = System::Drawing::Size(223, 21);
			this->comboBox_pat->TabIndex = 43;
			this->comboBox_pat->Visible = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(85, 319);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 23);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Выберите опрос из списка";
			this->label2->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(557, 321);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 21);
			this->button1->TabIndex = 44;
			this->button1->Text = L"Посмотреть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &doc_enter::button1_Click);
			// 
			// error_spec
			// 
			this->error_spec->AutoSize = true;
			this->error_spec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->error_spec->ForeColor = System::Drawing::Color::Red;
			this->error_spec->Location = System::Drawing::Point(325, 345);
			this->error_spec->Name = L"error_spec";
			this->error_spec->Size = System::Drawing::Size(166, 16);
			this->error_spec->TabIndex = 45;
			this->error_spec->Text = L"Ошибка: Пустое поле";
			this->error_spec->Visible = false;
			// 
			// doc_enter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->error_spec);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox_pat);
			this->Controls->Add(this->label2);
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
			this->Text = L"Вход";
			this->Load += gcnew System::EventHandler(this, &doc_enter::doc_enter_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::string dekod(std::string par1, std::string kod1)
		{
			char en1[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z' };
			char ru1[] = { 'а', 'А', 'б', 'Б', 'в', 'В', 'г', 'Г', 'д', 'Д', 'е', 'Е', 'ё', 'Ё', 'ж', 'Ж', 'з', 'З', 'и', 'И', 'й', 'Й', 'к', 'К', 'л', 'Л', 'м', 'М', 'н', 'Н', 'о', 'О', 'п', 'П', 'р', 'Р', 'с', 'С', 'т', 'Т', 'у', 'У', 'ф', 'Ф', 'х', 'Х', 'ц', 'Ц', 'ч', 'Ч', 'ш', 'Ш', 'щ', 'Щ', 'ъ', 'Ъ', 'ы', 'Ы', 'ь', 'Ь', 'э', 'Э', 'ю', 'Ю', 'я','Я' };

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
		if (back->Text=="Выйти")
		{
			if (System::Windows::Forms::DialogResult::Yes == MessageBox::Show("Вы уверены, что хотите выйти?", "Выход", MessageBoxButtons::YesNo, MessageBoxIcon::Warning))
			{
				this->Close();
			}
		}
		else
		{
				this->Close();
		}
		//
	}
	private: System::Void doc_enter_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox_login->Text = "";
		textBox_password->Text = "";
		label2->Visible = false;
		label1->Visible = false;
		comboBox_pat->Visible = false;
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
	//MessageBox::Show(context.marshal_as<String^>(par)+" "+ context.marshal_as<String^>(kod), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	pass=dekod(par,kod);
	//MessageBox::Show(context.marshal_as<String^>(pass), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	if (!textBox_password->Text->Equals(context.marshal_as<String^>(pass)))
	{
		error_pass->Visible = true;
	}


	if ((error_pass->Visible == false)&&(error_login->Visible == false))
	{
		std::string vivod,vivod1,log,spec,spec1,name,name1,pat1;
		login->Visible = false;
		password->Visible = false;
		label1_mode->Visible = false;
		textBox_login->Visible = false;
		textBox_password->Visible = false;
		enter->Visible = false;
		label2->Visible = true;
		button1->Visible = true;
		comboBox_pat->Visible = true;
		back->Text = "Выйти";
		label1->Visible = true;
		p2 = fopen("doctors.txt", "r");
		for (int i = 0; i < n; i++)
		{
			vivod = ""; name = "";
			fgets(str1, 153, p2);
			strcpy(stroka, str1);
			char* ptr = strtok(stroka, " "); //ptr = strtok(NULL, " ");
			if (ptr != NULL) 
			{
				vivod += ptr; name += ptr; name += ' '; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr; name += ptr[0]; name += '.'; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr; name += ptr[0]; name += '.';   vivod += '\n'; ptr = strtok(NULL, " "); vivod += ptr; spec = ptr; ptr = strtok(NULL, " "); log = ptr;
			//MessageBox::Show(context.marshal_as<String^>(vivod), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			
			else 	if (ptr == NULL)
			{
				while (ptr == NULL)
				{
					fgets(str1, 153, p2); strcpy(stroka, str1); ptr = strtok(stroka, " ");
				}
				vivod += ptr; name += ptr; name += ' '; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr; name += ptr[0]; name += '.'; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr; name += ptr[0]; name += '.';   vivod += '\n'; ptr = strtok(NULL, " "); vivod += ptr; spec = ptr; ptr = strtok(NULL, " "); log = ptr;
			}
			//MessageBox::Show(context.marshal_as<String^>(vivod), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (textBox_login->Text->Equals(context.marshal_as<String^>(log)))
			{
				name1 = name;
				spec1 = spec;
				vivod1 = vivod;
			}
		}
		fcloseall(); 
		label1->Text = context.marshal_as<String^>(vivod1);// int nomer;
		//MessageBox::Show(context.marshal_as<String^>(name1+spec1), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		if (spec1=="Гастроэнтеролог")
		{
			p2 = fopen("opros3.txt", "r");
			if (p2 == NULL)
			{
				p2 = fopen("opros3.txt", "w");
			}
			fcloseall();
			int o = -2;
			p2 = fopen("opros3.txt", "r");
			for (int i = 0; fscanf(p2, "%s", str) != EOF; i++)
			{
				fseek(p2, i * 113, SEEK_SET);
				o++;
			}
			//std::string* mas = new std::string[o];
			valera.clear();
			fcloseall();
			p2 = fopen("opros3.txt", "r");
			for (int i = 0; i < o; i++)
			{
				vivod = ""; pat1 = "";
				fgets(str1, 113, p2);
				strcpy(stroka, str1);
				char* ptr = strtok(stroka, " "); //ptr = strtok(NULL, " ");
				if (ptr != NULL)
				{
					valera.push_back(str1);
					vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr; ptr = strtok(NULL, " "); ptr = strtok(NULL, " "); pat1 += ptr; pat1 += ' '; ptr = strtok(NULL, " "); pat1 += ptr; pat1 += ' '; ptr = strtok(NULL, " "); pat1 += ptr; 
					//MessageBox::Show(context.marshal_as<String^>(vivod+" "+name1), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
					if (vivod==name1)
					{
						comboBox_pat->Items->Add(context.marshal_as<String^>(pat1));
					}
					//MessageBox::Show(context.marshal_as<String^>(vivod), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
					
				}

				else 	if (ptr == NULL)
				{
					while (ptr == NULL)
					{
						fgets(str1, 113, p2); strcpy(stroka, str1); ptr = strtok(stroka, " ");
					}
					valera.push_back(str1);
					vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr; ptr = strtok(NULL, " "); ptr = strtok(NULL, " "); pat1 += ptr; pat1 += ' '; ptr = strtok(NULL, " "); pat1 += ptr; pat1 += ' '; ptr = strtok(NULL, " "); pat1 += ptr;
					//MessageBox::Show(context.marshal_as<String^>(mas[i]), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
					if (vivod == name1)
					{
						comboBox_pat->Items->Add(context.marshal_as<String^>(pat1));
					}
				}
			}
			fcloseall();
		}
		else if (spec1 == "Невролог")
		{

			p2 = fopen("opros2.txt", "r");
			if (p2 == NULL)
			{
				p2 = fopen("opros2.txt", "w");
			}
			fcloseall();
			int o = -2;
			p2 = fopen("opros2.txt", "r");
			for (int i = 0; fscanf(p2, "%s", str) != EOF; i++)
			{
				fseek(p2, i * 113, SEEK_SET);
				o++;
			}
			//std::string* mas = new std::string[o];
			valera.clear();
			fcloseall();
			p2 = fopen("opros2.txt", "r");
			for (int i = 0; i < o; i++)
			{
				vivod = ""; pat1 = "";
				fgets(str1, 113, p2);
				strcpy(stroka, str1);
				char* ptr = strtok(stroka, " "); //ptr = strtok(NULL, " ");
				if (ptr != NULL)
				{
					valera.push_back(str1);
					vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr; ptr = strtok(NULL, " "); ptr = strtok(NULL, " "); pat1 += ptr; pat1 += ' '; ptr = strtok(NULL, " "); pat1 += ptr; pat1 += ' '; ptr = strtok(NULL, " "); pat1 += ptr;
					//MessageBox::Show(context.marshal_as<String^>(mas[i]), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
					if (vivod == name1)
					{
						comboBox_pat->Items->Add(context.marshal_as<String^>(pat1));
					}
					//MessageBox::Show(context.marshal_as<String^>(vivod), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);

				}

				else 	if (ptr == NULL)
				{
					while (ptr == NULL)
					{
						fgets(str1, 113, p2); strcpy(stroka, str1); ptr = strtok(stroka, " ");
					}
					valera.push_back(str1);
					vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr; ptr = strtok(NULL, " "); ptr = strtok(NULL, " "); pat1 += ptr; pat1 += ' '; ptr = strtok(NULL, " "); pat1 += ptr; pat1 += ' '; ptr = strtok(NULL, " "); pat1 += ptr;
					//MessageBox::Show(context.marshal_as<String^>(mas[i]), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
					if (vivod == name1)
					{
						comboBox_pat->Items->Add(context.marshal_as<String^>(pat1));
					}
				}
			}
			fcloseall();
		}
		else if (spec1 == "Оториноларинголог")
		{
			p2 = fopen("opros1.txt", "r");
			if (p2 == NULL)
			{
				p2 = fopen("opros1.txt", "w");
			}
			fcloseall();
			int o = -2;
			p2 = fopen("opros1.txt", "r");
			for (int i = 0; fscanf(p2, "%s", str) != EOF; i++)
			{
				fseek(p2, i * 113, SEEK_SET);
				o++;
			}
			//std::string* mas = new std::string[o];
			valera.clear();
			fcloseall();
			p2 = fopen("opros1.txt", "r");
			for (int i = 0; i < o; i++)
			{
				vivod = ""; pat1 = "";
				fgets(str1, 113, p2);
				strcpy(stroka, str1);
				char* ptr = strtok(stroka, " "); //ptr = strtok(NULL, " ");
				if (ptr != NULL)
				{
					valera.push_back(str1);
					vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr; ptr = strtok(NULL, " "); ptr = strtok(NULL, " "); pat1 += ptr; pat1 += ' '; ptr = strtok(NULL, " "); pat1 += ptr; pat1 += ' '; ptr = strtok(NULL, " "); pat1 += ptr;
					//MessageBox::Show(context.marshal_as<String^>(vivod+" "+name1), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
					if (vivod == name1)
					{
						comboBox_pat->Items->Add(context.marshal_as<String^>(pat1));
					}
					//MessageBox::Show(context.marshal_as<String^>(vivod), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);

				}

				else 	if (ptr == NULL)
				{
					while (ptr == NULL)
					{
						fgets(str1, 113, p2); strcpy(stroka, str1); ptr = strtok(stroka, " ");
					}
					valera.push_back(str1);
					vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr; ptr = strtok(NULL, " "); ptr = strtok(NULL, " "); pat1 += ptr; pat1 += ' '; ptr = strtok(NULL, " "); pat1 += ptr; pat1 += ' '; ptr = strtok(NULL, " "); pat1 += ptr;
					//MessageBox::Show(context.marshal_as<String^>(mas[i]), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
					if (vivod == name1)
					{
						comboBox_pat->Items->Add(context.marshal_as<String^>(pat1));
					}
				}
			}
			fcloseall();
		}
	}
else
	{
	MessageBox::Show("Ошибка", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	error_spec->Visible = true;msclr::interop::marshal_context context;
	for (int i = 0; i < comboBox_pat->Items->Count; i++)
	{
		if (comboBox_pat->Text == comboBox_pat->Items[i]->ToString())
		{
			error_spec->Visible = false;
		}
	}
	if (error_spec->Visible == false)
	{
		fullstr=valera[comboBox_pat->SelectedIndex];

	
	oproscheck^ f = gcnew oproscheck();
	f->Show();
	}
	else
	{
		MessageBox::Show("Ошибка", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
};
}
