#include "phonebook.hpp"
#include "contact.hpp"

int main() 
{
    contact con;
    phonebook phone;

    int j = 0;
    std::string name;
    
    std::cout << "Hello, Welcome to your Phonebook" << std::endl;
    while(1)
    {
        std::cout << "enter a command :" ;
        getline(std::cin, name);
        if(name == "ADD")
            phone.addcontact();
        if(name == "SEARCH")
        {
            phone.searchcontact();
        }
        j++;
    }
    return 0;
}
// std::cout << "first name :" << book[j].first_name << std::endl;
// std::cout << "last name :" << book[j].last_name << std::endl;
// std::cout << "nickname :" << book[j].nickname << std::endl;
// std::cout << "nb :" << book[j].nb << std::endl;
// std::cout << "secret :" << book[j].secret << std::endl;
