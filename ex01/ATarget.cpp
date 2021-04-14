#include "ATarget.hpp"

ATarget::ATarget(std::string const &type) : _type(type)
{
}

ATarget::~ATarget()
{
}

std::string const &ATarget::getType() const
{
	return (_type);
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
