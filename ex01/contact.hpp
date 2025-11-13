#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <bits/stdc++.h>

class contact{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string nb;
        std::string secret;
    public:
        void setfirstname(std::string first);
        void setlastname(std::string last);
        void setnickname(std::string name);
        void setnb(std::string nb);
        void setsecret(std::string secret);
        
        std::string getfirstname();
        std::string getlastname();
        std::string getnickname();
        std::string getnb();
        std::string getsecret();

        int check_nb(std::string str);

};

#endif