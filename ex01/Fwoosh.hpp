#pragma once
#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
private:

public:
	Fwoosh();
	virtual ASpell *clone();
	virtual ~Fwoosh();
};


