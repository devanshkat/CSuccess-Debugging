#include <stdio.h>

void incorrectPrintSweetness1(int sweetness){
    if (sweetness = 110){
        printf("That is super sweet!\n");
    } else if (sweetness > 80){
        printf("That is very sweet!\n");
    } else if (sweetness > 50){
        printf("That is moderately sweet!\n");
    } else {
        printf("That is not very sweet!\n");
    }
}

void incorrectPrintSweetness1(int sweetness){
    if (sweetness = 110){
        printf("That is super sweet!\n");
    } 
    if (sweetness > 80){
        printf("That is very sweet!\n");
    } 
    if (sweetness > 50){
        printf("That is moderately sweet!\n");
    } else {
        printf("That is not very sweet!\n");
    }
}

void correctPrintSweetness(int sweetness){
    if (sweetness == 110){
        printf("That is super sweet!\n");
    } else if (sweetness > 80){
        printf("That is very sweet!\n");
    } else if (sweetness > 50){
        printf("That is moderately sweet!\n");
    } else {
        printf("That is not very sweet!\n");
    }
}

void incorrectPrintIceLevel(int iceLevel){
    if (iceLevel == 75 || 100){
        printf("That is a lot of ice!\n");
    } else if (iceLevel == 25 || 50){
        printf("That is a medium amount of ice!\n");
    } else {
        printf("There is no ice!\n");
    }
}

void correctPrintIceLevel(int iceLevel){
    if (iceLevel == 75 || iceLevel == 100){
        printf("That is a lot of ice!\n");
    } else if (iceLevel == 25 || iceLevel == 50){
        printf("That is a medium amount of ice!\n");
    } else {
        printf("There is no ice!\n");
    }
}

int main(){
    int sweetness = 0;
    int iceLevel = 0;

    printf("Welcome to DevTea!\nEnter your sweetness level: ");
    scanf("%d", &sweetness);

    printf("Enter your ice level (either 0%%, 25%%, 50%%, 75%%, or 100%%): ");
    scanf("%d", &iceLevel);

    correctPrintSweetness(sweetness);
    incorrectPrintSweetness1(sweetness);
    incorrectPrintSweetness2(sweetness);

    correctPrintIceLevel(iceLevel);
    correctPrintIceLevel(iceLevel);

    return 0;
}