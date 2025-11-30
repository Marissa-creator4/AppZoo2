#pragma once

namespace AppZoo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Horario
	/// </summary>
	public ref class Horario : public System::Windows::Forms::Form
	{
	public:
		Horario(void)
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
		~Horario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Horario::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::OliveDrab;
			this->label1->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(249, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L" Horarios del Zoológico";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::YellowGreen;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(343, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(328, 126);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Temporada de Invierno\n\nDel 02/07 al 03/08\n\nDías: Lunes a Domingos y Feriados\n\nHor"
				L"ario: 10:00 a 18:00\n\nEl ingreso al Bioparque y al Lugar de las Aves cierra a las"
				L" 17:00.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::YellowGreen;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(92, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(204, 126);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Temporada de Verano \n\nDel 01/12 al 31/12\n\nDías: Miércoles a Domingos y Feriados\n\n"
				L"Horario: 10:00 a 19:00\n\nEl ingreso cierra a las 18:00.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::YellowGreen;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(92, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(185, 126);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Temporada de Verano \n\nDel 01/01 al 28/02\n\nDías: Lunes a Domingos y Feriados\n\nHora"
				L"rio: 10:00 a 19:00\n\nEl ingreso cierra a las 18:00.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::YellowGreen;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(343, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 98);
			this->label5->TabIndex = 4;
			this->label5->Text = L" Días de Cierre del Parque\n\n24, 25 y 31 de diciembre\n\n1 de enero\n\nViernes Santo";
			// 
			// Horario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(683, 364);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Horario";
			this->Text = L"Horario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	
};
}
