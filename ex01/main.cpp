#include "phonebook.hpp"
#include "contact.hpp"

int main() 
{
        phonebook phone;

    std::string name;
    
    std::cout << "Hello, Welcome to your Phonebook" << std::endl;
    while(1)
    {
        std::cout << "enter a command :" ;
        getline(std::cin, name);
        if (std::cin.eof()) // diriha f lakhrin ahbiba
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
// std::cout << "first name :" << book[j].first_name << std::endl;
// std::cout << "last name :" << book[j].last_name << std::endl;
// std::cout << "nickname :" << book[j].nickname << std::endl;
// std::cout << "nb :" << book[j].nb << std::endl;
// std::cout << "secret :" << book[j].secret << std::endl;
