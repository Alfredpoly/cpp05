#ifndef FORM_H
#define FORM_H
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private: 
	const std::string _name;
	bool _signed;
	int _grade_sign;
	int _grade_exec;
 
public:
	Form(); 
	Form( const Form &rhs); 
	Form(const std::string newName, int newGrade_sign, int newGrade_exec);
	~Form(); 
	Form& operator=( const Form &rhs); 
	const std::string getName(); 
	bool getSigned(); 
	int getGrade_sign(); 
	int getGrade_exec(); 
	void setSigned(bool _signed); 
	void setGrade_sign(int _grade_sign); 
	void setGrade_exec(int _grade_exec);
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw ();
	};
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw ();
	};
	class FormAlreadySigned : public std::exception
	{
		const char *what() const throw ();
	};
	void beSigned(Bureaucrat &obj);
}; 

std::ostream& operator<<(std::ostream& os, Form& obj);
 
#endif
