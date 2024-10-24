#include <stdio.h>
//rotate it 90 degrees
void main(){
    char matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    printf("This is the initial matrix.\n");
    // Symmetrical exchange 
    // output should be
    // 1 4 7
    // 2 5 8
    // 3 6 9
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
        }
    }
    for (int i = 0; i < 3; i++){
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][2];
        matrix[i][2] = temp;
    }
    // 0&2th Transposition (?)
    // output should be
    // 7 4 1
    // 8 5 2
    // 9 6 3
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    printf("This is the final matrix.");
}
