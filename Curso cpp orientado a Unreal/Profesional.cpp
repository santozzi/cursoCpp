#pragma once
#include "Persona.h"
#include "Profesional.h"


	Profesional::Profesional() {
		this->sueldo = 500;
	}
	Profesional::~Profesional() {}

	void Profesional::setSueldo(float sueldo) {
		this->sueldo = sueldo;
	}
	float Profesional::getSueldo() {
		return sueldo;
	}
