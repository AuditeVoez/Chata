Instructions:
> Write a function that takes an array of integers and its size, and returns a pointer to the middle element of the array. If the array has an even number of elements, return a pointer to the element with the lower index.

```c
#include <stdio.h>
#include <stdlib.h>
int getInput(){
    int x;
    scanf("%d", &x);
    return x;
}

void main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int* ptr = malloc(n * sizeof(int));
    printf("Enter elements of array: ");
    for(int i = 0; i< n; i++){
        ptr[i] = getInput();
    }
    n % 2 == 0 ?printf("Middle element of array is: %d", ptr[(n/2)-1]) : printf("Middle element of array is: %d", ptr[(n/2)]); 
    free(ptr);
}
```
