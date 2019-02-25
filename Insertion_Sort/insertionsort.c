// File Name: insertionsort.c
// Author: JonnyOu
// Created Time: Mon 25 Feb 2019 04:59:58 PM CST

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "insertionsort.h"

void InsertSort(void * base, size_t nelem, size_t width, int (*Comp)(const void * , const void *)) {
    
    int i, j;
    char * p = (char *)base;
    void * key;

    for (i = 1; i < nelem; i++) {

        j = i - 1;
        key = (void *)(p + i * width);
        char * ptr = (char *)malloc(sizeof(char) * width);
        memcpy(ptr, (p + i * width), width);
        
        while (j >= 0 && Comp((void *)(p + j * width), key)) {
            
            memcpy((p + (j + 1) * width), (p + j * width), width);
            j--;
        
        } 

        memcpy((p + (j + 1) * width), ptr, width);
    }
}

int IntComp(const void * a, const void * b) {
    int * n = (int *)a;
    int * m = (int *)b;

    printf("%d %d\n", *n, *m);

    if (*n > *m) return 1;
    else return 0;
}
