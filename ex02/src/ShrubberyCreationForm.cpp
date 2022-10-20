#include "ShrubberyCreationForm.hpp"
// Constructor initializes attributes to 0 by default 
ShrubberyCreationForm::ShrubberyCreationForm()
	: _target(0), Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm has been constructed" << std::endl;
	
}
 
ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& rhs)
{
	*this = rhs;
}
 
ShrubberyCreationForm::ShrubberyCreationForm(std::string newTarget) 
	: _target(newTarget)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm has been destroyed" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& rhs )
{
	return *this;
}

// Getters 
std::string ShrubberyCreationForm::getTarget() { return _target; }
 
// Setters 
void ShrubberyCreationForm::setTarget(std::string newTarget) { _target = newTarget; }
 
// Output
void ShrubberyCreationForm::output()
{
  std::cout << "target : " << _target << std::endl; 
}
 
