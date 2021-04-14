#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
}

void SpellBook::learnSpell(ASpell *spell)
{
	std::vector<ASpell *>::iterator itr = _spl.begin();
	std::vector<ASpell *>::iterator ite = _spl.end();
	while (itr != ite)
	{
		if ((*itr)->getName() == spell->getName())
			return ;
		itr++;
	}
	_spl.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string const &spell)
{
	std::vector<ASpell *>::iterator itr = _spl.begin();
	std::vector<ASpell *>::iterator ite = _spl.end();
	while (itr != ite)
	{
		if ((*itr)->getName() == spell)
		{
			delete *itr;
			_spl.erase(itr);
			return ;
		}
		itr++;
	}
}

ASpell* SpellBook::createSpell(std::string const &spell)
{
	std::vector<ASpell *>::iterator itr = _spl.begin();
	std::vector<ASpell *>::iterator ite = _spl.end();
	while (itr != ite)
	{
		if ((*itr)->getName() == spell)
		{
			return *itr;
		}
		itr++;
	}
	return (NULL);
}
