#pragma once
#include <string>
#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
private:

public:
	Polymorph();
	virtual ASpell *clone();
	virtual ~Polymorph();
};

