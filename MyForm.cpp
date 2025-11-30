#include "pch.h"
#include "MyForm.h"
#include "Login.h"
#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    // Show Login form as application entry point
    AppZoo2::Login^ form = gcnew AppZoo2::Login();
    Application::Run(form);
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    array<String^>^ args = Environment::GetCommandLineArgs();
    return main(args);
}