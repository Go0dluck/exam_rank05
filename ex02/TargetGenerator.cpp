#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
	std::vector<ATarget *>::iterator itr = _tar.begin();
	std::vector<ATarget *>::iterator ite = _tar.end();
	while (itr != ite)
	{
		delete *itr;
		itr++;
	}
	_tar.clear();
}

void TargetGenerator::forgetTargetType(std::string const &target)
{
	std::vector<ATarget *>::iterator itr = _tar.begin();
	std::vector<ATarget *>::iterator ite = _tar.end();
	while (itr != ite)
	{
		if ((*itr)->getType() == target)
		{
			delete *itr;
			_tar.erase(itr);
			return ;
		}
		itr++;
	}
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	std::vector<ATarget *>::iterator itr = _tar.begin();
	std::vector<ATarget *>::iterator ite = _tar.end();
	while (itr != ite)
	{
		if ((*itr)->getType() == target->getType())
			return ;
		itr++;
	}
	_tar.push_back(target->clone());
}

ATarget* TargetGenerator::createTarget(std::string const &target)
{
	std::vector<ATarget *>::iterator itr = _tar.begin();
	std::vector<ATarget *>::iterator ite = _tar.end();
	while (itr != ite)
	{
		if ((*itr)->getType() == target)
			return *itr;
		itr++;
	}
	return (NULL);
}
