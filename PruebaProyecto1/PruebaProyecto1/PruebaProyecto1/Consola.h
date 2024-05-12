#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;
class Consola
{
public:
	int mostrarMenu();
	Usuario* crearUsuario();
	vector<Usuario*> usuarios;
	Usuario* borrarUsuario();
	Publicacion* hacerPublicacion();

};

