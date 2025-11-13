#include "phonebook.hpp"
#include "contact.hpp"

int main() 
{
    phonebook phone;
    std::string name;
    
    std::cout << " Hello, Welcome to your Phonebook " << std::endl;
    while(1)
    {
        std::cout << "enter a command :" ;
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
    }
    return 0;
}
