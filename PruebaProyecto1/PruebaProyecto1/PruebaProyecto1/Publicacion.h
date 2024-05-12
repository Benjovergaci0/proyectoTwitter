#pragma once
#include <string>
#include <vector>
#include "Usuario.h"
using namespace std;
class Publicacion
{
public:
	int id;
	//Usuario* autor;

	string contenidoTexto;
	Publicacion(int id, string  contenidoTexto);
};

