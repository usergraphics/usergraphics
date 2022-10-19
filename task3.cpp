// My 3rd C++ Program
/*
 * C++ Program to Print the Name of the User and Greetings
 */
#include <iostream>
#include <string>
 
int main()
{
    std::string firstname;
 
    std::cout << "Hello User, Enter your first name.\n ";
    std::cin >> firstname;
    std::cout << "Hello " << firstname
              <<". Its nice to meet you!\n";
}