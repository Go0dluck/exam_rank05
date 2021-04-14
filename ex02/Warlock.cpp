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
	book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell)
{
	book.forgetSpell(spell);
}

void Warlock::launchSpell(std::string spell, ATarget const &target)
{
	ASpell *spl = book.createSpell(spell);
	if (spl != NULL)
		spl->getFuncTarget(target);
}
