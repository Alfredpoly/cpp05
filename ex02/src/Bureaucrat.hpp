#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <string>
#include <exception>
#include <iomanip>
#include "Form.hpp"
#include "color.hpp"

class Form;

class Bureaucrat
{
private: 
	const std::string _name;
	int _grade;
 
public:
	Bureaucrat(); 
	Bureaucrat( const Bureaucrat &rhs); 
	Bureaucrat(const std::string newName, int newGrade);
	~Bureaucrat(); 
	Bureaucrat& operator=( const Bureaucrat &rhs);
	void operator--();
	void operator++();
	int getGrade(); 
	std::string getName();
	void setGrade(int _grade);
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw ();
	};
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw ();
	};
	void signForm(Form &obj);
}; 

std::ostream& operator<<(std::ostream& os, Bureaucrat& obj);
 
#endif
