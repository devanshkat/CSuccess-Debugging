#include <stdio.h>

void correct(int array[]){
    for(int i = 0; i < 5; ++i){
        printf("The value at %d is %d\n", i, array[i]);
    }
}

void incorrect(int array[]){
    for(int i = 0; i <= 5; ++i){
        printf("The value at %d is %d\n", i, array[i]);
    }
}

int main(){
    int array[] = {1,2,3,4,5};
    correct(array);
    incorrect(array);
    return 0;
}