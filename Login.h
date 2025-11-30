#pragma once
#include "menu.h"
#include "UserManager.h"
#include "Usuario.h"
#include "MenuAdmin1.h"
namespace AppZoo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			// Ensure user manager initialized
			AppZoo2::UserManager::EnsureInitialized();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkGreen;
			this->button1->Location = System::Drawing::Point(88, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Iniciar sesión";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::OliveDrab;
			this->label1->Location = System::Drawing::Point(22, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Usuario;";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox1->Location = System::Drawing::Point(26, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 21);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Ingresar Usuario";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Forte", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::OliveDrab;
			this->label3->Location = System::Drawing::Point(22, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Contraseña:";
			this->label3->Click += gcnew System::EventHandler(this, &Login::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox2->Location = System::Drawing::Point(26, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(201, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"*************";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(20, 122);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(0, 13);
			this->linkLabel1->TabIndex = 6;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(266, 132);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(275, 223);
			this->panel1->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(277, 76);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(252, 50);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(799, 528);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->Text = L"Bioparque Taimaken";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ user = this->textBox1->Text->Trim();
	String^ pass = this->textBox2->Text;

	AppZoo2::UserManager::UserRecord^ foundUser = nullptr;
	if (AppZoo2::UserManager::ValidateCredentials(user, pass, foundUser)) {
			if (foundUser != nullptr) {
				MessageBox::Show("¡Inicio de sesión exitoso!", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (foundUser->UsuarioName->Equals("admin")) {
					AppZoo2::MenuAdmin1^ adminForm = gcnew AppZoo2::MenuAdmin1();
					adminForm->Show();
					this->Hide();
					return;
				} else {
					AppZoo2::menu^ m = gcnew AppZoo2::menu();
					m->Show();
					this->Hide();
					return;
				}
			}
				}
	MessageBox::Show("Usuario o contraseña inválidos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
