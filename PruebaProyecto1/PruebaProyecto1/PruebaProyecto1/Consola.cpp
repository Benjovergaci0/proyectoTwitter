#include "Consola.h"

int Consola::mostrarMenu()
{
	cout << "\n--- MENU DE OPCIONES ---" << endl;
	cout << "1.  Crear un usuario" << endl;
	cout << "2.  Borrar un usuario" << endl;
	cout << "3.  Hacer una publicacion" << endl;
	cout << "4.  Borrar una publicacion" << endl;
	cout << "5.  Comentar" << endl;
	cout << "6.  Borrar comentario" << endl;
	cout << "7.  Seguir a alguien" << endl;
	cout << "8.  Dejar de seguir a alguien" << endl;
	cout << "9.  Editar datos del perfil" << endl;
	cout << "10. Ver seguidoreso" << endl;
	cout << "11. Buscar usuarios" << endl;
	cout << "12. Mostrar comentarios" << endl;
	cout << "0. SALIR" << endl;
	int opcion;
	cout << "OPCION: "; cin >> opcion;
	return opcion;
}

Usuario* Consola::crearUsuario()
{
	long ID;
	string nombre;
	string apellido;
	string nick;
	int edad;
	string descripcion;
	string ciudad;
	string pais;
	string cumpleaños;
	vector<Publicacion*> publicaciones = {};
	vector<Usuario*> seguidores = {};
	vector<Usuario*> seguidos = {};
	string respuesta;
	cout << "ID: "; cin >> ID;
	cout << "Nombre: "; cin >> nombre;
	cout << "Apellido: "; cin >> apellido;
	cout << "Nick: "; cin >> nick;
	cout << "Edad: "; cin >> edad;
	cout << "Desea escribir una descripcion al perfil? S/N : "; cin >> respuesta;
	if (respuesta == "S" or respuesta == "s") {
		cin >> descripcion;
	}
	else
	{
		descripcion = " ";
	}
	cout << "Ciudad: "; cin >> ciudad;
	cout << "Pais: "; cin >> pais;
	cout << "Cumpleaños: "; cin >> cumpleaños;
	Usuario* usuarioNuevo = new Usuario(ID, nombre, apellido, nick, edad, descripcion, ciudad, pais,
		cumpleaños, publicaciones, seguidores, seguidos);
	return usuarioNuevo;
}

Usuario* Consola::borrarUsuario()
{
	long ID;
	cout << "Ingrese el id del usuario que desea borrar: " << endl;
	cin >> ID;

	bool usuarioEncontrado = false;
	for (auto i = usuarios.begin(); i != usuarios.end();i++) {
		if ((*i)->ID == ID) {
			delete* i;
			usuarios.erase(i);
			cout << "Usuario eliminado correctamente " << endl;
			usuarioEncontrado = true;
			break;
		}
	}

	if (!usuarioEncontrado) {
		cout << "No se encontro ningun usuario con ese ID" << endl;
	}

	return nullptr;
}

Publicacion* Consola::hacerPublicacion()
{
	return nullptr;
}

