#include <iostream>

class letter{
    public:
        void to_upper(std::string str);
};

void letter::to_upper(std::string str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        std::cout << str[i] ;
        i++;
    }
}

int main(int ac, char **av)
{
    letter p;
    int i =  1;

    if(ac == 1)
            p.to_upper("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    while(av[i])
    {
        p.to_upper(av[i]);
        i++;
    }
    std::cout << "\n";
}