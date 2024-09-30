# Palindrome Checker (with support for leading 0)
Note: This code is limited to 4 digits. Any more than that and it dies. 

This code was written with the following restrictions:
1. We cannot use arrays, strings, and other data storage types besides integers.
2. We cannot use else statements at all


```c
#include <stdio.h>
int isPalindrome();
void main(){
    int boolPal;
    boolPal = isPalindrome();
        if(boolPal == 1){
            printf("Your number is a palindrome");
        }
}  
    int isPalindrome(){
        int x;
        printf("Enter a number: ");
        scanf("%d", &x);
        int a,b,c,d;
        a = x % 10;
        b = (x/10) % 10;
        c = (x/100) % 10;
        d = (x/1000) % 10;
        //messy if statements beyond this line
            if(x>=10000){
                // checks if the number is a four digit number or below
                return 0;
            }
            if( (x>=1000 && x<= 9999) && (a == d && b == c)){
                //checks if the number is between 1000 and 9999 inclusive, and if the first and last digits of a 4 digit match
                return 1;
            }
            if ( (x>= 100 && x <= 999) && (a == 0 && b == c) ){
                //checks if the number is a four digit with a leading zero, and matches the respective digits. This still treats the number as a four digit.
                return 1;
            }
            if ( (x>= 100 && x <= 999) && (a == c)){
                //now, it checks for the palindromic property of the number provided it is a three digit number
                return 1;
            }
            if ( (x>= 10 && x <= 99) && a==b){
                //checks the same for a 2 digit number
                return 1;
            }
            if (x < 10){
                //all single digit numbers are inherently palindromic
                return 1;
            }
            //if none of the cases matches, it returns negative
            return 0;
    }
```
