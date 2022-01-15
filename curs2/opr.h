#pragma once
#include <windows.h>
#include "opros1.cpp"
#include "opros2.cpp"
#include "opros3.cpp"
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <msclr\marshal.h>
#include <msclr/marshal_cppstd.h>
#include <fstream>
extern std::string d1, p1;

namespace curs2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для opr
	/// </summary>
	public ref class opr : public System::Windows::Forms::Form
	{
	public:
		opr(void)
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
		~opr()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ back;
	protected:
	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::Label^ patient;
	private: System::Windows::Forms::Label^ doctor;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_tmp;
	private: System::Windows::Forms::Label^ tmp;
	private: System::Windows::Forms::Label^ error_tmp;



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
			this->save = (gcnew System::Windows::Forms::Button());
			this->patient = (gcnew System::Windows::Forms::Label());
			this->doctor = (gcnew System::Windows::Forms::Label());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_tmp = (gcnew System::Windows::Forms::TextBox());
			this->tmp = (gcnew System::Windows::Forms::Label());
			this->error_tmp = (gcnew System::Windows::Forms::Label());
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
			this->back->TabIndex = 44;
			this->back->Text = L"Назад";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &opr::back_Click);
			// 
			// save
			// 
			this->save->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save->ForeColor = System::Drawing::SystemColors::ControlText;
			this->save->Location = System::Drawing::Point(622, 499);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(150, 50);
			this->save->TabIndex = 45;
			this->save->Text = L"Сохранить опрос";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &opr::save_Click);
			// 
			// patient
			// 
			this->patient->AutoSize = true;
			this->patient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->patient->Location = System::Drawing::Point(111, 40);
			this->patient->Name = L"patient";
			this->patient->Size = System::Drawing::Size(51, 20);
			this->patient->TabIndex = 46;
			this->patient->Text = L"label1";
			// 
			// doctor
			// 
			this->doctor->AutoSize = true;
			this->doctor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->doctor->Location = System::Drawing::Point(443, 40);
			this->doctor->Name = L"doctor";
			this->doctor->Size = System::Drawing::Size(51, 20);
			this->doctor->TabIndex = 47;
			this->doctor->Text = L"label2";
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox7->Location = System::Drawing::Point(559, 188);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(54, 24);
			this->checkBox7->TabIndex = 48;
			this->checkBox7->Text = L"text";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox8->Location = System::Drawing::Point(559, 238);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(54, 24);
			this->checkBox8->TabIndex = 49;
			this->checkBox8->Text = L"text";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox9->Location = System::Drawing::Point(559, 287);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(54, 24);
			this->checkBox9->TabIndex = 50;
			this->checkBox9->Text = L"text";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox6->Location = System::Drawing::Point(294, 283);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(54, 24);
			this->checkBox6->TabIndex = 51;
			this->checkBox6->Text = L"text";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox5->Location = System::Drawing::Point(294, 238);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(54, 24);
			this->checkBox5->TabIndex = 52;
			this->checkBox5->Text = L"text";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(294, 188);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(54, 24);
			this->checkBox4->TabIndex = 53;
			this->checkBox4->Text = L"text";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(30, 283);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(54, 24);
			this->checkBox3->TabIndex = 54;
			this->checkBox3->Text = L"text";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(30, 238);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(54, 24);
			this->checkBox2->TabIndex = 55;
			this->checkBox2->Text = L"text";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(30, 188);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(54, 24);
			this->checkBox1->TabIndex = 56;
			this->checkBox1->Text = L"text";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(46, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(581, 48);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Заполните опрос\r\n(Оставьте поле пустым, если такого симптома у вас нет)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox_tmp
			// 
			this->textBox_tmp->Location = System::Drawing::Point(559, 287);
			this->textBox_tmp->MaxLength = 5;
			this->textBox_tmp->Name = L"textBox_tmp";
			this->textBox_tmp->Size = System::Drawing::Size(43, 20);
			this->textBox_tmp->TabIndex = 58;
			// 
			// tmp
			// 
			this->tmp->AutoSize = true;
			this->tmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tmp->Location = System::Drawing::Point(608, 288);
			this->tmp->Name = L"tmp";
			this->tmp->Size = System::Drawing::Size(181, 40);
			this->tmp->TabIndex = 59;
			this->tmp->Text = L"Введите температуру,\r\nиспользуя точку";
			// 
			// error_tmp
			// 
			this->error_tmp->AutoSize = true;
			this->error_tmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->error_tmp->ForeColor = System::Drawing::Color::Red;
			this->error_tmp->Location = System::Drawing::Point(556, 335);
			this->error_tmp->Name = L"error_tmp";
			this->error_tmp->Size = System::Drawing::Size(166, 16);
			this->error_tmp->TabIndex = 60;
			this->error_tmp->Text = L"Ошибка: Пустое поле";
			this->error_tmp->Visible = false;
			// 
			// opr
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->error_tmp);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->doctor);
			this->Controls->Add(this->patient);
			this->Controls->Add(this->save);
			this->Controls->Add(this->back);
			this->Controls->Add(this->textBox_tmp);
			this->Controls->Add(this->tmp);
			this->Controls->Add(this->checkBox9);
			this->Name = L"opr";
			this->Text = L"Пройдите опрос";
			this->Load += gcnew System::EventHandler(this, &opr::opr_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool parse_double(std::string in, double& res) {
			try {
				size_t read = 0;
				res = std::stod(in, &read);
				if (in.size() != read)
					return false;
			}
			catch (std::invalid_argument) {
				return false;
			}
			return true;
		}
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (System::Windows::Forms::DialogResult::Yes == MessageBox::Show("Вы уверены, что хотите покинуть опрос?\nВсе несохраненные данные будут утеряны!!!", "Покинуть опрос?", MessageBoxButtons::YesNo, MessageBoxIcon::Question))
		{
			this->Close();
		}


	}
	private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		msclr::interop::marshal_context context; char stroka[5]; double temperature;
		error_tmp->Visible = false;
		std::string temp;
		temp = context.marshal_as<std::string>(textBox_tmp->Text);
		bool b = parse_double(temp, temperature);
		if (!b) 
		{ 
			textBox_tmp->Text = "";
			error_tmp->Text = "Ошибка: Неверный формат \nили пустое поле";
		}
		else
		{
			if ((temperature<25)||(temperature>45))
			{
				textBox_tmp->Text = "";
			}
		}
		
		MessageBox::Show(""+temperature, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

		if ((checkBox1->Text == "Насморк")&&(textBox_tmp->Text->Length==0))
		{
			error_tmp->Visible = true;
			//MessageBox::Show(textBox_tmp->Text, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			MessageBox::Show("Ошибка", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
				if (System::Windows::Forms::DialogResult::Yes == MessageBox::Show("Вы уверены, что хотите сохранить опрос?", "Подтверждение", MessageBoxButtons::YesNo, MessageBoxIcon::Warning))
		{
					std::string s1 = d1 + " " + p1+" ";
					//MessageBox::Show(s1, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					if (checkBox1->Text == "Онемения")
					{
						opros2 opr(checkBox1->Checked, checkBox2->Checked, checkBox3->Checked, checkBox4->Checked, checkBox5->Checked, checkBox6->Checked, checkBox7->Checked, checkBox8->Checked,  checkBox9->Checked);
						opr.saveopros(d1,p1);
					}
					else if (checkBox1->Text == "Насморк")
					{
						opros1 opr(checkBox1->Checked, checkBox2->Checked, checkBox3->Checked, checkBox4->Checked, checkBox5->Checked, checkBox6->Checked, checkBox7->Checked, checkBox8->Checked, temperature);
						opr.saveopros(d1, p1);
					}
					else if (checkBox1->Text == "Жидкий стул")
					{
						opros3 opr(checkBox1->Checked, checkBox2->Checked, checkBox3->Checked, checkBox4->Checked, checkBox5->Checked, checkBox6->Checked, checkBox7->Checked, checkBox8->Checked, checkBox9->Checked );
						opr.saveopros(d1, p1);
					}
					this->Close();
		}
		}
		
	}
	private: System::Void opr_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		msclr::interop::marshal_context context;  char stroka[99]; std::string vivod;
		patient->Text = "Пациент:\n"+context.marshal_as<String^>(p1);
		doctor->Text = "Доктор:\n"+context.marshal_as<String^>(d1);
		const char*str1 = d1.c_str();
		strcpy(stroka,str1 );
		char* ptr = strtok(stroka, " ");
		ptr = strtok(NULL, " ");
		ptr = strtok(NULL, " ");
		vivod += ptr;
		//MessageBox::Show(context.marshal_as<String^>(ptr), "Подтверждение", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
		if (vivod=="Невролог")
		{
			tmp->Visible = false;
			textBox_tmp->Visible = false;
			checkBox1->Text = "Онемения";
			checkBox2->Text = "Кружится голова";
			checkBox3->Text = "Мышечная слабость";
			checkBox4->Text = "Покалывания";
			checkBox5->Text = "Подергивания мышц";
			checkBox6->Text = "Болит голова";
			checkBox7->Text = "Эпилептические припадки";
			checkBox8->Text = "Шатает при ходьбе";
			checkBox9->Text = "Болит спина";
		}
		else if (vivod == "Оториноларинголог")
		{
			checkBox9->Visible = false;
			checkBox1->Text = "Насморк";
			checkBox2->Text = "Кашель";
			checkBox3->Text = "Болит горло";
			checkBox4->Text = "Заложен нос";
			checkBox5->Text = "Боль в ушах";
			checkBox6->Text = "Болит голова";
			checkBox7->Text = "Озноб";
			checkBox8->Text = "Жар";
		}
		else if (vivod == "Гастроэнтеролог")
		{
			tmp->Visible = false;
			textBox_tmp->Visible = false;
			checkBox1->Text = "Жидкий стул";
			checkBox2->Text = "Изжога";
			checkBox3->Text = "Запор";
			checkBox4->Text = "Потеря аппетита";
			checkBox5->Text = "Снижение веса";
			checkBox6->Text = "Тошнота";
			checkBox7->Text = "Рвота";
			checkBox8->Text = "Спазм в животе";
			checkBox9->Text = "Боль в животе";
		}







	}
};
}
