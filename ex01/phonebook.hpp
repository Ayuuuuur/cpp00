#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include "contact.hpp"
#include <iomanip>
#include <string>

class phonebook{
    private:
        contact arr[8];
        int i = 0;
    public:
        void addcontact();
        void searchcontact();
};
#endif
