// Instruction:
// >Write a program that takes an integer `n`. Using a `for` loop, calculate and print the result of subtracting the digits of the entered number from right to left.
// Sample Test
// `Input`: 12345
// `Output`: -5
#include <stdio.h>
int main(void){
    int x, result;
    printf("Enter a positive integer: ");
    scanf("%d", &x);
    for(int sub = x % 10; x != 0; x/10){
        x /= 10;
        sub -= x % 10;
        result = sub;
    }
    printf("result = %d", result);
}


