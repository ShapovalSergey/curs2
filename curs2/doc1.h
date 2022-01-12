#pragma once

namespace curs2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� doc1
	/// </summary>
	public ref class doc1 : public System::Windows::Forms::Form
	{
	public:
		doc1(void)
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
	private: System::Windows::Forms::Label^ vozrast;
	private: System::Windows::Forms::Label^ speciality;
	private: System::Windows::Forms::TextBox^ textBox_surname;
	private: System::Windows::Forms::TextBox^ textBox_vozrast;


	private: System::Windows::Forms::TextBox^ textBox_otch;

	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::ComboBox^ comboBox_spec;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Button^ accept;




	protected:

	protected:

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
			this->label1_mode = (gcnew System::Windows::Forms::Label());
			this->create = (gcnew System::Windows::Forms::Button());
			this->enter = (gcnew System::Windows::Forms::Button());
			this->surname = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->otch = (gcnew System::Windows::Forms::Label());
			this->vozrast = (gcnew System::Windows::Forms::Label());
			this->speciality = (gcnew System::Windows::Forms::Label());
			this->textBox_surname = (gcnew System::Windows::Forms::TextBox());
			this->textBox_vozrast = (gcnew System::Windows::Forms::TextBox());
			this->textBox_otch = (gcnew System::Windows::Forms::TextBox());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_spec = (gcnew System::Windows::Forms::ComboBox());
			this->back = (gcnew System::Windows::Forms::Button());
			this->accept = (gcnew System::Windows::Forms::Button());
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
			this->label1_mode->Text = L"��������, ��� �� ������ �������";
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
			this->create->Text = L"������� �������";
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
			this->enter->Text = L"�����";
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
			this->surname->Text = L"������� ���� �������";
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
			this->name->Text = L"������� ���� ���";
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
			this->otch->Text = L"������� ���� ��������";
			this->otch->Visible = false;
			// 
			// vozrast
			// 
			this->vozrast->AutoSize = true;
			this->vozrast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vozrast->Location = System::Drawing::Point(50, 250);
			this->vozrast->Name = L"vozrast";
			this->vozrast->Size = System::Drawing::Size(176, 20);
			this->vozrast->TabIndex = 8;
			this->vozrast->Text = L"������� ��� �������";
			this->vozrast->Visible = false;
			// 
			// speciality
			// 
			this->speciality->AutoSize = true;
			this->speciality->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->speciality->Location = System::Drawing::Point(50, 300);
			this->speciality->Name = L"speciality";
			this->speciality->Size = System::Drawing::Size(205, 20);
			this->speciality->TabIndex = 9;
			this->speciality->Text = L"�������� �������������";
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
			// textBox_vozrast
			// 
			this->textBox_vozrast->Location = System::Drawing::Point(291, 250);
			this->textBox_vozrast->Name = L"textBox_vozrast";
			this->textBox_vozrast->Size = System::Drawing::Size(158, 20);
			this->textBox_vozrast->TabIndex = 11;
			this->textBox_vozrast->Visible = false;
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
			this->comboBox_spec->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"���������������", L"��������", L"�����������������" });
			this->comboBox_spec->Location = System::Drawing::Point(291, 302);
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
			this->back->Text = L"�����";
			this->back->UseVisualStyleBackColor = false;
			this->back->Visible = false;
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
			this->accept->Text = L"�������";
			this->accept->UseVisualStyleBackColor = false;
			this->accept->Visible = false;
			// 
			// doc1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->accept);
			this->Controls->Add(this->back);
			this->Controls->Add(this->comboBox_spec);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->textBox_otch);
			this->Controls->Add(this->textBox_vozrast);
			this->Controls->Add(this->textBox_surname);
			this->Controls->Add(this->speciality);
			this->Controls->Add(this->vozrast);
			this->Controls->Add(this->otch);
			this->Controls->Add(this->name);
			this->Controls->Add(this->surname);
			this->Controls->Add(this->enter);
			this->Controls->Add(this->create);
			this->Controls->Add(this->label1_mode);
			this->Name = L"doc1";
			this->Text = L"������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void create_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		label1_mode->Location = System::Drawing::Point(label1_mode->Location.X, 50);;
		label1_mode->Text = "�������� ������ �������";
		create->Visible = false;
		enter->Visible = false;
		name->Visible = true;
		surname->Visible = true;
		otch->Visible = true;
		vozrast->Visible = true;
		speciality->Visible = true;
		textBox_name->Visible = true;
		textBox_surname->Visible = true;
		textBox_otch->Visible = true;
		textBox_vozrast->Visible = true;
		comboBox_spec->Visible = true;
		accept->Visible = true;
		back->Visible = true;
	}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1_mode->Location = System::Drawing::Point(label1_mode->Location.X, 150);;
	label1_mode->Text = "��������, ��� �� ������ �������";
	create->Visible = true;
	enter->Visible = true;
	name->Visible = false;
	surname->Visible = false;
	otch->Visible = false;
	vozrast->Visible = false;
	speciality->Visible = false;
	textBox_name->Visible = false;
	textBox_surname->Visible = false;
	textBox_otch->Visible = false;
	textBox_vozrast->Visible = false;
	comboBox_spec->Visible = false;
	accept->Visible = false;
	back->Visible = false;
}
};
}
