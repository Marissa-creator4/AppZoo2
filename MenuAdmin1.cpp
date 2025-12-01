#include "MenuAdmin1.h"
#include "Usuario.h"

using namespace AppZoo2;

System::Void MenuAdmin1::administrarUsuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AppZoo2::Usuario^ ver = gcnew AppZoo2::Usuario();
	ver->Show();
}

