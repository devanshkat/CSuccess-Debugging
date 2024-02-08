#include <stdio.h>

int voidArgFunction1 (void){
    printf("returning 1\n");
    return 1;
}

int voidFunction2 (){
    printf("returning 1\n");
    return 1;
}

void voidRetFunction (){
    print("returning nothing\n");
}

int main(){
    printf("Hello World!\n");
    printf("%d, %d", voidFunction1(), voidFunction2());
    voidRetFunction();
    return 0;
}