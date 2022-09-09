/*
Author: Ishraq Mahid
Course : CSCI-135
Instructor: Genady Maryash
Assignment: Lab 2A
*/

#include <iostream>
#include <string>

int main()
{
    int number;

    std::cout << "Please enter an integer: ";
    std::cin >> number;
    //std::cout << std::endl;

    while (number <= 0 || number >= 100){
        std::cout << "Please re-enter: ";
        std::cin >> number;
        //std::cout << std::endl;
    }

    std::cout << "Number squared is " << number * number << std::endl;

    return 0;
}