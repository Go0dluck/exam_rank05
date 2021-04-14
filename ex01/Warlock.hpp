#pragma once
#include <string>
#include <iostream>
#include <vector>

class ASpell;
class ATarget;
class Warlock
{
private:
	std::string _name;
	std::string _title;
	Warlock(const Warlock &cpy);
	Warlock &operator=(const Warlock &oper);
	Warlock();
	std::vector<ASpell *> _spl;
public:
	Warlock(std::string const &name, std::string const &title);
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &title);
	void introduce() const;
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spell);
	void launchSpell(std::string spell, ATarget const &target);
	~Warlock();
};
#include "ASpell.hpp"
#include "ATarget.hpp"
