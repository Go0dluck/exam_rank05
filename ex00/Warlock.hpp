#pragma once
#include <string>
#include <iostream>

class Warlock
{
private:
	std::string _name;
	std::string _title;
	Warlock(const Warlock &cpy);
	Warlock &operator=(const Warlock &oper);
	Warlock();
public:
	Warlock(std::string const &name, std::string const &title);
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &title);
	void introduce() const;
	~Warlock();
};

