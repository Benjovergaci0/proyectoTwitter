#include "Twitter.h"

void Twitter::crearUnUsuario()
{
	Usuario* usuarioNuevo = consola->crearUsuario();
	usuarios.push_back(usuarioNuevo);
}

void Twitter::borrarUnUsuario()
{
	Usuario* borrarUsuario = consola->borrarUsuario();
}

void Twitter::hacerUnaPublicacion()
{
}

void Twitter::borrarUnaPublicacion()
{
}

void Twitter::comentar()
{
}

void Twitter::borrarComentario()
{
}

void Twitter::seguirUnUsuario()
{
}

void Twitter::dejarDeSeguirUsuarios()
{
}

void Twitter::editarPerfil()
{
}

void Twitter::verSeguidores()
{
}

void Twitter::buscarUsuarios()
{
}

void Twitter::mostrarComentarios()
{
}

void Twitter::iniciarPrograma()
{
	int opcion;
	do
	{
		opcion = consola->mostrarMenu();
		switch (opcion)
		{
		case 1:
			crearUnUsuario();
			break;
		case 2:
			borrarUnUsuario();
			break;
		case 3:
			hacerUnaPublicacion();
			break;
		case 4:
			borrarUnaPublicacion();
			break;
		case 5:
			comentar();
			break;
		case 6:
			borrarComentario();
			break;
		case 7:
			seguirUnUsuario();
			break;
		case 8:
			dejarDeSeguirUsuarios();
			break;
		case 9:
			editarPerfil();
			break;
		case 10:
			verSeguidores();
			break;
		case 11:
			buscarUsuarios();;
			break;
		case 12:
			mostrarComentarios();
			break;
		default:
			break;
		}
	} while (opcion != 0);
}

Twitter::Twitter()
{
}

Twitter::~Twitter()
{
	for (int i = 0; i < usuarios.size(); i++) {
		delete usuarios[i];
	}
}
