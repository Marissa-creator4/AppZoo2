#pragma once
// Removed heavy includes to avoid duplicate metadata
// forward declarations for other forms used by menu
namespace AppZoo2 {
	ref class Actividades;
	ref class boleto;
	ref class Usuario;
	ref class Horario;
	ref class Aves;
	ref class Mamiferos;
	ref class Reptiles;
}

namespace AppZoo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menu
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(void)
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
		~menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ informaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ animalesToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ horariosToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ reservaTsuEntradasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ actividadesToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ avesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mamíferosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reptilesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesiónToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menu::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->informaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->animalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->avesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mamíferosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reptilesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->horariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actividadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reservaTsuEntradasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->informaciónToolStripMenuItem,
					this->reservaTsuEntradasToolStripMenuItem, this->cerrarSesiónToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(799, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// informaciónToolStripMenuItem
			// 
			this->informaciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->animalesToolStripMenuItem,
					this->horariosToolStripMenuItem, this->actividadesToolStripMenuItem
			});
			this->informaciónToolStripMenuItem->Name = L"informaciónToolStripMenuItem";
			this->informaciónToolStripMenuItem->Size = System::Drawing::Size(84, 20);
			this->informaciónToolStripMenuItem->Text = L"Información";
			this->informaciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::informaciónToolStripMenuItem_Click);
			// 
			// animalesToolStripMenuItem
			// 
			this->animalesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->avesToolStripMenuItem,
					this->mamíferosToolStripMenuItem, this->reptilesToolStripMenuItem
			});
			this->animalesToolStripMenuItem->Name = L"animalesToolStripMenuItem";
			this->animalesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->animalesToolStripMenuItem->Text = L"Animales";
			// 
			// avesToolStripMenuItem
			// 
			this->avesToolStripMenuItem->Name = L"avesToolStripMenuItem";
			this->avesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->avesToolStripMenuItem->Text = L"Aves";
			this->avesToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::avesToolStripMenuItem_Click);
			// 
			// mamíferosToolStripMenuItem
			// 
			this->mamíferosToolStripMenuItem->Name = L"mamíferosToolStripMenuItem";
			this->mamíferosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->mamíferosToolStripMenuItem->Text = L"Mamíferos";
			this->mamíferosToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::mamíferosToolStripMenuItem_Click);
			// 
			// reptilesToolStripMenuItem
			// 
			this->reptilesToolStripMenuItem->Name = L"reptilesToolStripMenuItem";
			this->reptilesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->reptilesToolStripMenuItem->Text = L"Reptiles";
			this->reptilesToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::reptilesToolStripMenuItem_Click);
			// 
			// horariosToolStripMenuItem
			// 
			this->horariosToolStripMenuItem->Name = L"horariosToolStripMenuItem";
			this->horariosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->horariosToolStripMenuItem->Text = L"Horarios";
			this->horariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::horariosToolStripMenuItem_Click);
			// 
			// actividadesToolStripMenuItem
			// 
			this->actividadesToolStripMenuItem->Name = L"actividadesToolStripMenuItem";
			this->actividadesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->actividadesToolStripMenuItem->Text = L"Actividades";
			this->actividadesToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::actividadesToolStripMenuItem_Click);
			// 
			// reservaTsuEntradasToolStripMenuItem
			// 
			this->reservaTsuEntradasToolStripMenuItem->Name = L"reservaTsuEntradasToolStripMenuItem";
			this->reservaTsuEntradasToolStripMenuItem->Size = System::Drawing::Size(120, 20);
			this->reservaTsuEntradasToolStripMenuItem->Text = L"Reserva tus boletos";
			this->reservaTsuEntradasToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::reservaTsuEntradasToolStripMenuItem_Click);
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(88, 20);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar Sesión";
			this->cerrarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &menu::cerrarSesiónToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(165, 176);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(474, 138);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(799, 528);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"menu";
			this->ShowInTaskbar = false;
			this->Text = L"menu";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// handler declarations (definitions moved to menu.cpp)
	private: System::Void informaciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void actividadesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void reservaTsuEntradasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e);
	private: System::Void horariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void avesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void mamíferosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void reptilesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void cerrarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
