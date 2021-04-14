#pragma once
#include <string>
#include <iostream>
#include "ATarget.hpp"
#include <vector>

class TargetGenerator
{
private:
	TargetGenerator(const TargetGenerator &cpy);
	TargetGenerator &operator=(const TargetGenerator &oper);
	std::vector<ATarget *> _tar;
public:
	TargetGenerator();
	~TargetGenerator();
	void learnTargetType(ATarget *target);
	void forgetTargetType(std::string const &target);
	ATarget* createTarget(std::string const &target);
};
