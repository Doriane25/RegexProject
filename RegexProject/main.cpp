#include <iostream>
#include <string>
#include <regex>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
    bool special_char = false;

	std::stringstream ss;
    std::regex special_char_expression{ "[@!?*:$^€#|-_{}<>/=+()]+"};
    
    std::string pw;

    bool done = false; //let's assume we're not done

    do{ //do ask-for-password as long were not done

        std::cout << "Type in a valid password: ";
        std::getline(std::cin, pw); //get input
				
        if (pw.length() <= 1){ //too short!
            std::cout << "Invalid password!!! Try again . . .\n\n";
        }
        else{
			
            if (std::regex_search(pw, special_char_expression)){ //not enough booleans were true!
           
            std::cout << "Invalid password! Try again . . .\n\n";
            
            }
            else{ //otherwise it's valide
                std::cout << "That's a valid Password!" << std::endl;
                done = true;
            }
        }

    } while (!done);
	return 0;
}
