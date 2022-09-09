/*
Author: Ishraq Mahid
Course : CSCI-135
Instructor: Genady Maryash
Assignment: Lab 2B
*/

#include <iostream>
#include <string>

void print_interval(int L,int U)
{
    for(int i = L; i < U; i++){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}