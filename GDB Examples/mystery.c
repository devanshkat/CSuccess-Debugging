#include <stdio.h>

int main(){
    int x = 2;
    int y = 8;
    int z = 7;

    while (x < z){
        while (y > z){
            y += (x - z);
        }
        x += (y + z);
    }
    
    printf("x,y,z are %d,%d,%d\n", x, y, z);

    return 0;
}