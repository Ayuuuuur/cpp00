#include "contact.hpp"

void contact::setcontact(cont& book, int j){
    book.index = j;
    book.first_name = first_name;
    book.last_name = last_name;
    book.nickname = nickname;
    book.nb = nb;
    book.secret = secret;
}

void contact::setfirstname(std::string first){
    
    this->first_name = first;
}

void contact::setlastname(std::string last){
    this->last_name = last;
}

void contact::setnickname(std::string name){
    this->nickname = name;
}

void contact::setnb(std::string nb){
    this->nb = nb;
}

void contact::setsecret(std::string secret){
    this->secret = secret;
}


void contact::getfirstname(contact& con, std::string name){
    while(1)
    {
        std::cout << "enter first name :" ;
        getline(std::cin, name);
        if(checkempty(name) == true)
            break;
    }
    con.setfirstname(name);
}

void contact::getlastname(contact& con, std::string name){
    while(1)
    {
        std::cout << "enter last name :" ;
        getline(std::cin, name);
        if(checkempty(name) == true)
            break;
    }
    con.setlastname(name);
}

void contact::getnickname(contact& con, std::string name){
    while (1)
    {
        std::cout << "enter nickname :" ;
        getline(std::cin, name);
        if(checkempty(name) == true)
            break;
    }
    con.setnickname(name);
}

void contact::getnb(contact& con, std::string name){
    while(1)
    {
        std::cout << "enter phone number :" ;
        getline(std::cin, name);
        if(checkempty(name) == true)
        {
            if(checknum(name) == true)
                break;
        }
    }
    con.setnb(name);
}
void contact::getsecret(contact& con, std::string name){
    while(1)
    {
        std::cout << "enter your darkest secrect :" ;
        getline(std::cin, name);
        if(checkempty(name) == true)
            break;
    }
    con.setsecret(name);
}

void contact::getcontact(contact& con){
    std::string name;
    con.getfirstname(con,name);
    con.getlastname(con,name);
    con.getnickname(con,name);
    con.getnb(con,name);
    con.getsecret(con,name);
}

bool contact::checkempty(std::string str){
    int i = 0;
    while(str[i])
    {
        if(str[i] != ' ' || str[i] ==  0)
            return true;
        i++;
    }
    return false;
}
bool contact::checknum(std::string str)
{
    int i = 0;
    while(str[i])
    {
        if((str[i] >= '0' && str[i] <= '9' )|| str[i] == '+')
        {
            i++;
            continue;
        }
        else
            return false;
        i++;
    }
    return true;
}