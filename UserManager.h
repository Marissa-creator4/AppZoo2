#pragma once

// removed include of Usuario.h to avoid circular dependency

namespace AppZoo2 {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::Text::RegularExpressions;

	public ref class UserManager sealed {
	public:
		ref class UserRecord {
		public:
			String^ Nombre;
			String^ Correo;
			String^ Cedula;
			String^ UsuarioName;
			String^ Contrasena;
			int Edad;
			UserRecord(String^ n, String^ c, String^ ced, String^ u, String^ pass, int e) {
				Nombre = n; Correo = c; Cedula = ced; UsuarioName = u; Contrasena = pass; Edad = e;
			}
		};

	private:
		static List<UserRecord^>^ users = nullptr;

	public:
		static void EnsureInitialized() {
			if (users == nullptr) {
				users = gcnew List<UserRecord^>();
				// usuario admin por defecto
				users->Add(gcnew UserRecord("Administrador", "admin@gmail.com", "0000000000", "admin", "admin1234", 21));
				// usuario adicional solicitado
				users->Add(gcnew UserRecord("usuario", "usuario@gmail.com", "1724192832", "usu", "usua1234", 21));
				// nuevo usuario Marissa
				users->Add(gcnew UserRecord("Marissa", "Marissa@gmail.com", "1724192859", "mar", "mar12345", 21));
			}
		}

		static bool Add(String^ nombre, String^ correo, String^ cedula, String^ usuarioName, String^ contrasena, int edad) {
			EnsureInitialized();
			if (FindByCedula(cedula) != nullptr) return false;
			users->Add(gcnew UserRecord(nombre, correo, cedula, usuarioName, contrasena, edad));
			return true;
		}

		static UserRecord^ FindByCedula(String^ cedula) {
			EnsureInitialized();
			for each (UserRecord^ u in users) {
				if (u->Cedula->Equals(cedula)) return u;
			}
			return nullptr;
		}

		static bool RemoveByCedula(String^ cedula) {
			EnsureInitialized();
			UserRecord^ f = FindByCedula(cedula);
			if (f == nullptr) return false;
			if (f->UsuarioName->Equals("admin")) return false;
			users->Remove(f);
			return true;
		}

		static array<String^>^ GetAllCedulas() {
			EnsureInitialized();
			array<String^>^ arr = gcnew array<String^>(users->Count);
			for (int i = 0; i < users->Count; i++) arr[i] = users[i]->Cedula;
			return arr;
		}

		static bool Update(UserRecord^ record) {
			EnsureInitialized();
			UserRecord^ f = FindByCedula(record->Cedula);
			if (f == nullptr) return false;
			f->Nombre = record->Nombre;
			f->Correo = record->Correo;
			f->UsuarioName = record->UsuarioName;
			f->Contrasena = record->Contrasena;
			f->Edad = record->Edad;
			return true;
		}

		static bool ValidateCredentials(String^ usernameOrUsuario, String^ password, UserRecord^% outUser) {
			EnsureInitialized();
			outUser = nullptr;
			for each (UserRecord^ u in users) {
				// accept username, correo, nombre or cedula as login identifier
				if ((u->UsuarioName->Equals(usernameOrUsuario) || u->Correo->Equals(usernameOrUsuario) || u->Nombre->Equals(usernameOrUsuario) || u->Cedula->Equals(usernameOrUsuario)) && u->Contrasena->Equals(password)) {
					outUser = u; return true;
				}
			}
			return false;
		}
	};

}
