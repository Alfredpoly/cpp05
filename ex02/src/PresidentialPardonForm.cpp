#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: _target(0), Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm has been constructed" << std::endl;
}
 
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& rhs)
{
	*this = rhs;
}
 
PresidentialPardonForm::PresidentialPardonForm(std::string newTarget) 
	: _target(newTarget)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm has been destroyed" << std::endl;
}	

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& rhs )
{
	return *this;
}

// Getters 
std::string PresidentialPardonForm::getTarget() { return _target; }
 
// Setters 
void PresidentialPardonForm::setTarget(std::string newTarget) { _target = newTarget; }
 
// Output
void PresidentialPardonForm::output()
{
  std::cout << "target : " << _target << std::endl; 
}
 
