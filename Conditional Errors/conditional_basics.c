#include <stdio.h>
#include <stdlib.h>

int main(){
    int number = 3;
    int guess = 0;
    printf("Guess a number betwen 1 and 6: ");
    scanf("%d", &guess);
    if (guess < 1 || guess > 6){ // equivalent to !(guess > 1 && guess < 6)
        printf("Your guess is not between the numbers of 1 and 6.\n");
        return 1;
    }
    if (guess == number){
        printf("You got it right!\n");
    } else if (abs(guess - number) == 1){
        printf("You were really close; the answer was %d\n", number);
    } else {
        printf("That's incorrect. The number is %d", number);
    }
    return 0;
}