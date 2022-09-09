/*
Author: Ishraq Mahid
Course : CSCI-135
Instructor: Genady Maryash
Assignment: Lab 2C
*/

#include <iostream>
#include <string>

int main(){
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i = 0; i < 60; i++){
        std::cout << fib[i] << "\n";
    }
    
    //The first negative number that appears is after the number "1836311903", which is "-1323752223." 
    //This limit, however, begins to seem familiar when we think of the maximum number an integer variable can hold (which is around two billion)
    //I believe that it is possible the math ends up being done incorrectly because we reached this integer limit, resulting in "integer overflow" behaviour.

    return 0;
}