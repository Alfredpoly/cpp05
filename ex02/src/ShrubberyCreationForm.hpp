#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include <iostream>
#include <string>
#include "Form.hpp"
 
// Class definition 
class ShrubberyCreationForm : public Form
{
private: 
	std::string _target;
 
public: 
// Constructor 
	ShrubberyCreationForm(); 
	ShrubberyCreationForm( const ShrubberyCreationForm &rhs); 
	ShrubberyCreationForm(std::string newTarget);
	~ShrubberyCreationForm(); 
	ShrubberyCreationForm& operator=( const ShrubberyCreationForm &rhs); 
// Getters 
	std::string getTarget(); 
// Setters 
	void setTarget(std::string _target); 
// Output 
	void output(); 
}; 
 
#endif
