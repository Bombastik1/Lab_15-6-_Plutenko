﻿#include <stdio.h> 
#include <limits.h> 
#include <locale>  
int main() {
    setlocale(LC_ALL, "");
    int n;
    int i;
    printf("Введiть кiлькiсть елементiв масиву: ");
    scanf_s("%d", &n);
    int* array = (int*)malloc(n * sizeof(int));
    if (n > 10) {
        for (i = 0; i < n; i++) {
            array[i] = rand() % 100;
            printf("%d ", array[i]);
        }
        printf("\n");
    }
    else {
        printf("Введiть елементи масиву:\n");
        for (i = 0; i < n; i++) {
            scanf_s("%d", &array[i]);
        }
    }

    int* max = array;
    int* min = array;

    for (i = 1; i < n; i++) {
        if (array[i] > *max) {
            max = &array[i];
        }
        if (array[i] < *min) {
            min = &array[i];
        }
    }

    printf("Максимальне значення: %d \n", *max);
    printf("Мiнiмальне значення: %d \n", *min);
}