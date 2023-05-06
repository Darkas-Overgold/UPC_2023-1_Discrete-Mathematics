#pragma once

namespace TB_Grupo5_SI38 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Integrantes
	/// </summary>
	public ref class Integrantes : public System::Windows::Forms::Form
	{
	public:
		Integrantes(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Integrantes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnVolver;
	private: System::Windows::Forms::Label^ Lbl1;
	private: System::Windows::Forms::Label^ Lbl2;
	private: System::Windows::Forms::Label^ Lbl3;
	private: System::Windows::Forms::Label^ Lbl4;
	private: System::Windows::Forms::Label^ Lbl5;
	private: System::Windows::Forms::Label^ LblUPC1;
	private: System::Windows::Forms::Label^ LblUPC2;
	private: System::Windows::Forms::Label^ LblUPC3;
	private: System::Windows::Forms::Label^ LblUPC4;
	private: System::Windows::Forms::Label^ LblUPC5;
	private: System::Windows::Forms::Label^ LblUPC6;
	private: System::Windows::Forms::Label^ LblUPC7;
	private: System::Windows::Forms::Label^ LblUPC8;
	private: System::Windows::Forms::Label^ LblUPC9;
	private: System::Windows::Forms::Label^ LblUPC10;
	private: System::Windows::Forms::Label^ LblUPC11;
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BtnVolver = (gcnew System::Windows::Forms::Button());
			this->Lbl1 = (gcnew System::Windows::Forms::Label());
			this->Lbl2 = (gcnew System::Windows::Forms::Label());
			this->Lbl3 = (gcnew System::Windows::Forms::Label());
			this->Lbl4 = (gcnew System::Windows::Forms::Label());
			this->Lbl5 = (gcnew System::Windows::Forms::Label());
			this->LblUPC1 = (gcnew System::Windows::Forms::Label());
			this->LblUPC2 = (gcnew System::Windows::Forms::Label());
			this->LblUPC3 = (gcnew System::Windows::Forms::Label());
			this->LblUPC4 = (gcnew System::Windows::Forms::Label());
			this->LblUPC5 = (gcnew System::Windows::Forms::Label());
			this->LblUPC6 = (gcnew System::Windows::Forms::Label());
			this->LblUPC7 = (gcnew System::Windows::Forms::Label());
			this->LblUPC8 = (gcnew System::Windows::Forms::Label());
			this->LblUPC9 = (gcnew System::Windows::Forms::Label());
			this->LblUPC10 = (gcnew System::Windows::Forms::Label());
			this->LblUPC11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BtnVolver
			// 
			this->BtnVolver->Location = System::Drawing::Point(12, 615);
			this->BtnVolver->Name = L"BtnVolver";
			this->BtnVolver->Size = System::Drawing::Size(75, 23);
			this->BtnVolver->TabIndex = 0;
			this->BtnVolver->Text = L"<--";
			this->BtnVolver->UseVisualStyleBackColor = true;
			this->BtnVolver->Click += gcnew System::EventHandler(this, &Integrantes::BtnVolver_Click);
			// 
			// Lbl1
			// 
			this->Lbl1->AutoSize = true;
			this->Lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl1->Location = System::Drawing::Point(84, 35);
			this->Lbl1->Name = L"Lbl1";
			this->Lbl1->Size = System::Drawing::Size(355, 32);
			this->Lbl1->TabIndex = 1;
			this->Lbl1->Text = L"Matemática Discreta (SI38)";
			// 
			// Lbl2
			// 
			this->Lbl2->AutoSize = true;
			this->Lbl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl2->Location = System::Drawing::Point(197, 79);
			this->Lbl2->Name = L"Lbl2";
			this->Lbl2->Size = System::Drawing::Size(101, 20);
			this->Lbl2->TabIndex = 2;
			this->Lbl2->Text = L"Proyecto N4";
			// 
			// Lbl3
			// 
			this->Lbl3->AutoSize = true;
			this->Lbl3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl3->Location = System::Drawing::Point(122, 108);
			this->Lbl3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl3->Name = L"Lbl3";
			this->Lbl3->Size = System::Drawing::Size(248, 36);
			this->Lbl3->TabIndex = 3;
			this->Lbl3->Text = L"\"Avianca Coders\"";
			// 
			// Lbl4
			// 
			this->Lbl4->AutoSize = true;
			this->Lbl4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Lbl4->Location = System::Drawing::Point(12, 475);
			this->Lbl4->Name = L"Lbl4";
			this->Lbl4->Size = System::Drawing::Size(474, 110);
			this->Lbl4->TabIndex = 4;
			this->Lbl4->Text = L"Adrian Matias Rios Cespedes (U202217893)\r\nElmer Augusto Riva Rodriguez (U20222082"
				L"9)\r\nJean Pierre Steven Cabrera Sanchez (U202213570)\r\nJeremy Joel Quispe Andia (U"
				L"202216279)\r\n\r\n";
			// 
			// Lbl5
			// 
			this->Lbl5->AutoSize = true;
			this->Lbl5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Lbl5->Location = System::Drawing::Point(12, 556);
			this->Lbl5->Name = L"Lbl5";
			this->Lbl5->Size = System::Drawing::Size(428, 44);
			this->Lbl5->TabIndex = 5;
			this->Lbl5->Text = L"Manuel Stephano Chávez Antón (U202216567)\r\n\r\n";
			// 
			// LblUPC1
			// 
			this->LblUPC1->AutoSize = true;
			this->LblUPC1->ForeColor = System::Drawing::Color::Red;
			this->LblUPC1->Location = System::Drawing::Point(169, 217);
			this->LblUPC1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LblUPC1->Name = L"LblUPC1";
			this->LblUPC1->Size = System::Drawing::Size(139, 16);
			this->LblUPC1->TabIndex = 6;
			this->LblUPC1->Text = L"          ▉         ▉             ▉     ";
			// 
			// LblUPC2
			// 
			this->LblUPC2->AutoSize = true;
			this->LblUPC2->ForeColor = System::Drawing::Color::Red;
			this->LblUPC2->Location = System::Drawing::Point(169, 233);
			this->LblUPC2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LblUPC2->Name = L"LblUPC2";
			this->LblUPC2->Size = System::Drawing::Size(151, 16);
			this->LblUPC2->TabIndex = 7;
			this->LblUPC2->Text = L"      ▉▉          ▉▉             ▉▉     ";
			// 
			// LblUPC3
			// 
			this->LblUPC3->AutoSize = true;
			this->LblUPC3->ForeColor = System::Drawing::Color::Red;
			this->LblUPC3->Location = System::Drawing::Point(169, 250);
			this->LblUPC3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LblUPC3->Name = L"LblUPC3";
			this->LblUPC3->Size = System::Drawing::Size(152, 16);
			this->LblUPC3->TabIndex = 8;
			this->LblUPC3->Text = L"     ▉▉          ▉▉▉             ▉▉    ";
			// 
			// LblUPC4
			// 
			this->LblUPC4->AutoSize = true;
			this->LblUPC4->ForeColor = System::Drawing::Color::Red;
			this->LblUPC4->Location = System::Drawing::Point(169, 266);
			this->LblUPC4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LblUPC4->Name = L"LblUPC4";
			this->LblUPC4->Size = System::Drawing::Size(155, 16);
			this->LblUPC4->TabIndex = 9;
			this->LblUPC4->Text = L"    ▉▉          ▉▉▉               ▉▉    ";
			// 
			// LblUPC5
			// 
			this->LblUPC5->AutoSize = true;
			this->LblUPC5->ForeColor = System::Drawing::Color::Red;
			this->LblUPC5->Location = System::Drawing::Point(169, 283);
			this->LblUPC5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LblUPC5->Name = L"LblUPC5";
			this->LblUPC5->Size = System::Drawing::Size(161, 16);
			this->LblUPC5->TabIndex = 10;
			this->LblUPC5->Text = L"   ▉▉            ▉▉▉               ▉▉     ";
			// 
			// LblUPC6
			// 
			this->LblUPC6->AutoSize = true;
			this->LblUPC6->ForeColor = System::Drawing::Color::Red;
			this->LblUPC6->Location = System::Drawing::Point(169, 299);
			this->LblUPC6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LblUPC6->Name = L"LblUPC6";
			this->LblUPC6->Size = System::Drawing::Size(170, 16);
			this->LblUPC6->TabIndex = 11;
			this->LblUPC6->Text = L"  ▉▉▉          ▉▉▉▉            ▉▉▉       ";
			// 
			// LblUPC7
			// 
			this->LblUPC7->AutoSize = true;
			this->LblUPC7->ForeColor = System::Drawing::Color::Red;
			this->LblUPC7->Location = System::Drawing::Point(169, 316);
			this->LblUPC7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LblUPC7->Name = L"LblUPC7";
			this->LblUPC7->Size = System::Drawing::Size(170, 16);
			this->LblUPC7->TabIndex = 12;
			this->LblUPC7->Text = L"   ▉▉              ▉▉▉             ▉▉        ";
			// 
			// LblUPC8
			// 
			this->LblUPC8->AutoSize = true;
			this->LblUPC8->ForeColor = System::Drawing::Color::Red;
			this->LblUPC8->Location = System::Drawing::Point(169, 332);
			this->LblUPC8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LblUPC8->Name = L"LblUPC8";
			this->LblUPC8->Size = System::Drawing::Size(177, 16);
			this->LblUPC8->TabIndex = 13;
			this->LblUPC8->Text = L"   ▉▉▉            ▉▉             ▉▉▉          ";
			// 
			// LblUPC9
			// 
			this->LblUPC9->AutoSize = true;
			this->LblUPC9->ForeColor = System::Drawing::Color::Red;
			this->LblUPC9->Location = System::Drawing::Point(169, 349);
			this->LblUPC9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LblUPC9->Name = L"LblUPC9";
			this->LblUPC9->Size = System::Drawing::Size(170, 16);
			this->LblUPC9->TabIndex = 14;
			this->LblUPC9->Text = L"     ▉▉▉           ▉            ▉▉▉          ";
			// 
			// LblUPC10
			// 
			this->LblUPC10->AutoSize = true;
			this->LblUPC10->ForeColor = System::Drawing::Color::Red;
			this->LblUPC10->Location = System::Drawing::Point(169, 366);
			this->LblUPC10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LblUPC10->Name = L"LblUPC10";
			this->LblUPC10->Size = System::Drawing::Size(147, 16);
			this->LblUPC10->TabIndex = 15;
			this->LblUPC10->Text = L"        ▉▉▉▉▉▉▉▉▉▉▉▉▉▉      ";
			// 
			// LblUPC11
			// 
			this->LblUPC11->AutoSize = true;
			this->LblUPC11->ForeColor = System::Drawing::Color::Red;
			this->LblUPC11->Location = System::Drawing::Point(182, 382);
			this->LblUPC11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LblUPC11->Name = L"LblUPC11";
			this->LblUPC11->Size = System::Drawing::Size(119, 16);
			this->LblUPC11->TabIndex = 16;
			this->LblUPC11->Text = L"            ▉▉▉▉▉▉▉         ";
			// 
			// Integrantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(536, 650);
			this->Controls->Add(this->LblUPC11);
			this->Controls->Add(this->LblUPC10);
			this->Controls->Add(this->LblUPC9);
			this->Controls->Add(this->LblUPC8);
			this->Controls->Add(this->LblUPC7);
			this->Controls->Add(this->LblUPC6);
			this->Controls->Add(this->LblUPC5);
			this->Controls->Add(this->LblUPC4);
			this->Controls->Add(this->LblUPC3);
			this->Controls->Add(this->LblUPC2);
			this->Controls->Add(this->LblUPC1);
			this->Controls->Add(this->Lbl5);
			this->Controls->Add(this->Lbl4);
			this->Controls->Add(this->Lbl3);
			this->Controls->Add(this->Lbl2);
			this->Controls->Add(this->Lbl1);
			this->Controls->Add(this->BtnVolver);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Integrantes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &Integrantes::Integrantes_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Integrantes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtnVolver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}