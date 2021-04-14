#pragma once
#include <string>
#include <iostream>
#include <vector>

class ASpell;
class SpellBook
{
private:

	SpellBook(const SpellBook &cpy);
	SpellBook &operator=(const SpellBook &oper);
	std::vector<ASpell *> _spl;
public:
	SpellBook();
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spell);
	ASpell* createSpell(std::string const &spell);
	~SpellBook();
};
#include "ASpell.hpp"
