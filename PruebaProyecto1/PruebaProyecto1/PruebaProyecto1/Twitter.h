#pragma once
#include "Usuario.h"
#include "Consola.h"

class Twitter
{
private:
	vector<Usuario*> usuarios;
	Consola* consola = new Consola;
	void crearUnUsuario();
	void borrarUnUsuario();
	void hacerUnaPublicacion();
	void borrarUnaPublicacion();
	void comentar();
	void borrarComentario();
	void seguirUnUsuario();
	void dejarDeSeguirUsuarios();
	void editarPerfil();
	void verSeguidores();
	void buscarUsuarios();
	void mostrarComentarios();
public:
	void iniciarPrograma();
	Twitter();
	~Twitter();
};


