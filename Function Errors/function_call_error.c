#include <stdio.h>

void function1(){
    printf("called void return function1 with no arguments\n");
}

void function2(int num){
    printf("called void return function2 with argument '%d'\n", num);
}

int function3(int num){
    return num + 3;
}

int function4(int* num){
    return (*num) + 3;
}

int* function5(int* num){
    (*num) += 3;
    return num;
}

int main(){
    int myNumber = 2;
    function1();
    //function1(myNumber);
    function2(myNumber);
    //function2();
    myNumber = function3(myNumber);
    //function3(myNumber);
    //myNumber = function2(myNumber);
    myNumber = function4(&myNumber);
    //myNumber = function4(myNumber);
    //myNumber = function4(*myNumber);
    int* addressOfMyNumber = &myNumber;
    addressOfMyNumber = function5(addressOfMyNumber);
    //myNumber = function5(addressOfMyNumber);
    return 0;
}