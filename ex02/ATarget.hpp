#pragma once
#include <string>
#include <iostream>
//#include "ASpell.hpp"
class ASpell;

class ATarget
{
protected:
	std::string _type;
	ATarget();
public:
	ATarget(std::string const &type);
	std::string const &getType() const;
	virtual ATarget *clone() = 0;
	void getHitBySpell(const ASpell &spell) const;
	virtual ~ATarget();
};
#include "ASpell.hpp"
