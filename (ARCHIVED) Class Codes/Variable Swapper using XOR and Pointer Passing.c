
// Sample Test

// `Input`: 5 6
// `Output`: 6 5

#include <stdio.h>
void variableSwapper(int*, int*);
void main(){
    printf("Enter two values, X and Y: ");
    int x, y;
    scanf("%d %d",&x,&y);
    printf("Pre - Swap : %d %d",x,y);
    variableSwapper(&x, &y);
    printf("\nPost - Swap : %d %d",x,y);
}
void variableSwapper(int* x, int* y){
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
