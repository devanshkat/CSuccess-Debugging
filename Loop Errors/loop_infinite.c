#include <stdio.h>

int correctGetNSum(int lowerBound, int higherBound){
    int sum = 0;
    while (lowerBound <= higherBound){
        sum += lowerBound;
        lowerBound += 1;
    }
    return sum;
}

// int incorrectGetNSum(int lowerBound, int higherBound){
//     int sum = 0;
//     while (lowerBound <= higherBound){
//         sum += lowerBound;
//     }
//     return sum;
// }

int correctGetNFactorial(int n){
    int product = 1;
    for (int i = 1; i <= n; ++i){
        product *= n;
    }
    return product;
}

// int incorrectGetNFactorial1(int n){
//     int product = 1;
//     for (int i = 1; i = n; ++i){
//         product *= n;
//     }
//     return product;
// }

// int incorrectGetNFactorial2(int n){
//     int product = 1;
//     for (int i = 1; i == n; ++i){
//         product *= n;
//     }
//     return product;
// }

int main(){
    int lowerBound = 0;
    int upperBound = 10;

    int sum = correctGetNSum(lowerBound, upperBound);
    //int sum = incorrectGetNSum(lowerBound, upperBound);
    
    int factorialBound = 5;
    int factorial = correctGetNFactorial(factorialBound);
    //int factorial = incorrectGetNFactorial1(factorialBound);
    //int factorial = incorrectGetNFactorial2(factorialBound);

    return 0;
}