#include <stdio.h>
#include <math.h>
#include "utils.c"

// Sum of Vectors
int* sumVectors(int size, int vec1[size], int vec2[size]) {
    int* result = malloc(size * sizeof(int));
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    for (int i = 0; i < size; ++i) {
        result[i] = vec1[i] + vec2[i];
    }
    return result;
}

int* subVectors(int size, int vec1[size], int vec2[size]) {
    int* result = malloc(size * sizeof(int));
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    for (int i = 0; i < size; ++i) {
        result[i] = vec1[i] - vec2[i];
    }
    return result;
}

int magnitude(int size, int vec[size]){
    if (size < 1){
        return vec[0];
    }
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += vec[i]*vec[i];
    }
    
    sqrt(sum);
}

int unitVector(int size , int vec[size]){
    int unit[size];
    int mag = magnitude(size, vec);
    for (int i = 0; i < size; i++)
    {
        unit[i] = vec[i]/ mag;
    }
    return unit;
}

