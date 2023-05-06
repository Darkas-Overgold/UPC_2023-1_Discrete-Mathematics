#pragma once
#include "ListaCiudades.h"

namespace TB_Grupo5_SI38 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Instrucciones
	/// </summary>
	public ref class Instrucciones : public System::Windows::Forms::Form
	{
	public:
		Instrucciones(void)
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
		~Instrucciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnVolver;
	private: System::Windows::Forms::Label^ LblMostrar;
	private: System::Windows::Forms::Label^ Lbl1;
	private: System::Windows::Forms::Label^ Lbl2;
	private: System::Windows::Forms::Label^ Lbl3;
	private: System::Windows::Forms::Label^ Lbl4;
	private: System::Windows::Forms::Label^ Lbl5;
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
			this->LblMostrar = (gcnew System::Windows::Forms::Label());
			this->Lbl1 = (gcnew System::Windows::Forms::Label());
			this->Lbl2 = (gcnew System::Windows::Forms::Label());
			this->Lbl3 = (gcnew System::Windows::Forms::Label());
			this->Lbl4 = (gcnew System::Windows::Forms::Label());
			this->Lbl5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BtnVolver
			// 
			this->BtnVolver->Location = System::Drawing::Point(12, 572);
			this->BtnVolver->Name = L"BtnVolver";
			this->BtnVolver->Size = System::Drawing::Size(75, 23);
			this->BtnVolver->TabIndex = 1;
			this->BtnVolver->Text = L"<--";
			this->BtnVolver->UseVisualStyleBackColor = true;
			this->BtnVolver->Click += gcnew System::EventHandler(this, &Instrucciones::BtnVolver_Click);
			// 
			// LblMostrar
			// 
			this->LblMostrar->AutoSize = true;
			this->LblMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblMostrar->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->LblMostrar->Location = System::Drawing::Point(9, 467);
			this->LblMostrar->Name = L"LblMostrar";
			this->LblMostrar->Size = System::Drawing::Size(52, 16);
			this->LblMostrar->TabIndex = 2;
			this->LblMostrar->Text = L"Mostrar";
			this->LblMostrar->Click += gcnew System::EventHandler(this, &Instrucciones::LblMostrar_Click);
			// 
			// Lbl1
			// 
			this->Lbl1->AutoSize = true;
			this->Lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Lbl1->Location = System::Drawing::Point(12, 86);
			this->Lbl1->Name = L"Lbl1";
			this->Lbl1->Size = System::Drawing::Size(442, 75);
			this->Lbl1->TabIndex = 3;
			this->Lbl1->Text = L"1. Digite su ciudad de partida.\r\n2. Digite su ciudad de destino.\r\n3. Obtenga uno "
				L"de los siguientes resultados:\r\n";
			// 
			// Lbl2
			// 
			this->Lbl2->AutoSize = true;
			this->Lbl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl2->Location = System::Drawing::Point(12, 219);
			this->Lbl2->Name = L"Lbl2";
			this->Lbl2->Size = System::Drawing::Size(491, 50);
			this->Lbl2->TabIndex = 4;
			this->Lbl2->Text = L"• Hay vuelo directo a su destino.\r\n• Hay conexión de una ciudad con otra, con una"
				L" escala,";
			// 
			// Lbl3
			// 
			this->Lbl3->AutoSize = true;
			this->Lbl3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl3->Location = System::Drawing::Point(12, 264);
			this->Lbl3->Name = L"Lbl3";
			this->Lbl3->Size = System::Drawing::Size(505, 75);
			this->Lbl3->TabIndex = 5;
			this->Lbl3->Text = L"  mostrando cuál es.\r\n• Hay conexión de una ciudad con otra, con dos escalas, \r\n "
				L" mostrando cuáles son estas.\r\n";
			// 
			// 4
			// 
			this->Lbl4->AutoSize = true;
			this->Lbl4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl4->Location = System::Drawing::Point(12, 335);
			this->Lbl4->Name = L"Lbl4";
			this->Lbl4->Size = System::Drawing::Size(495, 50);
			this->Lbl4->TabIndex = 6;
			this->Lbl4->Text = L"• Si no sucede nada al presionar el botón buscar, tal vez\r\n  digitó mal alguna ci"
				L"udad o no presentan conexiones.";
			// 
			// Lbl5
			// 
			this->Lbl5->AutoSize = true;
			this->Lbl5->Location = System::Drawing::Point(9, 451);
			this->Lbl5->Name = L"Lbl5";
			this->Lbl5->Size = System::Drawing::Size(245, 16);
			this->Lbl5->TabIndex = 7;
			this->Lbl5->Text = L"Lista de ciudes y su correcta tipificación:";
			this->Lbl5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Instrucciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(590, 607);
			this->Controls->Add(this->Lbl5);
			this->Controls->Add(this->Lbl4);
			this->Controls->Add(this->Lbl3);
			this->Controls->Add(this->Lbl2);
			this->Controls->Add(this->Lbl1);
			this->Controls->Add(this->LblMostrar);
			this->Controls->Add(this->BtnVolver);
			this->Name = L"Instrucciones";
			this->Text = L"Instrucciones";
			this->Load += gcnew System::EventHandler(this, &Instrucciones::Instrucciones_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Instrucciones_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtnVolver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void LblMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		ListaCiudades^ frm = gcnew ListaCiudades();
		frm->Show();
	}
	};
}