#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[5] = {5, 10, 15, 20, 25};
    
    int arraySize = sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i <= arraySize+2; i++)
    {
        printf("%d \n", arr[i]);
    }

    return 0;
}