#include <iomanip>
#include <string>
#include <iostream>
#include "OnOptionsMenu.h"

OnOptionsMenu::OnOptionsMenu(){
	
}

void OnOptionsMenu::menu(){
	std::cout << std::setw(10)  << std::setfill('=') << "Menu";
	std::cout << std::setw(10)  << std::setfill('=') << " "  << std::endl;

	std::cout << "i. Incremental Insert " << std::endl;
	std::cout << "d. Incremental Delete " << std::endl;
	std::cout << "c. Clear tree " << std::endl;
	std::cout << "p. Print tree " << std::endl;
	std::cout << "h. Print tree height " << std::endl;
	std::cout << "s. Print tree size " << std::endl;
	std::cout << "x. Exit " << std::endl;

	std::cout << std::setw(10)  << std::setfill('=') << "Menu";
	std::cout << std::setw(10)  << std::setfill('=') << " "  << std::endl;
	


}