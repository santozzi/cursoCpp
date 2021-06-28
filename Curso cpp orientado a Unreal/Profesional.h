#pragma once
#include "Persona.h"
class Profesional : public Persona {
protected:
	float sueldo;
    
public:
	Profesional() {
		this->sueldo = 500;
	}
	~Profesional() {}

	void setSueldo(float sueldo) {
		this->sueldo = sueldo;
	}
	float getSueldo() {
		return sueldo;
	}
};