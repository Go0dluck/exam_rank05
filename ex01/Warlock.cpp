#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title)
{
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->getName() << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const
{
	return (_name);
}

std::string const &Warlock::getTitle() const
{
	return (_title);
}

void Warlock::setTitle(std::string const &title)
{
	_title = title;
}

void Warlock::introduce() const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
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

void Warlock::forgetSpell(std::string spell)
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

void Warlock::launchSpell(std::string spell, ATarget const &target)
{
	std::vector<ASpell *>::iterator itr = _spl.begin();
	std::vector<ASpell *>::iterator ite = _spl.end();
	while (itr != ite)
	{
		if ((*itr)->getName() == spell)
		{
			(*itr)->getFuncTarget(target);
			return ;
		}
		itr++;
	}
}
