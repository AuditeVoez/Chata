```Write a program that will ask the user the size of the array and the elements (double) of the array. Show the elements of the array and calculate the average of the positive elements only.

Requirements:

1. The function, getNumber, does not have parameters but has a return type.
2. The function contains only a scanf() that gets the elements of the array.
3. The do-while loop statements to call the function and to show the elements of the array must be within the main().
```

```c
#include <stdio.h> 
double getNumber();

void main(){
    int x;
    printf("How many numbers? ");
    scanf("%d", &x);
    double array[x];
    int iterations = 0;
    printf("Input the array elements\n");
    do{
        printf("[%d] = ", iterations);
        array[iterations] = getNumber();
        iterations++;
    } while(iterations < x);
    
    printf("\nArray elements:\n");
    
    iterations = 0;
    do{
      printf("[%d] = %.2lf\n", iterations, array[iterations]);
      iterations++;
    } while(iterations < x);
        iterations = 0;
        int posiCounter = 0;
        double average = 0;
    do{
        if(array[iterations] > 0){
            average += array[iterations];
            posiCounter++;
        }
        iterations++;
    } while( iterations < x);
    
    printf("\nAverage of %d positive numbers is %.2lf", posiCounter, (average/posiCounter));
}

double getNumber(){
    double x;
    scanf("%lf", &x);
    return x;
}
```


