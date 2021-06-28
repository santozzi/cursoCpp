#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

	Persona::Persona() {}
	Persona::~Persona() {}

	void Persona::setNombre(string nombre) {
		this->nombre = nombre;

	}
	void Persona::setApellido(string apellido) {
		this->apellido = apellido;
	}

	void Persona::setEmail(string email) {
		this->email = email;
	}
	string Persona::getNombre() {
		return nombre;
	}
	string Persona::getApellido() {
		return apellido;
	}
	string Persona::getEmail() {
		return email;
	}
	string Persona::toString() {
		return nombre + " " + apellido + " " + email;
	}

