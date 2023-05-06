#pragma once
#include "Programa.h"
#include "Integrantes.h"
#include "Instrucciones.h"

namespace TB_Grupo5_SI38 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Menú
	/// </summary>
	public ref class Menú : public System::Windows::Forms::Form
	{
	public:
		Menú(void)
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
		~Menú()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnInstrucciones;
	private: System::Windows::Forms::Button^ BtnIntegrantes;
	private: System::Windows::Forms::Button^ BtnInicio;
	protected:
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
			this->BtnInstrucciones = (gcnew System::Windows::Forms::Button());
			this->BtnIntegrantes = (gcnew System::Windows::Forms::Button());
			this->BtnInicio = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BtnInstrucciones
			// 
			this->BtnInstrucciones->BackColor = System::Drawing::Color::DarkBlue;
			this->BtnInstrucciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnInstrucciones->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->BtnInstrucciones->Location = System::Drawing::Point(56, 141);
			this->BtnInstrucciones->Margin = System::Windows::Forms::Padding(5, 7, 5, 7);
			this->BtnInstrucciones->Name = L"BtnInstrucciones";
			this->BtnInstrucciones->Size = System::Drawing::Size(381, 79);
			this->BtnInstrucciones->TabIndex = 0;
			this->BtnInstrucciones->Text = L"Instrucciones";
			this->BtnInstrucciones->UseVisualStyleBackColor = false;
			this->BtnInstrucciones->Click += gcnew System::EventHandler(this, &Menú::BtnInstrucciones_Click);
			// 
			// BtnIntegrantes
			// 
			this->BtnIntegrantes->BackColor = System::Drawing::Color::DarkBlue;
			this->BtnIntegrantes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnIntegrantes->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BtnIntegrantes->Location = System::Drawing::Point(600, 141);
			this->BtnIntegrantes->Margin = System::Windows::Forms::Padding(5, 7, 5, 7);
			this->BtnIntegrantes->Name = L"BtnIntegrantes";
			this->BtnIntegrantes->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->BtnIntegrantes->Size = System::Drawing::Size(389, 79);
			this->BtnIntegrantes->TabIndex = 1;
			this->BtnIntegrantes->Text = L"Integrantes";
			this->BtnIntegrantes->UseVisualStyleBackColor = false;
			this->BtnIntegrantes->Click += gcnew System::EventHandler(this, &Menú::BtnIntegrantes_Click);
			// 
			// BtnInicio
			// 
			this->BtnInicio->BackColor = System::Drawing::Color::DarkBlue;
			this->BtnInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnInicio->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BtnInicio->Location = System::Drawing::Point(349, 608);
			this->BtnInicio->Margin = System::Windows::Forms::Padding(5, 7, 5, 7);
			this->BtnInicio->Name = L"BtnInicio";
			this->BtnInicio->Size = System::Drawing::Size(304, 107);
			this->BtnInicio->TabIndex = 2;
			this->BtnInicio->Text = L"Inicio";
			this->BtnInicio->UseVisualStyleBackColor = false;
			this->BtnInicio->Click += gcnew System::EventHandler(this, &Menú::BtnInicio_Click);
			// 
			// Menú
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1096, 917);
			this->Controls->Add(this->BtnInicio);
			this->Controls->Add(this->BtnIntegrantes);
			this->Controls->Add(this->BtnInstrucciones);
			this->Margin = System::Windows::Forms::Padding(5, 7, 5, 7);
			this->Name = L"Menú";
			this->Text = L"  Menú";
			this->Load += gcnew System::EventHandler(this, &Menú::Menú_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Menú_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtnInicio_Click(System::Object^ sender, System::EventArgs^ e) {
		Programa^ frm = gcnew Programa();
		frm->Show();
	}
	private: System::Void BtnIntegrantes_Click(System::Object^ sender, System::EventArgs^ e) {
		Integrantes^ frm = gcnew Integrantes();
		frm->Show();
	}
	private: System::Void BtnInstrucciones_Click(System::Object^ sender, System::EventArgs^ e) {
		Instrucciones^ frm = gcnew Instrucciones();
		frm->Show();
	}
	};
}