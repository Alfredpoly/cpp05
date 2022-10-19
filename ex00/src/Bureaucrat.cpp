#include "Bureaucrat.hpp"
// Constructor initializes attributes to 0 by default 
Bureaucrat::Bureaucrat()
	: _name("Default"), _grade(150)
{

}
 
Bureaucrat::Bureaucrat( const Bureaucrat& rhs)
{
	*this = rhs;
}
 
Bureaucrat::Bureaucrat(const std::string newName, int newGrade) 
	: _name(newName)
{
	setGrade(newGrade);
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& rhs )
{
	return *this;
}

int Bureaucrat::getGrade() { return _grade; }
std::string Bureaucrat::getName() { return _name; }

void Bureaucrat::setGrade(int newGrade) 
{ 
	if (newGrade < 1)
		throw GradeTooHighException();
	else if (newGrade > 150)
		throw GradeTooLowException();
	_grade = newGrade;
}

void Bureaucrat::operator++(void)
{
	setGrade(_grade + 1);
}

void Bureaucrat::operator--(void)
{
	setGrade(_grade - 1);
}

const char* Bureaucrat::GradeTooHighException::what() const throw ()
{
	return "too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw ()
{
	return "too low";
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return os;
}
