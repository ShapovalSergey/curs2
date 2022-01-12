#pragma once

namespace curs2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ main_menu;
	private: System::Windows::Forms::Label^ label1_mode;
	private: System::Windows::Forms::Button^ patient;
	private: System::Windows::Forms::Button^ doctor;

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
			this->main_menu = (gcnew System::Windows::Forms::Label());
			this->label1_mode = (gcnew System::Windows::Forms::Label());
			this->patient = (gcnew System::Windows::Forms::Button());
			this->doctor = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// main_menu
			// 
			this->main_menu->AutoSize = true;
			this->main_menu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->main_menu->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->main_menu->Location = System::Drawing::Point(266, 75);
			this->main_menu->Name = L"main_menu";
			this->main_menu->Size = System::Drawing::Size(268, 25);
			this->main_menu->TabIndex = 0;
			this->main_menu->Text = L"����������� ��������";
			// 
			// label1_mode
			// 
			this->label1_mode->AutoSize = true;
			this->label1_mode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1_mode->Location = System::Drawing::Point(283, 149);
			this->label1_mode->Name = L"label1_mode";
			this->label1_mode->Size = System::Drawing::Size(236, 24);
			this->label1_mode->TabIndex = 1;
			this->label1_mode->Text = L"�������� ����� ������";
			// 
			// patient
			// 
			this->patient->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->patient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->patient->ForeColor = System::Drawing::SystemColors::ControlText;
			this->patient->Location = System::Drawing::Point(167, 249);
			this->patient->Name = L"patient";
			this->patient->Size = System::Drawing::Size(150, 50);
			this->patient->TabIndex = 2;
			this->patient->Text = L"�������";
			this->patient->UseVisualStyleBackColor = false;
			// 
			// doctor
			// 
			this->doctor->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->doctor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->doctor->ForeColor = System::Drawing::SystemColors::ControlText;
			this->doctor->Location = System::Drawing::Point(484, 249);
			this->doctor->Name = L"doctor";
			this->doctor->Size = System::Drawing::Size(150, 50);
			this->doctor->TabIndex = 3;
			this->doctor->Text = L"������";
			this->doctor->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->doctor);
			this->Controls->Add(this->patient);
			this->Controls->Add(this->label1_mode);
			this->Controls->Add(this->main_menu);
			this->Name = L"MyForm";
			this->Text = L"��������";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	};
}
