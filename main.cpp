
#include "Search_tree.h"
#include <string>
#include <iomanip>
#include "OnOptionsMenu.h"
#include <cstring>

std::string input();
void build(std::string &);
bool running = true;
OnOptionsMenu menuOptions;
Search_tree<int> searchTree;

int main(){
	while (running){
		menuOptions.menu();
		std::string selection =  input();
		build(selection);
	} 
	return 0;
}


std::string input(){
		std::string m;
		while ((std::cin >> m).good()){
			if (m.length() != 1){
				std::cin.clear();
				std::cin.ignore(256, '\n');
				std::cout << "Invalid selection: too many characters " << std::endl;
		} else {
			return m;
		}
	}
	return NULL;
}

void build(std::string& selection){
	
	if (selection == "i"){
			std::cout << "Enter new integer keys to insert. Enter 'q' to quit " << std::endl;
			std::string key;
			
			while(std::cin >> key){	
				if (key == "q"){
					break;
				}
				try {
					searchTree.insert(std::stoi(key));

				} catch (exception &e){
					std::cout << "Invalid input to insert: '" << e.what() << "'" << " error.";
				}	
				searchTree.print();
			}
				// menuOptions.menu();
			
		} else if (selection == "d"){
			std::cout << "Enter new integer keys to delete. Enter 'q' to quit " << std::endl;
			std::string key;
			
			while(std::cin >> key){	
				if (key == "q"){
					std::cout << "quit";
					// menuOptions.menu();
					break;
				}
				try {
					searchTree.remove(std::stoi(key));
				} catch (exception &e){
					std::cout << "Invalid input to remove: '" << e.what() << "'" << " error. ";
				}	
				searchTree.print();
			}

		} else if (selection == "h"){
			std::cout << "The height of the binary tree is " <<  searchTree.height() << std::endl;
			// menuOptions.menu();
		}  else if (selection == "s"){
			std::cout << "The size of the binary tree is " <<  searchTree.size() << std::endl;
			menuOptions.menu();
		} else if (selection == "c"){
			searchTree.clear();
			// menuOptions.menu();
		} else if (selection == "p"){
			searchTree.print();
			// menuOptions.menu();
		} else if (selection == "x"){
			std::cout << "Program ended " << std::endl;
			running = false;
			exit(1);
		} else {
			std::cout << "Not an option " << std::endl;

		}

}