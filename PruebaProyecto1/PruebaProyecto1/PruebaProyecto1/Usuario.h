#pragma once
#include "Publicacion.h";
#include <vector>
using namespace std;
class Usuario
{
public:
	long ID;
	string nombre;
	string apellido;
	string nick;
	int edad;
	string descripcion;
	string ciudad;
	string  pais;
	string cumpleaños;
	vector<Publicacion*> publicaciones;
	vector<Usuario*> seguidores;
	vector<Usuario*> seguidos;

	Usuario(long ID, string nombre, string apellido, string nick, int edad, string descripcion,
		string ciudad, string  pais, string cumpleaños, vector<Publicacion*> publicaciones, vector<Usuario*> seguidores,
		vector<Usuario*> seguidos);
	void seguirUsuario(Usuario* usuario);
	void agregarSeguidor(Usuario* usuario);
	void setDatosPerfil(string newNombre, string newApellido, string newNick, int newEdad,
		string newEstado, string newCiudad, string newPais, string newCumpleaños);
	//Por si acaso el magister pide
	long getID();
	string getNombre();
	string getApellido();
	string getNick();
	int getEdad();
	string getDescripcion();
	string getCiudad();
	string  getPais();
	string getCumpleaños();
	vector<Publicacion*> getPublicaciones();
	vector<Usuario*> getSeguidores();
	vector<Usuario*> getSeguidos();
};


