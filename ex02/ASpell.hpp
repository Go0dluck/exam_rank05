#pragma once
#include <string>
#include <iostream>
//#include "ATarget.hpp"
class ATarget;

class ASpell
{
private:
	ASpell();
protected:
	std::string _name;
	std::string _effects;
public:
	ASpell(std::string const &name, std::string const &effects);
	virtual ~ASpell();
	std::string const &getName() const;
	std::string const &getEffects() const;
	void getFuncTarget(const ATarget &target) const;
	virtual ASpell *clone() = 0;
};
#include "ATarget.hpp"
