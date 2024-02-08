#include <stdio.h>

int function1(int* num){
    return num;
}

int function2(int* address, int num){
    (*address) += 3;
    return *address;
}

int main(){
    
    int myNumber = 3;
    int* addressOfMyNumber = &myNumber;

    addressOfMyNumber = function1(addressOfMyNumber);

    myNumber = function2(addressOfMyNumber, myNumber);

    return 0;
}