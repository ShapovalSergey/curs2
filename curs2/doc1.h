#pragma once
#include "MyForm.h"
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
	/// Сводка для doc1
	/// </summary>
	public ref class doc1 : public System::Windows::Forms::Form
	{
	public:
		doc1(void)
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
		~doc1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1_mode;
	private: System::Windows::Forms::Button^ create;
	private: System::Windows::Forms::Button^ enter;
	private: System::Windows::Forms::Label^ surname;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Label^ otch;

	private: System::Windows::Forms::Label^ speciality;
	private: System::Windows::Forms::TextBox^ textBox_surname;



	private: System::Windows::Forms::TextBox^ textBox_otch;

	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::ComboBox^ comboBox_spec;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Button^ accept;
	private: System::Windows::Forms::Label^ password;

	private: System::Windows::Forms::Label^ login;
	private: System::Windows::Forms::TextBox^ textBox_login;
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::TextBox^ textBox_password2;
	private: System::Windows::Forms::Label^ password2;




	protected:

	protected:

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
			this->label1_mode = (gcnew System::Windows::Forms::Label());
			this->create = (gcnew System::Windows::Forms::Button());
			this->enter = (gcnew System::Windows::Forms::Button());
			this->surname = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->otch = (gcnew System::Windows::Forms::Label());
			this->speciality = (gcnew System::Windows::Forms::Label());
			this->textBox_surname = (gcnew System::Windows::Forms::TextBox());
			this->textBox_otch = (gcnew System::Windows::Forms::TextBox());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_spec = (gcnew System::Windows::Forms::ComboBox());
			this->back = (gcnew System::Windows::Forms::Button());
			this->accept = (gcnew System::Windows::Forms::Button());
			this->password = (gcnew System::Windows::Forms::Label());
			this->login = (gcnew System::Windows::Forms::Label());
			this->textBox_login = (gcnew System::Windows::Forms::TextBox());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_password2 = (gcnew System::Windows::Forms::TextBox());
			this->password2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1_mode
			// 
			this->label1_mode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1_mode->Location = System::Drawing::Point(242, 150);
			this->label1_mode->Name = L"label1_mode";
			this->label1_mode->Size = System::Drawing::Size(317, 24);
			this->label1_mode->TabIndex = 2;
			this->label1_mode->Text = L"Выберите, что вы хотите сделать";
			// 
			// create
			// 
			this->create->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->create->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->create->ForeColor = System::Drawing::SystemColors::ControlText;
			this->create->Location = System::Drawing::Point(167, 250);
			this->create->Name = L"create";
			this->create->Size = System::Drawing::Size(150, 50);
			this->create->TabIndex = 3;
			this->create->Text = L"Создать профиль";
			this->create->UseVisualStyleBackColor = false;
			this->create->Click += gcnew System::EventHandler(this, &doc1::create_Click);
			// 
			// enter
			// 
			this->enter->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enter->ForeColor = System::Drawing::SystemColors::ControlText;
			this->enter->Location = System::Drawing::Point(484, 250);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(150, 50);
			this->enter->TabIndex = 4;
			this->enter->Text = L"Войти";
			this->enter->UseVisualStyleBackColor = false;
			// 
			// surname
			// 
			this->surname->AutoSize = true;
			this->surname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->surname->Location = System::Drawing::Point(48, 100);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(197, 20);
			this->surname->TabIndex = 5;
			this->surname->Text = L"Введите вашу фамилию";
			this->surname->Visible = false;
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name->Location = System::Drawing::Point(50, 150);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(153, 20);
			this->name->TabIndex = 6;
			this->name->Text = L"Введите ваше имя";
			this->name->Visible = false;
			// 
			// otch
			// 
			this->otch->AutoSize = true;
			this->otch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->otch->Location = System::Drawing::Point(50, 200);
			this->otch->Name = L"otch";
			this->otch->Size = System::Drawing::Size(195, 20);
			this->otch->TabIndex = 7;
			this->otch->Text = L"Введите ваше отчество";
			this->otch->Visible = false;
			// 
			// speciality
			// 
			this->speciality->AutoSize = true;
			this->speciality->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->speciality->Location = System::Drawing::Point(50, 250);
			this->speciality->Name = L"speciality";
			this->speciality->Size = System::Drawing::Size(205, 20);
			this->speciality->TabIndex = 9;
			this->speciality->Text = L"Выберите специальность";
			this->speciality->Visible = false;
			// 
			// textBox_surname
			// 
			this->textBox_surname->Location = System::Drawing::Point(291, 102);
			this->textBox_surname->Name = L"textBox_surname";
			this->textBox_surname->Size = System::Drawing::Size(158, 20);
			this->textBox_surname->TabIndex = 10;
			this->textBox_surname->Visible = false;
			// 
			// textBox_otch
			// 
			this->textBox_otch->Location = System::Drawing::Point(291, 200);
			this->textBox_otch->Name = L"textBox_otch";
			this->textBox_otch->Size = System::Drawing::Size(158, 20);
			this->textBox_otch->TabIndex = 12;
			this->textBox_otch->Visible = false;
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(291, 150);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(158, 20);
			this->textBox_name->TabIndex = 13;
			this->textBox_name->Visible = false;
			// 
			// comboBox_spec
			// 
			this->comboBox_spec->FormattingEnabled = true;
			this->comboBox_spec->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Гастроэнтеролог", L"Невролог", L"Оториноларинголог" });
			this->comboBox_spec->Location = System::Drawing::Point(291, 249);
			this->comboBox_spec->Name = L"comboBox_spec";
			this->comboBox_spec->Size = System::Drawing::Size(158, 21);
			this->comboBox_spec->TabIndex = 15;
			this->comboBox_spec->Visible = false;
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
			this->back->TabIndex = 16;
			this->back->Text = L"Назад";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &doc1::back_Click);
			// 
			// accept
			// 
			this->accept->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->accept->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->accept->ForeColor = System::Drawing::SystemColors::ControlText;
			this->accept->Location = System::Drawing::Point(622, 499);
			this->accept->Name = L"accept";
			this->accept->Size = System::Drawing::Size(150, 50);
			this->accept->TabIndex = 17;
			this->accept->Text = L"Создать";
			this->accept->UseVisualStyleBackColor = false;
			this->accept->Visible = false;
			this->accept->Click += gcnew System::EventHandler(this, &doc1::accept_Click);
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password->Location = System::Drawing::Point(50, 350);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(163, 20);
			this->password->TabIndex = 18;
			this->password->Text = L"Придумайте пароль";
			this->password->Visible = false;
			// 
			// login
			// 
			this->login->AutoSize = true;
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login->Location = System::Drawing::Point(48, 297);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(152, 20);
			this->login->TabIndex = 19;
			this->login->Text = L"Придумайте логин";
			this->login->Visible = false;
			// 
			// textBox_login
			// 
			this->textBox_login->Location = System::Drawing::Point(291, 297);
			this->textBox_login->MaxLength = 30;
			this->textBox_login->Name = L"textBox_login";
			this->textBox_login->Size = System::Drawing::Size(158, 20);
			this->textBox_login->TabIndex = 20;
			this->textBox_login->Visible = false;
			// 
			// textBox_password
			// 
			this->textBox_password->Location = System::Drawing::Point(291, 350);
			this->textBox_password->MaxLength = 70;
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(158, 20);
			this->textBox_password->TabIndex = 21;
			this->textBox_password->Visible = false;
			// 
			// textBox_password2
			// 
			this->textBox_password2->Location = System::Drawing::Point(291, 402);
			this->textBox_password2->MaxLength = 70;
			this->textBox_password2->Name = L"textBox_password2";
			this->textBox_password2->PasswordChar = '*';
			this->textBox_password2->Size = System::Drawing::Size(158, 20);
			this->textBox_password2->TabIndex = 22;
			this->textBox_password2->Visible = false;
			// 
			// password2
			// 
			this->password2->AutoSize = true;
			this->password2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password2->Location = System::Drawing::Point(51, 400);
			this->password2->Name = L"password2";
			this->password2->Size = System::Drawing::Size(152, 20);
			this->password2->TabIndex = 23;
			this->password2->Text = L"Повторите пароль";
			this->password2->Visible = false;
			// 
			// doc1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->password2);
			this->Controls->Add(this->textBox_password2);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_login);
			this->Controls->Add(this->login);
			this->Controls->Add(this->password);
			this->Controls->Add(this->accept);
			this->Controls->Add(this->back);
			this->Controls->Add(this->comboBox_spec);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->textBox_otch);
			this->Controls->Add(this->textBox_surname);
			this->Controls->Add(this->speciality);
			this->Controls->Add(this->otch);
			this->Controls->Add(this->name);
			this->Controls->Add(this->surname);
			this->Controls->Add(this->enter);
			this->Controls->Add(this->create);
			this->Controls->Add(this->label1_mode);
			this->Name = L"doc1";
			this->Text = L"Доктор";
			this->Load += gcnew System::EventHandler(this, &doc1::doc1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void create_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		label1_mode->Location = System::Drawing::Point(label1_mode->Location.X, 50);;
		label1_mode->Text = "Создание нового профиля";
		create->Visible = false;
		enter->Visible = false;
		name->Visible = true;
		surname->Visible = true;
		otch->Visible = true;
		speciality->Visible = true;
		textBox_name->Visible = true;
		textBox_surname->Visible = true;
		textBox_otch->Visible = true;
		comboBox_spec->Visible = true;
		login->Visible = true;
		password->Visible = true;
		password2->Visible = true;
		textBox_login->Visible = true;
		textBox_password->Visible = true;
		textBox_password2->Visible = true;
		accept->Visible = true;
		back->Visible = true;
	}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (label1_mode->Text=="Создание нового профиля")
	{
	label1_mode->Location = System::Drawing::Point(label1_mode->Location.X, 150);;
	label1_mode->Text = "Выберите, что вы хотите сделать";
	create->Visible = true;
	enter->Visible = true;
	name->Visible = false;
	surname->Visible = false;
	otch->Visible = false;
	speciality->Visible = false;
	textBox_name->Visible = false;
	textBox_surname->Visible = false;
	textBox_otch->Visible = false;
	comboBox_spec->Visible = false;
	login->Visible = false;
	password->Visible = false;
	password2->Visible = false;
	textBox_login->Visible = false;
	textBox_password->Visible = false;
	textBox_password2->Visible = false;
	accept->Visible = false;
	}
	else if (label1_mode->Text == "Выберите, что вы хотите сделать")
	{
		this->Hide();
	}

}
private: System::Void doc1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void accept_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int mode = 0; char log[30]; char pass[70];
	FILE* p1; doctor doc; std::string str;
	p1 = fopen("doctors.txt", "r");
	if (p1 == NULL)
	{
		p1 = fopen("doctors.txt", "w");
	}
	fcloseall();
	while (mode==0)
	{
	
	msclr::interop::marshal_context context;
	doc.change_name(context.marshal_as<std::string>(textBox_name->Text));
	doc.change_surname(context.marshal_as<std::string>(textBox_surname->Text));
	doc.change_otch(context.marshal_as<std::string>(textBox_otch->Text));
	if (comboBox_spec->SelectedIndex==0)
	{
		mode = 0;
	}
	else if (comboBox_spec->SelectedIndex == 1)
	{
		doc.change_speciality("Гастроэнтеролог"); mode = 1;
	}
	else if (comboBox_spec->SelectedIndex == 2)
	{
		doc.change_speciality("Невролог"); mode = 1;
	}
	else if (comboBox_spec->SelectedIndex == 3)
	{
		doc.change_speciality("Оториноларинголог"); mode = 1;
	}
	if (doc.return_name().empty())
	{
		mode = 0;
	}
	else
	{
		mode = 1;
	}
	if (doc.return_surname().empty())
	{
		mode = 0;
	}
	else
	{
		mode = 1;
	}
	if (doc.return_otch().empty())
	{
		mode = 0;
	}
	else
	{
		mode = 1;
	}
	const char* slo = context.marshal_as<const char*>(textBox_login ->Text);
	FILE* p2; doctor doc; std::string str;
	p2 = fopen("logins.txt", "r");
	if (p2 == NULL)
	{
		p2 = fopen("logins.txt", "w");
	}
	fcloseall();
	int n = -1;
	p2 = fopen("logins.txt", "r");
	for (int i = 0; fscanf(p2, "%s", str) != EOF; i++)
	{
		fseek(p2, i * 150, SEEK_SET);
		n++;
	}
	_fcloseall();

	//////////////////////


	}
	
	str = doc.return_surname() +" "+ doc.return_name() + " " + doc.return_otch();
	std::ofstream out("doctors.txt");
	out << str;
	//p1 = fopen("doctors.txt", "a");
	//fprintf(p1, "%s", str);
	//fclose(p1);
}
};
}
