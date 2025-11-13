#include "contact.hpp"

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


std::string contact::getfirstname(){
    return first_name;
}
std::string contact::getlastname(){
    return last_name;
}
std::string contact::getnickname(){
    return nickname;
}
std::string contact::getnb(){
    return nb;
}
std::string contact::getsecret(){
    return secret;
}


int contact::check_nb(std::string str)
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
            return 0;
        i++;
    }
    return 1;
}