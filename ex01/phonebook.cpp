#include "phonebook.hpp"

int	ft_atoi(std::string str)
{
	int	sum;
	int	i;
	int	sign;

	i = 0;
	sum = 0;

	// The signal starts by default as positive
	sign = 1;

	// while there are spaces or tabs go to the next character
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;

	// If it's a minus sign the value of the 'sign' is inverted and go to next char
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}

	// While the string has numbers, they will be added to sum
	while (str[i] >= '0' && str[i] <= '9')
	{
		// This formula receives the number that is in the index and adds a decimal place
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sign * sum);
}
void phonebook::searchcontact()
{
    std::string str = "";
    while(1)
    {
        std::cout << "Enter Index: ";
        if(getline(std::cin,str) && str != "")
            break;

    }
    int j = ft_atoi(str);
    std::cout << "Index  | First name | Last name | Nickname |" << std::endl;
    std::cout << "| " << j ;
    std::cout << " | " << arr[j].getfirstname() ;
    std::cout << " | " << arr[j].getlastname() ;
    std::cout << " | " << arr[j].getnickname() << " | "<< std::endl;
}

void phonebook::addcontact(){
    std::string str = "";    
    
    printf("i == >%d\n",i);
    // if(this->i >= 8)
    // {
        
    // }
    while(1)
    {
        std::cout << "Enter first name : ";
        if(getline(std::cin,str) && str != "")
        {
            arr[i].setfirstname(str);
            break;
        }
        std::cout << "Empty line" << std::endl;
        
    }

    while(1)
    {
        std::cout << "Enter last name : ";
        if(getline(std::cin,str) && str != "")
        {
            arr[i].setlastname(str);
            break;
        }
        std::cout << "Empty line" << std::endl;
        
    }

    while(1)
    {
        std::cout << "Enter nickname : ";
        if(getline(std::cin,str) && str != "")
        {
            arr[i].setnickname(str);
            break;
        }
        std::cout << "Empty line" << std::endl;
        
    }

    while(1)
    {
        std::cout << "Enter phone number : ";
        if(getline(std::cin,str) && str != "")
        {
            arr[i].setnb(str);
            break;
        }
        std::cout << "Empty line" << std::endl;
        
    }

    while(1)
    {
        std::cout << "Enter darkest secret : ";
        if(getline(std::cin,str) && str != "")
        {
            arr[i].setsecret(str);
            break;
        }
        std::cout << "Empty line" << std::endl;
        
    }

    i++;    
}