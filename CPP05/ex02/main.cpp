
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"




int main() {
    ShrubberyCreationForm form1("home");

    Bureaucrat buro("buro", 149);
    buro.signForm(form1); // should fail because grade to low
    Bureaucrat highRankBuro("highRankBuro", 140);
    highRankBuro.signForm(form1); // should succeed because highRankBuros grade is high enough
    highRankBuro.executeForm(form1); // should succeed because the form is signed and highRankBuros grade is high enough
    std::cout << "-----------------------------------------\n";

    Bureaucrat b2("dorel",4);
    RobotomyRequestForm form2("car");
    b2.signForm(form2);
    b2.executeForm(form2);

    std::cout << "-----------------------------------------\n";
    Bureaucrat b3("test b3", 10);
    PresidentialPardonForm form3("Robot");
    b3.signForm(form3);
    b3.executeForm(form3);

    // this should fail because the form is not sign before execution
    std::cout << "-----------------------------------------\n";

    Bureaucrat b4(" b4", 10);
    PresidentialPardonForm form4("test");
    b4.executeForm(form4);



    return 0;
}