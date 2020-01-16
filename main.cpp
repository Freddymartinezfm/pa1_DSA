
#include "Search_tree.h"
#include "Employee.h"
#include <string>
#include <iomanip>
#include "OnOptionsMenu.h"
#include <cstring>

int main(){
	OnOptionsMenu menuOptions;
	bool running = true;
	Search_tree<int> searchTree;
	menuOptions.menu();
	while (running){
		std::string menuSelection;
		std::cin >> menuSelection;

		if (menuSelection == "i"){
			std::cout << "Enter new integer keys to insert. Enter 'q' to quit " << std::endl;
			std::string key;
			
			while(std::cin >> key){	
				if (key == "q"){
					break;
				}	
				searchTree.insert(std::stoi(key));
				searchTree.print();
			}
			menuOptions.menu();
			
		} else if (menuSelection == "d"){
			std::cout << "Enter new integer keys to delete. Enter 'q' to quit " << std::endl;
			std::string key;
			
			while(std::cin >> key){	
				if (key == "q"){
					std::cout << "quit";
					menuOptions.menu();
					break;
				}

				searchTree.remove(std::stoi(key));
				
				searchTree.print();
			}

		} else if (menuSelection == "c"){
			searchTree.clear();
			menuOptions.menu();

					
		} else if (menuSelection == "p"){
			searchTree.print();
			menuOptions.menu();
		} else if (menuSelection == "x"){
			std::cout << "Program ended " << std::endl;
			running = false;
			exit(1);
			}
		} 
	return 0;
}
