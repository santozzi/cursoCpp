#pragma once
#include <iostream>
#include <string>
using namespace std;
class Persona {
protected:
	string nombre;
	string apellido;
	string email;
	


public:
	Persona();
	~Persona();

	void setNombre(string nombre);
	void setApellido(string apellido);
   
	void setEmail(string email);
	string getNombre();
	string getApellido();
	string getEmail();
	string toString();

};