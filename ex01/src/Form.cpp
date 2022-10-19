/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 13:15:30 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/19 14:05:13 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
	: _name("default"), _signed(false), _grade_sign(150), _grade_exec(150)
{

}
 
Form::Form( const Form& rhs)
{
	*this = rhs;
}
 
Form::Form(const std::string newName, bool newSigned, int newGrade_sign, int newGrade_exec) 
	: _name(newName), _signed(newSigned), _grade_sign(newGrade_sign), _grade_exec(newGrade_exec)
{

}

Form::~Form()
{

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
	return "too High";
}

const char* Form::GradeTooLowException::what() const throw ()
{
	return "too low";
}

void Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() >= _grade_sign)
		setSigned(true);
	else
		throw GradeTooLowException();
}



std::ostream& operator<<(std::ostream& os, Form& obj)
{
    os << obj.getName() << ", bureaucrat is signed: "<< obj.getSigned() << ", grade sign: " << obj.getGrade_sign() <<  ", grade execute: " << obj.getGrade_exec();
    return os;
}