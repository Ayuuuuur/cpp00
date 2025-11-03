#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include "phonebook.hpp"
#include <bits/stdc++.h>
struct cont{
    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string nb;
    std::string secret;
};

class contact{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string nb;
        std::string secret;
    public:
        int max = 7;
        void setfirstname(std::string first);
        void setlastname(std::string last);
        void setnickname(std::string name);
        void setnb(std::string nb);
        void setsecret(std::string secret);
        void setcontact(cont& book, int j);

        void getcontact(contact& con);
        void getfirstname(contact& con, std::string name);
        void getlastname(contact& con, std::string name);
        void getnickname(contact& con, std::string name);
        void getnb(contact& con, std::string name);
        void getsecret(contact& con, std::string name);

};

#endif