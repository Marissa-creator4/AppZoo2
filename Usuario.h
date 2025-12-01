#pragma once
#include "UserManager.h"

namespace AppZoo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Resumen de Usuario
	/// </summary>
	public ref class Usuario : public System::Windows::Forms::Form
	{
	public:
		Usuario(void)
		{
			InitializeComponent();
			// Ensure central user storage
			AppZoo2::UserManager::EnsureInitialized();
			// poblar suggestions en combo desde UserManager
			PopulateCedulaSuggestions();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Usuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		// Diseño
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::TextBox^ textBox3;
		System::Windows::Forms::TextBox^ textBox4;
		System::Windows::Forms::TextBox^ textBox5;
		System::Windows::Forms::TextBox^ textBox6;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Label^ label8;
		System::Windows::Forms::ComboBox^ comboBoxBuscarCedula; // changed to combo box for suggestions
		System::Windows::Forms::TextBox^ textBox8;
		System::Windows::Forms::TextBox^ textBox9;
		System::Windows::Forms::TextBox^ textBox10;
		System::Windows::Forms::TextBox^ textBox11;
		System::Windows::Forms::TextBox^ textBox12;
		System::Windows::Forms::Label^ label9;
		System::Windows::Forms::Label^ label10;
		System::Windows::Forms::Label^ label11;
		System::Windows::Forms::Label^ label12;
		System::Windows::Forms::Label^ label13;
		System::Windows::Forms::Label^ label14;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Usuario::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBoxBuscarCedula = (gcnew System::Windows::Forms::ComboBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(192, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nuevo Usuario";
			this->label1->Click += gcnew System::EventHandler(this, &Usuario::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(262, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Usuario";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Correo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(287, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Edad";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 92);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Cédula";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(232, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Contraseña";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(178, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(75, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(206, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(75, 89);
			this->textBox3->MaxLength = 10;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(153, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Usuario::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(311, 37);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(164, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(325, 65);
			this->textBox5->MaxLength = 3;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(68, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Usuario::textBox5_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(294, 91);
			this->textBox6->MaxLength = 8;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(181, 20);
			this->textBox6->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(220, 126);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Usuario::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
		 this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
		 this->label8->Location = System::Drawing::Point(99, 165);
		 this->label8->Name = L"label8";
		 this->label8->Size = System::Drawing::Size(115, 20);
		 this->label8->TabIndex = 14;
		 this->label8->Text = L"Buscar usuario";
		 // 
			// comboBoxBuscarCedula
			// 
		 this->comboBoxBuscarCedula->Location = System::Drawing::Point(80, 198);
		 this->comboBoxBuscarCedula->MaxLength = 10;
		 this->comboBoxBuscarCedula->Name = L"comboBoxBuscarCedula";
		 this->comboBoxBuscarCedula->Size = System::Drawing::Size(245, 21);
		 this->comboBoxBuscarCedula->TabIndex = 15;
		 this->comboBoxBuscarCedula->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDown;
		 this->comboBoxBuscarCedula->TextChanged += gcnew System::EventHandler(this, &Usuario::comboBoxBuscarCedula_TextChanged);
		 this->comboBoxBuscarCedula->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Usuario::comboBoxBuscarCedula_KeyPress);
		 // 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(80, 218);
		 this->textBox8->Name = L"textBox8";
		 this->textBox8->Size = System::Drawing::Size(245, 20);
		 this->textBox8->TabIndex = 16;
		 // 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(80, 295);
		 this->textBox9->MaxLength = 8;
		 this->textBox9->Name = L"textBox9";
		 this->textBox9->Size = System::Drawing::Size(245, 20);
		 this->textBox9->TabIndex = 17;
		 // 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(80, 277);
		 this->textBox10->MaxLength = 3;
		 this->textBox10->Name = L"textBox10";
		 this->textBox10->Size = System::Drawing::Size(245, 20);
		 this->textBox10->TabIndex = 18;
		 this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Usuario::textBox10_KeyPress);
		 // 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(80, 257);
		 this->textBox11->Name = L"textBox11";
		 this->textBox11->Size = System::Drawing::Size(245, 20);
		 this->textBox11->TabIndex = 19;
		 // 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(80, 237);
		 this->textBox12->Name = L"textBox12";
		 this->textBox12->Size = System::Drawing::Size(245, 20);
		 this->textBox12->TabIndex = 20;
		 // 
			// label9
			// 
			this->label9->AutoSize = true;
		 this->label9->Location = System::Drawing::Point(35, 225);
		 this->label9->Name = L"label9";
		 this->label9->Size = System::Drawing::Size(44, 13);
		 this->label9->TabIndex = 21;
		 this->label9->Text = L"Nombre";
		 // 
			// label10
			// 
			this->label10->AutoSize = true;
		 this->label10->Location = System::Drawing::Point(41, 264);
		 this->label10->Name = L"label10";
		 this->label10->Size = System::Drawing::Size(38, 13);
		 this->label10->TabIndex = 22;
		 this->label10->Text = L"Correo";
		 // 
			// label11
			// 
			this->label11->AutoSize = true;
		 this->label11->Location = System::Drawing::Point(37, 244);
		 this->label11->Name = L"label11";
		 this->label11->Size = System::Drawing::Size(43, 13);
		 this->label11->TabIndex = 23;
		 this->label11->Text = L"Usuario";
		 // 
			// label12
			// 
			this->label12->AutoSize = true;
		 this->label12->Location = System::Drawing::Point(46, 284);
		 this->label12->Name = L"label12";
		 this->label12->Size = System::Drawing::Size(32, 13);
		 this->label12->TabIndex = 24;
		 this->label12->Text = L"Edad";
		 // 
			// label13
			// 
			this->label13->AutoSize = true;
		 this->label13->Location = System::Drawing::Point(36, 201);
		 this->label13->Name = L"label13";
		 this->label13->Size = System::Drawing::Size(40, 13);
		 this->label13->TabIndex = 25;
		 this->label13->Text = L"Cédula";
		 // 
			// label14
			// 
			this->label14->AutoSize = true;
		 this->label14->Location = System::Drawing::Point(16, 302);
		 this->label14->Name = L"label14";
		 this->label14->Size = System::Drawing::Size(61, 13);
		 this->label14->TabIndex = 26;
		 this->label14->Text = L"Contraseña";
		 // 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
		 this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		 this->button2->Location = System::Drawing::Point(380, 218);
		 this->button2->Name = L"button2";
		 this->button2->Size = System::Drawing::Size(40, 35);
		 this->button2->TabIndex = 27;
		 this->button2->UseVisualStyleBackColor = true;
		 this->button2->Click += gcnew System::EventHandler(this, &Usuario::button2_Click);
		 // 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
		 this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		 this->button3->Location = System::Drawing::Point(380, 268);
		 this->button3->Name = L"button3";
		 this->button3->Size = System::Drawing::Size(40, 38);
		 this->button3->TabIndex = 28;
		 this->button3->UseVisualStyleBackColor = true;
		 this->button3->Click += gcnew System::EventHandler(this, &Usuario::button3_Click);
		 // 
			// Usuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		 this->ClientSize = System::Drawing::Size(504, 360);
		 this->Controls->Add(this->button3);
		 this->Controls->Add(this->button2);
		 this->Controls->Add(this->label14);
		 this->Controls->Add(this->label13);
		 this->Controls->Add(this->label12);
		 this->Controls->Add(this->label11);
		 this->Controls->Add(this->label10);
		 this->Controls->Add(this->label9);
		 this->Controls->Add(this->textBox12);
		 this->Controls->Add(this->textBox11);
		 this->Controls->Add(this->textBox10);
		 this->Controls->Add(this->textBox9);
		 this->Controls->Add(this->textBox8);
		 this->Controls->Add(this->comboBoxBuscarCedula);
		 this->Controls->Add(this->label8);
		 this->Controls->Add(this->button1);
		 this->Controls->Add(this->textBox6);
		 this->Controls->Add(this->textBox5);
		 this->Controls->Add(this->textBox4);
		 this->Controls->Add(this->textBox3);
		 this->Controls->Add(this->textBox2);
		 this->Controls->Add(this->textBox1);
		 this->Controls->Add(this->label7);
		 this->Controls->Add(this->label6);
		 this->Controls->Add(this->label5);
		 this->Controls->Add(this->label4);
		 this->Controls->Add(this->label3);
		 this->Controls->Add(this->label2);
		 this->Controls->Add(this->label1);
		 this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		 this->Name = L"Usuario";
		 this->Text = L"Usuario";
		 this->ResumeLayout(false);
		 this->PerformLayout();

		}
#pragma endregion

		// Helpers
		bool ValidateCedula(String^ ced, bool showMsg) {
			if (String::IsNullOrWhiteSpace(ced)) { if (showMsg) MessageBox::Show("La cédula no puede estar vacía.", "Error"); return false; }
			if (ced->Length > 10) { if (showMsg) MessageBox::Show("La cédula no puede tener más de 10 dígitos.", "Error"); return false; }
			for each (wchar_t ch in ced->ToCharArray()) { if (!Char::IsDigit(ch)) { if (showMsg) MessageBox::Show("La cédula solo puede contener números.", "Error"); return false; } }
			return true;
		}

		bool ValidateEmail(String^ email, bool showMsg) {
			if (String::IsNullOrWhiteSpace(email)) { if (showMsg) MessageBox::Show("El correo no puede estar vacío.", "Error"); return false; }
			// permitir solo dominios @gmail.com o dominio.edu.ec/.est.ec
			String^ pattern = "^[A-Za-z0-9._%+-]+@(?:gmail\\.com|[A-Za-z0-9.-]+\\.(?:edu|est)\\.ec)$";
			Regex^ rx = gcnew Regex(pattern, RegexOptions::IgnoreCase);
			if (!rx->IsMatch(email)) { if (showMsg) MessageBox::Show("El correo debe terminar en @gmail.com o @dominio.edu.ec/.est.ec", "Error"); return false; }
			return true;
		}

		bool ValidatePassword(String^ pass, bool showMsg) {
			if (String::IsNullOrEmpty(pass)) { if (showMsg) MessageBox::Show("La contraseña no puede estar vacía.", "Error"); return false; }
			if (pass->Length > 12) { if (showMsg) MessageBox::Show("La contraseña no puede tener más de 12 caracteres.", "Error"); return false; }
			return true;
		}

		bool ValidateEdad(String^ edadStr, int% edadOut, bool showMsg) {
			edadOut = -1;
			if (!Int32::TryParse(edadStr, edadOut)) { if (showMsg) MessageBox::Show("La edad debe ser un número.", "Error"); return false; }
			if (edadOut < 5 || edadOut > 100) { if (showMsg) MessageBox::Show("La edad debe estar entre 5 y 100.", "Error"); return false; }
			return true;
		}

		AppZoo2::UserManager::UserRecord^ FindByCedula(String^ ced) {
			return AppZoo2::UserManager::FindByCedula(ced);
		}

		void PopulateCedulaSuggestions() {
			this->comboBoxBuscarCedula->Items->Clear();
			array<String^>^ ceds = AppZoo2::UserManager::GetAllCedulas();
			for each (String^ s in ceds) this->comboBoxBuscarCedula->Items->Add(s);
		}

		// Eventos y lógica
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}

	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar)) e->Handled = true;
	}
	private: System::Void comboBoxBuscarCedula_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar)) e->Handled = true;
	}
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar)) e->Handled = true;
	}
	private: System::Void textBox10_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar)) e->Handled = true;
	}

		// Agregar usuario
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = textBox1->Text->Trim();
		String^ correo = textBox2->Text->Trim();
		String^ cedula = textBox3->Text->Trim();
		String^ usuarioName = textBox4->Text->Trim();
		String^ edadStr = textBox5->Text->Trim();
		String^ contrasena = textBox6->Text;

		if (String::IsNullOrWhiteSpace(nombre)) { MessageBox::Show("Ingrese el nombre.", "Error"); return; }
		if (!ValidateEmail(correo, true)) return;
		if (!ValidateCedula(cedula, true)) return;
		if (AppZoo2::UserManager::FindByCedula(cedula) != nullptr) { MessageBox::Show("Ya existe un usuario con esa cédula.", "Error"); return; }
		int edad;
		if (!ValidateEdad(edadStr, edad, true)) return;
		if (String::IsNullOrWhiteSpace(usuarioName)) { MessageBox::Show("Ingrese el nombre de usuario.", "Error"); return; }
		if (!ValidatePassword(contrasena, true)) return;

		AppZoo2::UserManager::Add(nombre, correo, cedula, usuarioName, contrasena, edad);
		MessageBox::Show("Usuario agregado correctamente.", "OK");
		// actualizar sugerencias y mostrar el nuevo usuario en la parte de búsqueda
		PopulateCedulaSuggestions();
		int idx = this->comboBoxBuscarCedula->FindStringExact(cedula);
		if (idx != -1) {
			this->comboBoxBuscarCedula->SelectedIndex = idx;
		} else {
			this->comboBoxBuscarCedula->Text = cedula;
		}
		// Llenar los campos inferiores con los datos recién añadidos
		AppZoo2::UserManager::UserRecord^ added = AppZoo2::UserManager::FindByCedula(cedula);
		if (added != nullptr) {
			textBox8->Text = added->Nombre;
			textBox12->Text = added->UsuarioName;
			textBox11->Text = added->Correo;
			textBox10->Text = added->Edad.ToString();
			textBox9->Text = added->Contrasena;
		}
		// limpiar campos del formulario de agregar
		textBox1->Clear(); textBox2->Clear(); textBox3->Clear(); textBox4->Clear(); textBox5->Clear(); textBox6->Clear();
	}

		// Editar usuario (a partir de cedula en comboBoxBuscarCedula)
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cedBus = comboBoxBuscarCedula->Text->Trim();
		if (!ValidateCedula(cedBus, true)) return;
		AppZoo2::UserManager::UserRecord^ found = AppZoo2::UserManager::FindByCedula(cedBus);
		if (found == nullptr) { MessageBox::Show("Usuario no encontrado.", "Info"); return; }
		// tomar valores de campos de resultado y validar
		String^ nombre = textBox8->Text->Trim();
		String^ usuarioName = textBox12->Text->Trim();
		String^ correo = textBox11->Text->Trim();
		String^ edadStr = textBox10->Text->Trim();
		String^ contrasena = textBox9->Text;
		if (String::IsNullOrWhiteSpace(nombre)) { MessageBox::Show("Ingrese el nombre.", "Error"); return; }
		int edad;
		if (!ValidateEdad(edadStr, edad, true)) return;
		if (!ValidateEmail(correo, true)) return;
		if (!ValidatePassword(contrasena, true)) return;
		if (String::IsNullOrWhiteSpace(usuarioName)) { MessageBox::Show("Ingrese el nombre de usuario.", "Error"); return; }

		AppZoo2::UserManager::UserRecord^ rec = gcnew AppZoo2::UserManager::UserRecord(nombre, correo, cedBus, usuarioName, contrasena, edad);
		AppZoo2::UserManager::Update(rec);
		MessageBox::Show("Usuario editado correctamente.", "OK");
		PopulateCedulaSuggestions();
	}

		// Eliminar usuario
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cedBus = comboBoxBuscarCedula->Text->Trim();
		if (!ValidateCedula(cedBus, true)) return;
		AppZoo2::UserManager::UserRecord^ found = AppZoo2::UserManager::FindByCedula(cedBus);
		if (found == nullptr) { MessageBox::Show("Usuario no encontrado.", "Info"); return; }
		// evitar eliminar admin
		if (found->UsuarioName->Equals("admin")) { MessageBox::Show("No se puede eliminar el usuario administrador.", "Error"); return; }
		AppZoo2::UserManager::RemoveByCedula(cedBus);
		MessageBox::Show("Usuario eliminado.", "OK");
		// limpiar campos resultado
		comboBoxBuscarCedula->Text = ""; textBox8->Clear(); textBox12->Clear(); textBox11->Clear(); textBox10->Clear(); textBox9->Clear();
		PopulateCedulaSuggestions();
	}

		// Cuando cambia texto en el combo de búsqueda
	private: System::Void comboBoxBuscarCedula_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ cedBus = comboBoxBuscarCedula->Text->Trim();
		if (cedBus->Length == 0) return;
		if (!ValidateCedula(cedBus, false)) return;
		AppZoo2::UserManager::UserRecord^ found = AppZoo2::UserManager::FindByCedula(cedBus);
		if (found != nullptr) {
			textBox8->Text = found->Nombre;
			textBox12->Text = found->UsuarioName;
			textBox11->Text = found->Correo;
			textBox10->Text = found->Edad.ToString();
			textBox9->Text = found->Contrasena;
		} else {
			textBox8->Clear(); textBox12->Clear(); textBox11->Clear(); textBox10->Clear(); textBox9->Clear();
		}
	}

	};
}
