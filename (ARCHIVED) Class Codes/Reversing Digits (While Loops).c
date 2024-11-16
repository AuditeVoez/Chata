// # Reversing Digits (While Loops)
// Note: 
// 	- This code can reverse up to the 32bit integer limit. To reverse more than that, please add `long` behind the `int` data type.
// Sample Test

// `Input`: 12345
// `Output`: 54321

#include <stdio.h>

int reverseDigit(int);

void main(){
	int x, y;
	printf("Enter a number: ");
	scanf("%d", &x);
	y = reverseDigit(x);
	printf("Your number reversed is: %d", y);
}

int reverseDigit(int x){
	int reversed = 0;
	int remainder = 0;
		while(x!=0){
			remainder = x % 10;
			reversed = reversed * 10 + remainder;
			x = x / 10; //or x /= 10 , your choice
			}
	return reversed;
}
