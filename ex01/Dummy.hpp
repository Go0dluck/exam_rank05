#pragma once
#include <string>
#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget
{
private:

public:
	Dummy();
	virtual ATarget *clone();
	~Dummy();
};
