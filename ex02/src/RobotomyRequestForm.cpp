#include "RobotomyRequestForm.hpp"
// Constructor initializes attributes to 0 by default 
RobotomyRequestForm::RobotomyRequestForm()
	: _target(0), Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm has been constructed" << std::endl;

}
 
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& rhs)
{
	*this = rhs;
}
 
RobotomyRequestForm::RobotomyRequestForm(std::string newTarget) 
	: _target(newTarget)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm has been destroyed" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& rhs )
{
	return *this;
}

// Getters 
std::string RobotomyRequestForm::getTarget() { return _target; }
 
// Setters 
void RobotomyRequestForm::setTarget(std::string newTarget) { _target = newTarget; }
 
// Output
void RobotomyRequestForm::output()
{
  std::cout << "target : " << _target << std::endl; 
}
 
