#pragma once

namespace AppZoo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions; // for Regex

	/// <summary>
	/// Resumen de boleto
	/// </summary>
	public ref class boleto : public System::Windows::Forms::Form
	{
	public:
		boleto(void)
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
		~boleto()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	// Added ComboBoxes for selection 0-5
	private: System::Windows::Forms::ComboBox^ comboBoxNino;
	private: System::Windows::Forms::ComboBox^ comboBoxAdulto;
	private: System::Windows::Forms::ComboBox^ comboBoxAdultoMayor;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(boleto::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBoxNino = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxAdulto = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxAdultoMayor = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Green;
			this->textBox1->Location = System::Drawing::Point(137, 74);
			this->textBox1->MaxLength = 30;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &boleto::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Green;
			this->textBox2->Location = System::Drawing::Point(137, 103);
			this->textBox2->MaxLength = 10;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(202, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &boleto::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Green;
			this->textBox3->Location = System::Drawing::Point(137, 139);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(202, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &boleto::textBox3_Validating);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkGreen;
			this->label1->Location = System::Drawing::Point(58, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkGreen;
			this->label2->Location = System::Drawing::Point(58, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Cédula";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkGreen;
			this->label3->Location = System::Drawing::Point(58, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Correo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkGreen;
			this->label4->Location = System::Drawing::Point(58, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Niño";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkGreen;
			this->label5->Location = System::Drawing::Point(58, 242);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Adulto";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkGreen;
			this->label6->Location = System::Drawing::Point(58, 297);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Adulto Mayor";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkGreen;
			this->label7->Location = System::Drawing::Point(58, 38);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Venta de boletos";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Green;
			this->button1->Location = System::Drawing::Point(336, 301);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Comprar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// comboBoxNino
			// 
			this->comboBoxNino->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxNino->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxNino->ForeColor = System::Drawing::Color::Green;
			this->comboBoxNino->FormattingEnabled = true;
			this->comboBoxNino->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"0", L"1", L"2", L"3", L"4", L"5" });
			this->comboBoxNino->Location = System::Drawing::Point(181, 194);
			this->comboBoxNino->Name = L"comboBoxNino";
			this->comboBoxNino->Size = System::Drawing::Size(60, 24);
			this->comboBoxNino->TabIndex = 17;
			this->comboBoxNino->SelectedIndexChanged += gcnew System::EventHandler(this, &boleto::comboBoxNino_SelectedIndexChanged);
			// 
			// comboBoxAdulto
			// 
			this->comboBoxAdulto->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxAdulto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxAdulto->ForeColor = System::Drawing::Color::Green;
			this->comboBoxAdulto->FormattingEnabled = true;
			this->comboBoxAdulto->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"0", L"1", L"2", L"3", L"4", L"5" });
			this->comboBoxAdulto->Location = System::Drawing::Point(181, 239);
			this->comboBoxAdulto->Name = L"comboBoxAdulto";
			this->comboBoxAdulto->Size = System::Drawing::Size(60, 24);
			this->comboBoxAdulto->TabIndex = 18;
			this->comboBoxAdulto->SelectedIndexChanged += gcnew System::EventHandler(this, &boleto::comboBoxAdulto_SelectedIndexChanged);
			// 
			// comboBoxAdultoMayor
			// 
			this->comboBoxAdultoMayor->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxAdultoMayor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBoxAdultoMayor->ForeColor = System::Drawing::Color::Green;
			this->comboBoxAdultoMayor->FormattingEnabled = true;
			this->comboBoxAdultoMayor->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"0", L"1", L"2", L"3", L"4", L"5" });
			this->comboBoxAdultoMayor->Location = System::Drawing::Point(181, 294);
			this->comboBoxAdultoMayor->Name = L"comboBoxAdultoMayor";
			this->comboBoxAdultoMayor->Size = System::Drawing::Size(60, 24);
			this->comboBoxAdultoMayor->TabIndex = 19;
			this->comboBoxAdultoMayor->SelectedIndexChanged += gcnew System::EventHandler(this, &boleto::comboBoxAdultoMayor_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkGreen;
			this->label8->Location = System::Drawing::Point(277, 197);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 16);
			this->label8->TabIndex = 20;
			this->label8->Text = L"$5";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DarkGreen;
			this->label9->Location = System::Drawing::Point(277, 247);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 16);
			this->label9->TabIndex = 21;
			this->label9->Text = L"$10";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DarkGreen;
			this->label10->Location = System::Drawing::Point(277, 297);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(23, 16);
			this->label10->TabIndex = 22;
			this->label10->Text = L"$3";
			this->label10->Click += gcnew System::EventHandler(this, &boleto::label10_Click);
			// 
			// boleto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(490, 354);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBoxAdultoMayor);
			this->Controls->Add(this->comboBoxAdulto);
			this->Controls->Add(this->comboBoxNino);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"boleto";
			this->Text = L"boleto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		// Handlers for combo box selection changes
	private: System::Void comboBoxNino_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBoxNino->SelectedItem != nullptr) {
			int valor = Convert::ToInt32(this->comboBoxNino->SelectedItem->ToString());
			if (valor > 5) {
				this->comboBoxNino->SelectedIndex = 5; // Forzar a 5 si se pasa
			}
		}
	}

	private: System::Void comboBoxAdulto_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBoxAdulto->SelectedItem != nullptr) {
			int valor = Convert::ToInt32(this->comboBoxAdulto->SelectedItem->ToString());
			if (valor > 5) {
				this->comboBoxAdulto->SelectedIndex = 5; // Forzar a 5 si se pasa
			}
		}
	}
	private: System::Void comboBoxAdultoMayor_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBoxAdultoMayor->SelectedItem != nullptr) {
			int valor = Convert::ToInt32(this->comboBoxAdultoMayor->SelectedItem->ToString());
			if (valor > 5) {
				this->comboBoxAdultoMayor->SelectedIndex = 5; // Forzar a 5 si se pasa
			}
		}
	}

		// Validación del correo
	private: System::Void textBox3_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		String^ correo = this->textBox3->Text->Trim();

		// DEBUG 
		System::Diagnostics::Debug::WriteLine("Correo ingresado: " + correo);

		if (correo->Length == 0) {
			System::Diagnostics::Debug::WriteLine("Error: Correo vacío");
			MessageBox::Show("El campo correo no puede estar vacío.", "Correo inválido", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			e->Cancel = true;
			return;
		}

		String^ pattern = "^[A-Za-z0-9._%+-]+@(gmail\\.com|([A-Za-z0-9-]+\\.)*[A-Za-z0-9-]+\\.edu\\.ec)$";
		Regex^ rx = gcnew Regex(pattern, RegexOptions::IgnoreCase);
		bool isMatch = rx->IsMatch(correo);

		// DEBUG invisible
		System::Diagnostics::Debug::WriteLine("Resultado del match: " + isMatch);
		System::Diagnostics::Debug::WriteLine("Patrón usado: " + pattern);

		if (!isMatch) {
			System::Diagnostics::Debug::WriteLine("Correo rechazado: " + correo);
			MessageBox::Show("Ingrese un correo válido (ej: usuario@gmail.com o usuario@dominio.edu.ec).", "Correo inválido", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			e->Cancel = true;
		}
		else {
			System::Diagnostics::Debug::WriteLine("Correo aceptado: " + correo);
		}
	}

		// Permitir sólo números en Cédula (textBox2)
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Permitir teclas de control (backspace, etc.) y dígitos
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar)) {
			e->Handled = true; // ignorar la tecla
		}
	}

	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
