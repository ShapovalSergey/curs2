#pragma once
#include "patient.cpp"
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
	/// Сводка для pat1
	/// </summary>
	public ref class pat1 : public System::Windows::Forms::Form
	{
	public:
		pat1(void)
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
		~pat1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox_spec;
	private: System::Windows::Forms::Label^ label1_mode;
	private: System::Windows::Forms::Label^ error_otch;
	private: System::Windows::Forms::Label^ error_name;
	private: System::Windows::Forms::Label^ error_surname;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::TextBox^ textBox_otch;
	private: System::Windows::Forms::TextBox^ textBox_surname;
	private: System::Windows::Forms::Label^ otch;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Label^ surname;
	private: System::Windows::Forms::Label^ label_doc;
	private: System::Windows::Forms::Label^ error_spec;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ComboBox^ comboBox_pat;
	private: System::Windows::Forms::Label^ birth_date;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Button^ enter;

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
			this->comboBox_spec = (gcnew System::Windows::Forms::ComboBox());
			this->label1_mode = (gcnew System::Windows::Forms::Label());
			this->error_otch = (gcnew System::Windows::Forms::Label());
			this->error_name = (gcnew System::Windows::Forms::Label());
			this->error_surname = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_otch = (gcnew System::Windows::Forms::TextBox());
			this->textBox_surname = (gcnew System::Windows::Forms::TextBox());
			this->otch = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->surname = (gcnew System::Windows::Forms::Label());
			this->label_doc = (gcnew System::Windows::Forms::Label());
			this->error_spec = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox_pat = (gcnew System::Windows::Forms::ComboBox());
			this->birth_date = (gcnew System::Windows::Forms::Label());
			this->back = (gcnew System::Windows::Forms::Button());
			this->enter = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox_spec
			// 
			this->comboBox_spec->FormattingEnabled = true;
			this->comboBox_spec->Location = System::Drawing::Point(319, 150);
			this->comboBox_spec->Name = L"comboBox_spec";
			this->comboBox_spec->Size = System::Drawing::Size(223, 21);
			this->comboBox_spec->TabIndex = 16;
			this->comboBox_spec->Visible = false;
			// 
			// label1_mode
			// 
			this->label1_mode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1_mode->Location = System::Drawing::Point(315, 111);
			this->label1_mode->Name = L"label1_mode";
			this->label1_mode->Size = System::Drawing::Size(156, 24);
			this->label1_mode->TabIndex = 19;
			this->label1_mode->Text = L"Заполните поля";
			this->label1_mode->Visible = false;
			// 
			// error_otch
			// 
			this->error_otch->AutoSize = true;
			this->error_otch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->error_otch->ForeColor = System::Drawing::Color::Red;
			this->error_otch->Location = System::Drawing::Point(546, 300);
			this->error_otch->Name = L"error_otch";
			this->error_otch->Size = System::Drawing::Size(166, 16);
			this->error_otch->TabIndex = 35;
			this->error_otch->Text = L"Ошибка: Пустое поле";
			this->error_otch->Visible = false;
			// 
			// error_name
			// 
			this->error_name->AutoSize = true;
			this->error_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->error_name->ForeColor = System::Drawing::Color::Red;
			this->error_name->Location = System::Drawing::Point(546, 250);
			this->error_name->Name = L"error_name";
			this->error_name->Size = System::Drawing::Size(166, 16);
			this->error_name->TabIndex = 34;
			this->error_name->Text = L"Ошибка: Пустое поле";
			this->error_name->Visible = false;
			// 
			// error_surname
			// 
			this->error_surname->AutoSize = true;
			this->error_surname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->error_surname->ForeColor = System::Drawing::Color::Red;
			this->error_surname->Location = System::Drawing::Point(546, 200);
			this->error_surname->Name = L"error_surname";
			this->error_surname->Size = System::Drawing::Size(166, 16);
			this->error_surname->TabIndex = 33;
			this->error_surname->Text = L"Ошибка: Пустое поле";
			this->error_surname->Visible = false;
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(319, 250);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(158, 20);
			this->textBox_name->TabIndex = 32;
			this->textBox_name->Visible = false;
			// 
			// textBox_otch
			// 
			this->textBox_otch->Location = System::Drawing::Point(319, 300);
			this->textBox_otch->Name = L"textBox_otch";
			this->textBox_otch->Size = System::Drawing::Size(158, 20);
			this->textBox_otch->TabIndex = 31;
			this->textBox_otch->Visible = false;
			// 
			// textBox_surname
			// 
			this->textBox_surname->Location = System::Drawing::Point(319, 200);
			this->textBox_surname->Name = L"textBox_surname";
			this->textBox_surname->Size = System::Drawing::Size(158, 20);
			this->textBox_surname->TabIndex = 30;
			this->textBox_surname->Visible = false;
			// 
			// otch
			// 
			this->otch->AutoSize = true;
			this->otch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->otch->Location = System::Drawing::Point(76, 300);
			this->otch->Name = L"otch";
			this->otch->Size = System::Drawing::Size(195, 20);
			this->otch->TabIndex = 29;
			this->otch->Text = L"Введите ваше отчество";
			this->otch->Visible = false;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name->Location = System::Drawing::Point(79, 250);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(153, 20);
			this->name->TabIndex = 28;
			this->name->Text = L"Введите ваше имя";
			this->name->Visible = false;
			// 
			// surname
			// 
			this->surname->AutoSize = true;
			this->surname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->surname->Location = System::Drawing::Point(79, 200);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(197, 20);
			this->surname->TabIndex = 27;
			this->surname->Text = L"Введите вашу фамилию";
			this->surname->Visible = false;
			// 
			// label_doc
			// 
			this->label_doc->AutoSize = true;
			this->label_doc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_doc->Location = System::Drawing::Point(79, 151);
			this->label_doc->Name = L"label_doc";
			this->label_doc->Size = System::Drawing::Size(194, 20);
			this->label_doc->TabIndex = 36;
			this->label_doc->Text = L"Выберите вашего врача";
			this->label_doc->Visible = false;
			// 
			// error_spec
			// 
			this->error_spec->AutoSize = true;
			this->error_spec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->error_spec->ForeColor = System::Drawing::Color::Red;
			this->error_spec->Location = System::Drawing::Point(548, 150);
			this->error_spec->Name = L"error_spec";
			this->error_spec->Size = System::Drawing::Size(166, 16);
			this->error_spec->TabIndex = 37;
			this->error_spec->Text = L"Ошибка: Пустое поле";
			this->error_spec->Visible = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(319, 350);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 38;
			this->dateTimePicker1->Visible = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(79, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(290, 50);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Выберите пациента из списка \r\nили создайте новый профиль";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(631, 66);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(152, 24);
			this->checkBox1->TabIndex = 40;
			this->checkBox1->Text = L"Новый профиль";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &pat1::checkBox1_CheckedChanged);
			// 
			// comboBox_pat
			// 
			this->comboBox_pat->FormattingEnabled = true;
			this->comboBox_pat->Location = System::Drawing::Point(375, 66);
			this->comboBox_pat->Name = L"comboBox_pat";
			this->comboBox_pat->Size = System::Drawing::Size(223, 21);
			this->comboBox_pat->TabIndex = 41;
			this->comboBox_pat->TextChanged += gcnew System::EventHandler(this, &pat1::comboBox_pat_TextChanged);
			// 
			// birth_date
			// 
			this->birth_date->AutoSize = true;
			this->birth_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->birth_date->Location = System::Drawing::Point(76, 350);
			this->birth_date->Name = L"birth_date";
			this->birth_date->Size = System::Drawing::Size(238, 20);
			this->birth_date->TabIndex = 42;
			this->birth_date->Text = L"Введите вашу дату рождения";
			this->birth_date->Visible = false;
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
			this->back->TabIndex = 43;
			this->back->Text = L"Назад";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &pat1::back_Click);
			// 
			// enter
			// 
			this->enter->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enter->ForeColor = System::Drawing::SystemColors::ControlText;
			this->enter->Location = System::Drawing::Point(622, 499);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(150, 50);
			this->enter->TabIndex = 44;
			this->enter->Text = L"Пройти опрос";
			this->enter->UseVisualStyleBackColor = false;
			this->enter->Visible = false;
			this->enter->Click += gcnew System::EventHandler(this, &pat1::enter_Click);
			// 
			// pat1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->enter);
			this->Controls->Add(this->back);
			this->Controls->Add(this->birth_date);
			this->Controls->Add(this->comboBox_pat);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->error_spec);
			this->Controls->Add(this->label_doc);
			this->Controls->Add(this->error_otch);
			this->Controls->Add(this->error_name);
			this->Controls->Add(this->error_surname);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->textBox_otch);
			this->Controls->Add(this->textBox_surname);
			this->Controls->Add(this->otch);
			this->Controls->Add(this->name);
			this->Controls->Add(this->surname);
			this->Controls->Add(this->label1_mode);
			this->Controls->Add(this->comboBox_spec);
			this->Name = L"pat1";
			this->Text = L"Пациент";
			this->Load += gcnew System::EventHandler(this, &pat1::pat1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pat1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		FILE* p2; char str1[153], stroka[153]; std::string str, par, kod, pass,vivod; msclr::interop::marshal_context context; int k = 0;
		int n = -2; int p = -2;
		p2 = fopen("patients.txt", "r");
		if (p2 == NULL)
		{
			p2 = fopen("patients.txt", "w");
		}
		fcloseall();
		p2 = fopen("patients.txt", "r");
		for (int i = 0; fscanf(p2, "%s", str) != EOF; i++)
		{
			fseek(p2, i * 153, SEEK_SET);
			p++;
		}
		fcloseall();
		p2 = fopen("logins.txt", "r");
		if (p2 == NULL)
		{
			p2 = fopen("logins.txt", "w");
			fcloseall();
			p2 = fopen("doctors.txt", "w");
		}
		for (int i = 0; fscanf(p2, "%s", str) != EOF; i++)
		{
			fseek(p2, i * 153, SEEK_SET);
			n++;
		}
		fcloseall();
		p2 = fopen("doctors.txt", "r");
		for (int i = 0; i < n; i++)
		{
			vivod = "";
			fgets(str1, 153, p2);
			strcpy(stroka, str1);
			char* ptr = strtok(stroka, " "); //ptr = strtok(NULL, " ");
			if (ptr != NULL)
			{
				vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr[0]; vivod += '.'; ptr = strtok(NULL, " "); vivod += ptr[0];  vivod += '.'; vivod += ' - '; ptr = strtok(NULL, " "); vivod += ptr;// ptr = strtok(NULL, " "); log = ptr;
				//MessageBox::Show(context.marshal_as<String^>(vivod), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			else 	if (ptr == NULL)
			{
				while (ptr == NULL)
				{
					fgets(str1, 153, p2); strcpy(stroka, str1); ptr = strtok(stroka, " ");
				}
				vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr[0]; vivod += '.'; ptr = strtok(NULL, " "); vivod += ptr[0];  vivod += '.'; vivod += ' - '; ptr = strtok(NULL, " "); vivod += ptr;// ptr = strtok(NULL, " "); log = ptr;
			}
			//MessageBox::Show(context.marshal_as<String^>(vivod), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			comboBox_spec->Items->Add(context.marshal_as<String^>(vivod)); //+= ; comboBox_spec->Text += '\n';
		}
		fcloseall();
		p2 = fopen("patients.txt", "r");
		for (int i = 0; i < n; i++)
		{
			vivod = "";
			fgets(str1, 153, p2);
			strcpy(stroka, str1);
			char* ptr = strtok(stroka, " "); //ptr = strtok(NULL, " ");
			if (ptr != NULL)
			{
				vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr[0]; vivod += '.'; ptr = strtok(NULL, " "); vivod += ptr[0];  vivod += '.'; //vivod += ' - '; ptr = strtok(NULL, " "); vivod += ptr;// ptr = strtok(NULL, " "); log = ptr;
				//MessageBox::Show(context.marshal_as<String^>(vivod), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			else 	if (ptr == NULL)
			{
				while (ptr == NULL)
				{
					fgets(str1, 153, p2); strcpy(stroka, str1); ptr = strtok(stroka, " ");
				}
				vivod += ptr; vivod += ' '; ptr = strtok(NULL, " "); vivod += ptr[0]; vivod += '.'; ptr = strtok(NULL, " "); vivod += ptr[0];  vivod += '.';// vivod += ' - '; ptr = strtok(NULL, " "); vivod += ptr;// ptr = strtok(NULL, " "); log = ptr;
			}
			//MessageBox::Show(context.marshal_as<String^>(vivod), "Подтверждение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			comboBox_pat->Items->Add(context.marshal_as<String^>(vivod)); //+= ; comboBox_spec->Text += '\n';
		}
		fcloseall();





	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox1->Checked==true)
		{
			label1_mode->Visible = true;
			label_doc->Visible = true;
			name->Visible = true;
			birth_date->Visible = true;
			surname->Visible = true;
			otch->Visible = true;
			label_doc->Visible = true;
			textBox_name->Visible = true;
			textBox_surname->Visible = true;
			textBox_otch->Visible = true;
			//textBox_label_doc->Visible = true;
			//error_name->Visible = true;
			//error_surname->Visible = true;
			//error_otch->Visible = true;
			comboBox_spec->Visible = true;
			textBox_name->Text = "";
			textBox_surname->Text = "";
			textBox_otch->Text = "";
			dateTimePicker1->Visible = true;
			enter->Text = "Создать профиль и пройти опрос";
			enter->Visible = true;
		}
		else if (checkBox1->Checked == false)
		{
			label1_mode->Visible = false;
			label_doc->Visible = false;
			name->Visible = false;
			birth_date->Visible = false;
			surname->Visible = false;
			otch->Visible = false;
			label_doc->Visible = false;
			textBox_name->Visible = false;
			textBox_surname->Visible = false;
			textBox_otch->Visible = false;
			//textBox_label_doc->Visible = false;
			//error_name->Visible = false;
			//error_surname->Visible = false;
			//error_otch->Visible = false;
			comboBox_spec->Visible = false;
			textBox_name->Text = "";
			textBox_surname->Text = "";
			textBox_otch->Text = "";
			dateTimePicker1->Visible = false;
			enter->Text = "Пройти опрос";
			enter->Visible = false;
		}
	}

private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
private: System::Void comboBox_pat_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	for (int i = 0; i < comboBox_pat->Items->Count; i++)
	{
	if (comboBox_pat->Text== comboBox_pat->Items[i]->ToString())
	{
	enter->Text = "Пройти опрос";
	enter->Visible = true;
	}
	}
	
	
}
private: System::Void enter_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (enter->Text== "Создать профиль и пройти опрос")
	{
		error_name->Visible = false;
		error_surname->Visible = false;
		error_otch->Visible = false;
		error_spec->Visible = false;
		int mode = 1; char log[30]; char pass[70]; //setlocale(LC_ALL, "Russian");
		FILE* p1; patient pat; std::string str; char str1[153], stroka[153];
		fcloseall();
		msclr::interop::marshal_context context;
		pat.change_name(context.marshal_as<std::string>(textBox_name->Text));
		pat.change_surname(context.marshal_as<std::string>(textBox_surname->Text));
		pat.change_otch(context.marshal_as<std::string>(textBox_otch->Text));
		for (int i = 0; i < pat.return_name().length(); i++)
		{
			if (pat.return_name()[i] == ' ')
			{
				error_name->Visible = true; error_name->Text = "Ошибка:\nНедопустимый символ пробел!!!";
			}
		}
		for (int i = 0; i < pat.return_surname().length(); i++)
		{
			if (pat.return_surname()[i] == ' ')
			{
				error_surname->Visible = true; error_surname->Text = "Ошибка:\nНедопустимый символ пробел!!!";
			}
		}
		for (int i = 0; i < pat.return_otch().length(); i++)
		{
			if (pat.return_otch()[i] == ' ')
			{
				error_otch->Visible = true; error_otch->Text = "Ошибка:\nНедопустимый символ пробел!!!";
			}
		}
		if (pat.return_name().empty())
		{
			mode -= 1;  error_name->Text = "Ошибка: Пустое поле"; error_name->Visible = true;
		}
		if (pat.return_surname().empty())
		{
			mode -= 1;  error_surname->Text = "Ошибка: Пустое поле"; error_surname->Visible = true;
		}
		if (pat.return_otch().empty())
		{
			mode -= 1; error_otch->Text = "Ошибка: Пустое поле"; error_otch->Visible = true;
		}

	}
}
};
}
