#pragma once
#include "doc1.cpp"
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
			// doc_enter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->back);
			this->Name = L"doc_enter";
			this->Text = L"����";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	};
}
