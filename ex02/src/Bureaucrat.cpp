#include "Bureaucrat.hpp"
#include "Form.hpp"
// Constructor initializes attributes to 0 by default 
Bureaucrat::Bureaucrat()
	: _name("Default"), _grade(150)
{
	std::cout << _name << " is constructed " << std::endl;
}
 
Bureaucrat::Bureaucrat( const Bureaucrat& rhs)
{
	*this = rhs;
}
 
Bureaucrat::Bureaucrat(const std::string newName, int newGrade) 
	: _name(newName)
{
	std::cout << _name << " is constructed " << std::endl;
	setGrade(newGrade);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << _name << " is destroyed " << std::endl;
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
	return "Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw ()
{
	return "Grade too low";
}

void Bureaucrat::signForm(Form &obj)
{
	try
	{
		obj.beSigned(*this);
		std::cout << this->getName() << " signed " << obj.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << obj.getName() << " because: " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return os;
}
