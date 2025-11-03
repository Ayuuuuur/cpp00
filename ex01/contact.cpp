#include "contact.hpp"

void contact::setcontact(cont& book, int j){
    book.index = j;
    book.first_name = first_name;
    book.last_name = last_name;
    book.nickname = nickname;
    book.nb = nb;
    book.secret = secret;
}

// bool contact::checkempty(cont& book){
//     if(book.first_name == "" || book.last_name == "" || book.nb == "" || book.nickname == "" || book.secret == "")
//         return false;
//     return true;
// }
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
    std::cout << "enter first name :" ;
    getline(std::cin, name);
    con.setfirstname(name);
}

void contact::getlastname(contact& con, std::string name){
    std::cout << "enter last name :" ;
    getline(std::cin, name);
    con.setlastname(name);
}

void contact::getnickname(contact& con, std::string name){
    std::cout << "enter nickname :" ;
    getline(std::cin, name);
    con.setnickname(name);
}

void contact::getnb(contact& con, std::string name){
    std::cout << "enter phone number :" ;
    getline(std::cin, name);
    con.setnb(name);
}
void contact::getsecret(contact& con, std::string name){
    std::cout << "enter your darkest secrect :" ;
    getline(std::cin, name);
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
