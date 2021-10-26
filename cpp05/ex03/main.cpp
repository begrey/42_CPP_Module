#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern intern;
		
		Form* form;
		form = intern.makeForm("presidential pardon", "jimkwon");

		Form *error;

		error = intern.makeForm(" error", "jimkwon2");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}