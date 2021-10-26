#ifndef _Bureaucrat_HPP
#define _Bureaucrat_HPP
#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string const name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& origin);
        Bureaucrat& operator=(const Bureaucrat& origin);
        std::string getName() const;
        int getGrade() const;
        void setGrade(int grade);
        void increment();
        void decrement();
        class GradeTooHighException : public std::exception
        {
            public:
                const char * what() const throw()  //? noexcept overide 는 c++11 이상 컴파일러
                {
                    return "Grade is too high";
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char * what() const throw()
                {
                    return "Grade is too low";
                }
        };
        // ? sign이 true면 "<bureaucrat> signs <form>", 
        // ? sign이 false면 "<bureaucrat> cannot sign <form> because <reason>"
        void signForm(const Form &f);
};



std::ostream& operator <<(std::ostream& os, const Bureaucrat& b);

#endif