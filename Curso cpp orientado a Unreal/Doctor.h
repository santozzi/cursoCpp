#pragma once
#include "Profesional.h"
class Doctor : public Profesional{
public:
	virtual float getSueldo() override {
		return sueldo + 500;

	}

};
