#include <stdio.h>

int main(){
    int numLoops = 4;
    //For loop
    for (int i = 0; i < numLoops; ++i){
        printf("Loop number %d\n", i);
    }
    int j = 0;
    //While loop
    while (j < numLoops)
    {
        printf("Loop number %d\n", j);
        j++;
    }
    //Do-while loop
    do {
        printf("Enter the number of loops: ");
        scanf("%d", &numLoops);
    } while (numLoops < 1);
    printf("Number of loops is %d\n", numLoops);
    return 0;
}