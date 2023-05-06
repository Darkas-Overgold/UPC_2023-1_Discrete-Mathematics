#pragma once

namespace TB_Grupo5_SI38 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ListaCiudades
	/// </summary>
	public ref class ListaCiudades : public System::Windows::Forms::Form
	{
	public:
		ListaCiudades(void)
		{
			InitializeComponent();
			//
			// TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ListaCiudades()
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
	private: System::Windows::Forms::Label^ Lbl6;
	private: System::Windows::Forms::Label^ Lbl7;
	private: System::Windows::Forms::Label^ Lbl8;
	private: System::Windows::Forms::Label^ Lbl9;
	private: System::Windows::Forms::Label^ Lbl10;
	private: System::Windows::Forms::Label^ Lbl11;
	private: System::Windows::Forms::Label^ Lbl12;
	private: System::Windows::Forms::Label^ Lbl13;
	private: System::Windows::Forms::Label^ Lbl14;
	private: System::Windows::Forms::Label^ Lbl15;

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
			this->Lbl6 = (gcnew System::Windows::Forms::Label());
			this->Lbl7 = (gcnew System::Windows::Forms::Label());
			this->Lbl8 = (gcnew System::Windows::Forms::Label());
			this->Lbl9 = (gcnew System::Windows::Forms::Label());
			this->Lbl10 = (gcnew System::Windows::Forms::Label());
			this->Lbl11 = (gcnew System::Windows::Forms::Label());
			this->Lbl12 = (gcnew System::Windows::Forms::Label());
			this->Lbl13 = (gcnew System::Windows::Forms::Label());
			this->Lbl14 = (gcnew System::Windows::Forms::Label());
			this->Lbl15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BtnVolver
			// 
			this->BtnVolver->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnVolver->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BtnVolver->Location = System::Drawing::Point(12, 394);
			this->BtnVolver->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BtnVolver->Name = L"BtnVolver";
			this->BtnVolver->Size = System::Drawing::Size(75, 23);
			this->BtnVolver->TabIndex = 2;
			this->BtnVolver->Text = L"<--";
			this->BtnVolver->UseVisualStyleBackColor = true;
			this->BtnVolver->Click += gcnew System::EventHandler(this, &ListaCiudades::BtnVolver_Click);
			// 
			// Lbl1
			// 
			this->Lbl1->AutoSize = true;
			this->Lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl1->Location = System::Drawing::Point(361, 9);
			this->Lbl1->Name = L"Lbl1";
			this->Lbl1->Size = System::Drawing::Size(166, 32);
			this->Lbl1->TabIndex = 0;
			this->Lbl1->Text = L"CIUDADES";
			// 
			// Lbl2
			// 
			this->Lbl2->AutoSize = true;
			this->Lbl2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl2->Location = System::Drawing::Point(12, 69);
			this->Lbl2->Name = L"Lbl2";
			this->Lbl2->Size = System::Drawing::Size(122, 64);
			this->Lbl2->TabIndex = 1;
			this->Lbl2->Text = L"1.Arequipa\r\n2.Armenia\r\n3.Barrancabermeja\r\n4.Barranquilla";
			// 
			// Lbl3
			// 
			this->Lbl3->AutoSize = true;
			this->Lbl3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl3->Location = System::Drawing::Point(12, 133);
			this->Lbl3->Name = L"Lbl3";
			this->Lbl3->Size = System::Drawing::Size(102, 64);
			this->Lbl3->TabIndex = 3;
			this->Lbl3->Text = L"5.Belice\r\n6.Bogotá\r\n7.Bucaramanga\r\n8.Cali";
			// 
			// Lbl4
			// 
			this->Lbl4->AutoSize = true;
			this->Lbl4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl4->Location = System::Drawing::Point(12, 197);
			this->Lbl4->Name = L"Lbl4";
			this->Lbl4->Size = System::Drawing::Size(87, 64);
			this->Lbl4->TabIndex = 4;
			this->Lbl4->Text = L"9.Cancún\r\n10.Caracas\r\n11.Cartagena\r\n12.Chiclayo";
			// 
			// Lbl5
			// 
			this->Lbl5->AutoSize = true;
			this->Lbl5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl5->Location = System::Drawing::Point(12, 261);
			this->Lbl5->Name = L"Lbl5";
			this->Lbl5->Size = System::Drawing::Size(149, 64);
			this->Lbl5->TabIndex = 5;
			this->Lbl5->Text = L"13.Ciudad de Guatemala\r\n14.Ciudad de México\r\n15.Ciudad de Panamá\r\n16.Cúcuta";
			// 
			// Lbl6
			// 
			this->Lbl6->AutoSize = true;
			this->Lbl6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl6->Location = System::Drawing::Point(233, 69);
			this->Lbl6->Name = L"Lbl6";
			this->Lbl6->Size = System::Drawing::Size(85, 64);
			this->Lbl6->TabIndex = 6;
			this->Lbl6->Text = L"17.Cusco\r\n18.Flores\r\n19.Florencia\r\n20.Guayaquil";
			// 
			// Lbl7
			// 
			this->Lbl7->AutoSize = true;
			this->Lbl7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl7->Location = System::Drawing::Point(233, 133);
			this->Lbl7->Name = L"Lbl7";
			this->Lbl7->Size = System::Drawing::Size(75, 64);
			this->Lbl7->TabIndex = 7;
			this->Lbl7->Text = L"21.Ibagué\r\n22.Iquitos\r\n23.Juliaca\r\n24.La Ceiba";
			// 
			// Lbl8
			// 
			this->Lbl8->AutoSize = true;
			this->Lbl8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl8->Location = System::Drawing::Point(233, 197);
			this->Lbl8->Name = L"Lbl8";
			this->Lbl8->Size = System::Drawing::Size(88, 64);
			this->Lbl8->TabIndex = 8;
			this->Lbl8->Text = L"25.La Habana\r\n26.Leticia\r\n27.Liberia\r\n28.Lima";
			// 
			// Lbl9
			// 
			this->Lbl9->AutoSize = true;
			this->Lbl9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl9->Location = System::Drawing::Point(233, 261);
			this->Lbl9->Name = L"Lbl9";
			this->Lbl9->Size = System::Drawing::Size(85, 64);
			this->Lbl9->TabIndex = 9;
			this->Lbl9->Text = L"29.Managua\r\n30.Manizales\r\n31.Medellín\r\n32.Montería";
			// 
			// Lbl10
			// 
			this->Lbl10->AutoSize = true;
			this->Lbl10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl10->Location = System::Drawing::Point(438, 69);
			this->Lbl10->Name = L"Lbl10";
			this->Lbl10->Size = System::Drawing::Size(68, 64);
			this->Lbl10->TabIndex = 10;
			this->Lbl10->Text = L"33.Neiva\r\n34.Pasto\r\n35.Pereira\r\n36.Piura";
			// 
			// Lbl11
			// 
			this->Lbl11->AutoSize = true;
			this->Lbl11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl11->Location = System::Drawing::Point(438, 133);
			this->Lbl11->Name = L"Lbl11";
			this->Lbl11->Size = System::Drawing::Size(132, 64);
			this->Lbl11->TabIndex = 11;
			this->Lbl11->Text = L"37.Popayán\r\n38.Puerto Maldonado\r\n39.Punta Cana\r\n40.Quito";
			// 
			// Lbl12
			// 
			this->Lbl12->AutoSize = true;
			this->Lbl12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl12->Location = System::Drawing::Point(438, 197);
			this->Lbl12->Name = L"Lbl12";
			this->Lbl12->Size = System::Drawing::Size(157, 64);
			this->Lbl12->TabIndex = 12;
			this->Lbl12->Text = L"41.Roatán\r\n42.San Andrés\r\n43.San Juan\r\n44.San José de Costa Rica";
			// 
			// Lbl13
			// 
			this->Lbl13->AutoSize = true;
			this->Lbl13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl13->Location = System::Drawing::Point(438, 261);
			this->Lbl13->Name = L"Lbl13";
			this->Lbl13->Size = System::Drawing::Size(128, 64);
			this->Lbl13->TabIndex = 13;
			this->Lbl13->Text = L"45.San Pedro de Sula\r\n46.San Salvador\r\n47.Santa Marta\r\n48.Santo Domingo";
			// 
			// Lbl14
			// 
			this->Lbl14->AutoSize = true;
			this->Lbl14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl14->Location = System::Drawing::Point(669, 69);
			this->Lbl14->Name = L"Lbl14";
			this->Lbl14->Size = System::Drawing::Size(101, 64);
			this->Lbl14->TabIndex = 14;
			this->Lbl14->Text = L"49.Tegucigalpa\r\n50.Trujillo\r\n51.Tumaco\r\n52.Valledupar";
			// 
			// Lbl15
			// 
			this->Lbl15->AutoSize = true;
			this->Lbl15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lbl15->Location = System::Drawing::Point(669, 133);
			this->Lbl15->Name = L"Lbl15";
			this->Lbl15->Size = System::Drawing::Size(100, 32);
			this->Lbl15->TabIndex = 15;
			this->Lbl15->Text = L"53.Villavicencio\r\n54.Yopal";
			// 
			// ListaCiudades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(933, 430);
			this->Controls->Add(this->Lbl15);
			this->Controls->Add(this->Lbl14);
			this->Controls->Add(this->Lbl13);
			this->Controls->Add(this->Lbl12);
			this->Controls->Add(this->Lbl11);
			this->Controls->Add(this->Lbl10);
			this->Controls->Add(this->Lbl9);
			this->Controls->Add(this->Lbl8);
			this->Controls->Add(this->Lbl7);
			this->Controls->Add(this->Lbl6);
			this->Controls->Add(this->Lbl5);
			this->Controls->Add(this->Lbl4);
			this->Controls->Add(this->Lbl3);
			this->Controls->Add(this->Lbl2);
			this->Controls->Add(this->Lbl1);
			this->Controls->Add(this->BtnVolver);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Name = L"ListaCiudades";
			this->Text = L"ListaCiudades";
			this->Load += gcnew System::EventHandler(this, &ListaCiudades::ListaCiudades_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ListaCiudades_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtnVolver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}