/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 13:15:30 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/20 14:52:57 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
	: _name("default"), _signed(false), _grade_sign(150), _grade_exec(150)
{
	std::cout << _name << " is constructed " << std::endl;
}
 
Form::Form( const Form& rhs)
{
	*this = rhs;
}
 
Form::Form(const std::string newName, int newGrade_sign, int newGrade_exec) 
	: _name(newName), _signed(false)
{
	std::cout << _name << " is constructed " << std::endl;
	setGrade_sign(newGrade_sign);
	setGrade_exec(newGrade_exec);
}

Form::~Form()
{
	std::cout << _name << " is destroyed " << std::endl;

}

Form&	Form::operator=( const Form& rhs )
{
	return *this;
}

const std::string Form::getName() { return _name; }

bool Form::getSigned() { return _signed; }

int Form::getGrade_sign() { return _grade_sign; }

int Form::getGrade_exec() { return _grade_exec; }

void Form::setSigned(bool newSigned) { _signed = newSigned; }

void Form::setGrade_sign(int newGrade_sign)
{ 
	if (newGrade_sign < 1)
		throw GradeTooHighException();
	else if (newGrade_sign > 150)
		throw GradeTooLowException();
	_grade_sign = newGrade_sign;
}
void Form::setGrade_exec(int newGrade_exec) 
{
	if (newGrade_exec < 1)
		throw GradeTooHighException();
	else if (newGrade_exec > 150)
		throw GradeTooLowException();
	_grade_exec = newGrade_exec;
}

const char* Form::GradeTooHighException::what() const throw ()
{
	return "Grade too High";
}

const char* Form::GradeTooLowException::what() const throw ()
{
	return "Grade too low";
}

const char* Form::FormAlreadySigned::what() const throw ()
{
	return "form already signed";
}

void Form::beSigned(Bureaucrat &obj)
{
	if (_signed)
		throw FormAlreadySigned();
	if (obj.getGrade() <= _grade_sign)
		setSigned(true);
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, Form& obj)
{
    os << obj.getName() << ", bureaucrat is signed: "<< obj.getSigned() << ", grade sign: " << obj.getGrade_sign() <<  ", grade execute: " << obj.getGrade_exec() << std::endl;
    return os;
}