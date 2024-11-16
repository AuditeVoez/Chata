
/*```
Instructions:
>Write a function that takes an array of integers and returns a pointer to the maximum value in the array.

```c
Sample Test

`Input`:  
Size: 7

Elements: 1 2 3 5 3 2 1

`Output`: 5
*/


#include <stdio.h>
#include <stdlib.h>
void arraySize(int n,int* largestNumber);
int getInput();

void main(){
    int n; int y = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arraySize(n,&y);
    printf("Maximum value in the array is: %d", y);
    
}
int getInput(){
    int x;
    scanf("%d", &x);
    return x;
}
void arraySize(int n,int* largestNumber){
    int* ptr = malloc(n * sizeof(int));
    printf("Enter %d integers:\n", n);
        for(int i = 0; i < n ; i++){
            ptr[i] = getInput();
                if(ptr[i] >= *largestNumber){
                    *largestNumber = ptr[i];
                }
        }
        free(ptr);
}
