#include "Usuario.h"

Usuario::Usuario(long ID, string nombre, string apellido, string nick, int edad, string descripcion,
	string ciudad, string pais, string cumplea�os, vector<Publicacion*> publicaciones, vector<Usuario*> seguidores, vector<Usuario*> seguidos)
{
	this->ID = ID;
	this->nombre = nombre;
	this->apellido = apellido;
	this->nick = nick;
	this->edad = edad;
	this->descripcion = descripcion;
	this->ciudad = ciudad;
	this->pais = pais;
	this->cumplea�os = cumplea�os;
	this->publicaciones = publicaciones;
	this->seguidores = seguidores;
	this->seguidos = seguidos;
}

void Usuario::seguirUsuario(Usuario* usuario)
{
	seguidos.push_back(usuario);
}

void Usuario::agregarSeguidor(Usuario* usuario)
{
	seguidores.push_back(usuario);
}

void Usuario::setDatosPerfil(string newNombre, string newApellido, string newNick, int newEdad,
	string newEstado, string newCiudad, string newPais, string newCumplea�os)
{
	this->nombre = newNombre;
	this->apellido = newApellido;
	this->nick = newNick;
	this->edad = newEdad;
	this->descripcion = newEstado;
	this->ciudad = newCiudad;
	this->pais = newPais;
	this->cumplea�os = newCumplea�os;
}

long Usuario::getID()
{
	return ID;
}

string Usuario::getNombre()
{
	return nombre;
}

string Usuario::getApellido()
{
	return apellido;
}

string Usuario::getNick()
{
	return nick;
}

int Usuario::getEdad()
{
	return edad;
}

string Usuario::getDescripcion()
{
	return descripcion;
}

string Usuario::getCiudad()
{
	return ciudad;
}

string Usuario::getPais()
{
	return pais;
}

string Usuario::getCumplea�os()
{
	return cumplea�os;
}

vector<Publicacion*> Usuario::getPublicaciones()
{
	return publicaciones;
}

vector<Usuario*> Usuario::getSeguidores()
{
	return seguidores;
}

vector<Usuario*> Usuario::getSeguidos()
{
	return seguidos;
}
