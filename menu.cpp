#include "pch.h"
#include "menu.h"
#include "Actividades.h"
#include "boleto.h"
#include "Usuario.h"
#include "Horario.h"
#include "Aves.h"
#include "Mamiferos.h"
#include "Reptiles.h"
#include "Login.h"

using namespace AppZoo2;

System::Void AppZoo2::menu::informaciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {}

System::Void AppZoo2::menu::actividadesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    AppZoo2::Actividades^ ver = gcnew AppZoo2::Actividades();
    ver->Show();
}

System::Void AppZoo2::menu::reservaTsuEntradasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    AppZoo2::boleto^ ver = gcnew AppZoo2::boleto();
    ver->Show();
}

System::Void AppZoo2::menu::toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {}

System::Void AppZoo2::menu::horariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    AppZoo2::Horario^ ver = gcnew AppZoo2::Horario();
    ver->Show();
}

System::Void AppZoo2::menu::avesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    AppZoo2::Aves^ ver = gcnew AppZoo2::Aves();
    ver->Show();
}

System::Void AppZoo2::menu::mamíferosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    AppZoo2::Mamiferos^ ver = gcnew AppZoo2::Mamiferos();
    ver->Show();
}

System::Void AppZoo2::menu::reptilesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    AppZoo2::Reptiles^ ver = gcnew AppZoo2::Reptiles();
    ver->Show();
}

System::Void AppZoo2::menu::cerrarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    auto res = MessageBox::Show("¿Seguro que quiere cerrar sesión?", "Confirmar", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
    if (res == System::Windows::Forms::DialogResult::Yes) {
        AppZoo2::Login^ l = gcnew AppZoo2::Login();
        l->Show();
        this->Close();
    } else {
        // do nothing, stay on menu
    }
}

