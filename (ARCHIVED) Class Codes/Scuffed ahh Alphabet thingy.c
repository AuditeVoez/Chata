#include <stdio.h>
#include <ctype.h>

int main(void){
    char letter;
    while(letter != 'a' || letter != 'A'){
        printf("Enter the 1st character of the alphabet: ");
        char x;
        scanf(" %c", &x);
        if(isalpha(x) && x == 'a' || x == 'A'){
            letter = x;
            break;
	        if(x != 'a' || x != 'A'){
	            continue;
	        }
        }
        
    }
    
    printf("\nAlphabet:\n");
        int x = 1;
        while(x <= 6){
            int y = 0;
            if(x == 6){
                printf("    %c", letter);
                break;
            } 
            if(x != 6){
            while(y != 5){
                printf("%c ", letter++);
                y++;
            }
            printf("\n");
            x++;
            }
        }  
}