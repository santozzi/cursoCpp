#pragma once
#include "Persona.h"
class Profesional : public Persona {
protected:
	float sueldo;
    
public:
	Profesional();
	~Profesional();

	void setSueldo(float sueldo);
	virtual float getSueldo();
};