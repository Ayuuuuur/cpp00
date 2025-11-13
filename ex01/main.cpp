#include "phonebook.hpp"
#include "contact.hpp"

int main() 
{
    phonebook phone;
    std::string name;
    
    std::cout << " Hello, Welcome to your Phonebook " << std::endl;
    std::cout <<  "You can Use this command" << std::endl; 
    std::cout <<  "ADD ,SEARCH ,EXIT " << std::endl;
    while(1)
    {
        std::cout << "Enter a command :" ;
        getline(std::cin, name);
        if (std::cin.eof())
            break;
        if(name == "ADD")
            phone.addcontact();
        if(name == "SEARCH")
        {
            phone.searchcontact();
        }
        if(name == "EXIT")
            break;
        else
            std::cout << "Command not found" << std::endl;
    }
    return 0;
}
