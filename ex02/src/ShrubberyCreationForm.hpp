#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include <iostream>
#include <string>
#include "Form.hpp"


class ShrubberyCreationForm : public Form
{
private: 
	std::string _target;
 
public:
	ShrubberyCreationForm(); 
	ShrubberyCreationForm( const ShrubberyCreationForm &rhs); 
	ShrubberyCreationForm(std::string newTarget);
	~ShrubberyCreationForm(); 
	ShrubberyCreationForm& operator=( const ShrubberyCreationForm &rhs);
	std::string getTarget();
	void setTarget(std::string _target);
}; 
 
#endif
