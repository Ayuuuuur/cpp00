#include "phonebook.hpp"

std::string formatColumn(const std::string& text) {
    int width = 10;
    if (text.length() > width)
        return text.substr(0, width - 1) + ".";
    else
        return std::string(width - text.length(), ' ') + text;
}

int check_num(std::string str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] < '0' || str[i] > '9')
            return(1);
        i++;
    }
    return(0);
}

void phonebook::searchcontact()
{
    std::string str = "";
    int tmp = i;
    if(i >= 8)
        tmp = 7;
    while (1)
    {
        std::cout << "Enter Index: ";
        getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
        if (str != "")
        {

            int j = std::atoi(str.c_str());
            if (j > tmp || check_num(str) == 1)
            {
                std::cout << "--- Index not valid ---" << std::endl;
                continue;
            }
            std::cout << "---------------------------------------------\n";
            std::cout << "|" << formatColumn("Index")
                      << "|" << formatColumn("First name")
                      << "|" << formatColumn("Last name")
                      << "|" << formatColumn("Nickname") << "|\n";
            std::cout << "---------------------------------------------\n";
            std::cout << "|" << formatColumn(str)
                      << "|" << formatColumn(arr[j].getfirstname())
                      << "|" << formatColumn(arr[j].getlastname())
                      << "|" << formatColumn(arr[j].getnickname()) << "|\n";
            std::cout << "---------------------------------------------\n";
        }
    }
}

void phonebook::addcontact(){
    std::string str = "";    
    int tmp = 0;
    
    if(this->i >= 8)
    {
        tmp = i;
        i = i % 8;
    }
    while(1)
    {
        std::cout << "Enter first name : ";
        getline(std::cin,str);
        if (std::cin.eof())
            exit(1);
        if(str != "")
        {
            arr[i].setfirstname(str);
            break;
        }
        std::cout << "--- Empty line ---" << std::endl; 
    }

    while(1)
    {
        std::cout << "Enter last name : ";
        getline(std::cin,str);
        if (std::cin.eof())
            exit(1);
        if(str != "")
        {
            arr[i].setlastname(str);
            break;
        }
        std::cout << "--- Empty line ---" << std::endl;   
    }

    while(1)
    {
        std::cout << "Enter nickname : ";
        getline(std::cin,str);
        if (std::cin.eof())
            exit(1);
        if(str != "")
        {
            arr[i].setnickname(str);
            break;
        }
        std::cout << "--- Empty line ---" << std::endl;    
    }

    while(1)
    {
        std::cout << "Enter phone number : ";
        getline(std::cin,str);
        if (std::cin.eof())
            exit(1);
        if(arr[i].check_nb(str) == 0)
        {
            std::cout << "--- Invalide Phone Number ---" << std::endl;    
            continue;
        } 
        if(str != "")
        {
            arr[i].setnb(str);
            break;
        }
        std::cout << "--- Empty line ---" << std::endl;
    }

    while(1)
    {
        std::cout << "Enter darkest secret : ";
        getline(std::cin,str);
        if (std::cin.eof())
            exit(1);
        if(str != "")
        {
            arr[i].setsecret(str);
            break;
        }
        std::cout << "--- Empty line ---" << std::endl;   
    }
    if(tmp != 0)
    {
        i = tmp;
    }
    std::cout << "--- Contact Added Successfully ---" << std::endl;   
    i++;    
}