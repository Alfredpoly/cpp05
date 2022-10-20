#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include <iostream>
#include <string>
 
// Class definition 
class PresidentialPardonForm : public Form
{
private: 
	std::string _target;
 
public: 
// Constructor 
	PresidentialPardonForm();
	PresidentialPardonForm( const PresidentialPardonForm &rhs);
	PresidentialPardonForm(std::string newTarget);
	~PresidentialPardonForm();
	PresidentialPardonForm& operator=( const PresidentialPardonForm &rhs);
// Getters 
	std::string getTarget();
// Setters 
	void setTarget(std::string _target);
// Output 
	void output();
}; 
 
#endif
