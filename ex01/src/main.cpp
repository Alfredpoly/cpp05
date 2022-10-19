/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 14:20:54 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/19 13:43:56 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << GREEN << "--------------[  form level too high  ]--------------" << RESET_COLOR << std::endl;
	std::cout << BLUE << "[  sign level = -1  ]" << RESET_COLOR << std::endl;
	try
	{
		Form High1("High", -1, 23);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET_COLOR << RESET_COLOR << std::endl;
	}
	std::cout << BLUE << "[  exec level = -1  ]" << RESET_COLOR << std::endl;
	try
	{
			Form High2("High", 23, -1);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET_COLOR << RESET_COLOR << std::endl;
	}
	std::cout << GREEN << "--------------[  form level too low   ]--------------" << RESET_COLOR << std::endl;
	std::cout << BLUE << "[  sign level = 600  ]" << RESET_COLOR << std::endl;
	try
	{
		Form Low1("Low", 600, 23);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET_COLOR << RESET_COLOR << std::endl;
	}
	std::cout << BLUE << "[  exec level = 700  ]" << RESET_COLOR << std::endl;
	try
	{
		Form Low2("Low", 23, 700);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET_COLOR << RESET_COLOR << std::endl;
	}

	std::cout << GREEN << "--------------[ Lets sign some forms! ]--------------" << RESET_COLOR << std::endl;
	Bureaucrat Henry("Henry", 140), Bob("Bob", 2), George("George", 75);

	std::cout << BLUE << "\n[  HOUSING PERMIT (5, 23)  ]" << RESET_COLOR << std::endl;
	Form housingPermit("Housing Permit", 5, 23);

	std::cout << MAGENTA << "[  vv Signing vv  ]" << RESET_COLOR << std::endl;
	Henry.signForm(housingPermit);
	Bob.signForm(housingPermit);
	
	
	std::cout << BLUE << "[  BILLIONARE ELEGIBILITY FORM (80, 3)  ]" << RESET_COLOR << std::endl;
	Form billionareElegibilityForm("Billionare Elegibility Form", 80, 3);
	std::cout << MAGENTA << "[  vv Signing vv  ]" << RESET_COLOR << std::endl;
	Henry.signForm(billionareElegibilityForm);
	George.signForm(billionareElegibilityForm);
	Bob.signForm(billionareElegibilityForm);
	std::cout << GREEN << "--------------[        DESTRUCT       ]--------------" << RESET_COLOR << std::endl;
	return (0) ;
}