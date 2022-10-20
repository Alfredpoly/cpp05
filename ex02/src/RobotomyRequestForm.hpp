#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include <iostream>
#include <string>
 
// Class definition 
class RobotomyRequestForm : public Form
{
private: 
	std::string _target;
 
public: 
// Constructor 
	RobotomyRequestForm(); 
	RobotomyRequestForm( const RobotomyRequestForm &rhs); 
	RobotomyRequestForm(std::string newTarget);
	~RobotomyRequestForm(); 
	RobotomyRequestForm& operator=( const RobotomyRequestForm &rhs); 
// Getters 
	std::string getTarget(); 
// Setters 
	void setTarget(std::string _target); 
// Output 
	void output(); 
}; 
 
#endif
