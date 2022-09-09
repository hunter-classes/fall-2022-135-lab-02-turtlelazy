/*
Author: Ishraq Mahid
Course : CSCI-135
Instructor: Genady Maryash
Assignment: Lab 2C
*/

#include <iostream>
#include <string>

void changeData(int index, int number, int array[]){
    array[index] = number;
}

void printArr(int array[]){
    for (int i = 0; i < 10; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "\n\n";
}

int main(){
    int myData[10];
    for(int i = 0; i < 10; i++){
        myData[i] = 1;
    }

    int i = 0;
    int v;
    while(i >= 0 && i < 10){
        //prints the data
        std::cout << "\n";

        printArr(myData);

        //asks for input
        std::cout << "Input index: ";
        std::cin >> i;

        std::cout << "Input value: ";
        std::cin >> v;

        //validates index and changes data
        if (i >= 0 && i < 10){
            changeData(i,v,myData);
        }

        //exits if not correct
        else{
            std::cout << "\nIndex out of range. Exit.\n";
        }

    }

    return 0;
}
