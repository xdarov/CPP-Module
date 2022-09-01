#include "Harl.hpp"

Harl::Harl() 
{
}

Harl::~Harl() 
{
}

void Harl::debug() 
{
	std::cout << "[ DEBUG }" << std::endl;
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-specialketchup burger. I "
				 "really do!" << std::endl;
}

void Harl::info() 
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You"
				 " didn’t put enough bacon in my burger! If you did, I "
				 "wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() 
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve "
				 "been coming for years whereas you started working here "
				 "since last month." << std::endl;
}

void Harl::error() 
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) 
{
	void (Harl::*fptr[])(void) = {&Harl::debug, &Harl::info,&Harl::warning,&Harl::error};
	int i;

	i = Harl::getIndex(level);
	switch (i) {
		case (0):
			(this->*fptr[0])();
		case (1):
			(this->*fptr[1])();
		case (2):
			(this->*fptr[2])();
		case (3): {
			(this->*fptr[3])();
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int	Harl::getIndex(std::string level) {
	bool act[] = {level =="DEBUG", level == "INFO", level =="WARNING",
				  level =="ERROR"};
	int i;

	i = 0;
	while (act[i] == 0)
		i++;
	return (i);
}