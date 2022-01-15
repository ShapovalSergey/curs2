#pragma once

namespace curs2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для oproscheck
	/// </summary>
	public ref class oproscheck : public System::Windows::Forms::Form
	{
	public:
		oproscheck(void)
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
		~oproscheck()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox9;
	protected:
	private: System::Windows::Forms::Label^ tmp;
	private: System::Windows::Forms::TextBox^ textBox_tmp;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;

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
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->tmp = (gcnew System::Windows::Forms::Label());
			this->textBox_tmp = (gcnew System::Windows::Forms::TextBox());
			this->back = (gcnew System::Windows::Forms::Button());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Enabled = false;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox9->Location = System::Drawing::Point(551, 273);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(54, 24);
			this->checkBox9->TabIndex = 67;
			this->checkBox9->Text = L"text";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// tmp
			// 
			this->tmp->AutoSize = true;
			this->tmp->Enabled = false;
			this->tmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tmp->Location = System::Drawing::Point(600, 274);
			this->tmp->Name = L"tmp";
			this->tmp->Size = System::Drawing::Size(181, 40);
			this->tmp->TabIndex = 76;
			this->tmp->Text = L"Введите температуру,\r\nиспользуя точку";
			// 
			// textBox_tmp
			// 
			this->textBox_tmp->Enabled = false;
			this->textBox_tmp->Location = System::Drawing::Point(551, 273);
			this->textBox_tmp->MaxLength = 5;
			this->textBox_tmp->Name = L"textBox_tmp";
			this->textBox_tmp->Size = System::Drawing::Size(43, 20);
			this->textBox_tmp->TabIndex = 75;
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
			this->back->TabIndex = 61;
			this->back->Text = L"Назад";
			this->back->UseVisualStyleBackColor = false;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Enabled = false;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox7->Location = System::Drawing::Point(551, 174);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(54, 24);
			this->checkBox7->TabIndex = 65;
			this->checkBox7->Text = L"text";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Enabled = false;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox8->Location = System::Drawing::Point(551, 224);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(54, 24);
			this->checkBox8->TabIndex = 66;
			this->checkBox8->Text = L"text";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Enabled = false;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox6->Location = System::Drawing::Point(286, 269);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(54, 24);
			this->checkBox6->TabIndex = 68;
			this->checkBox6->Text = L"text";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Enabled = false;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox5->Location = System::Drawing::Point(286, 224);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(54, 24);
			this->checkBox5->TabIndex = 69;
			this->checkBox5->Text = L"text";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Enabled = false;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(286, 174);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(54, 24);
			this->checkBox4->TabIndex = 70;
			this->checkBox4->Text = L"text";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Enabled = false;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(22, 269);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(54, 24);
			this->checkBox3->TabIndex = 71;
			this->checkBox3->Text = L"text";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Enabled = false;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(22, 224);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(54, 24);
			this->checkBox2->TabIndex = 72;
			this->checkBox2->Text = L"text";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(22, 174);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(54, 24);
			this->checkBox1->TabIndex = 73;
			this->checkBox1->Text = L"text";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(118, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 74;
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// oproscheck
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->back);
			this->Controls->Add(this->textBox_tmp);
			this->Controls->Add(this->tmp);
			this->Controls->Add(this->checkBox9);
			this->Name = L"oproscheck";
			this->Text = L"Посмотр опроса";
			this->Load += gcnew System::EventHandler(this, &oproscheck::oproscheck_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void oproscheck_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}
};
}
