#include <stdio.h>

// Prints a matrix of any given size (rows x cols)
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Free Memory
void freeVector(int* vec) {
    free(vec);
}