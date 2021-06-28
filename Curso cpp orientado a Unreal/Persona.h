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
	Persona() {}
	~Persona() {}

	void setNombre(string nombre) {
		this->nombre = nombre;

	}
	void setApellido(string apellido) {
		this->apellido = apellido;
	}
   
	void setEmail(string email) {
		this->email = email;
	}
	string getNombre() {
		return nombre;
	}
	string getApellido() {
		return apellido;
	}
	string getEmail() {
		return email;
	}
	string toString() {
		return nombre + " " + apellido + " " + email;
	}

};