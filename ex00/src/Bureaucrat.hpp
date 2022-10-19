#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <string>

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
}; 

std::ostream& operator<<(std::ostream& os, Bureaucrat& obj);
 
#endif
