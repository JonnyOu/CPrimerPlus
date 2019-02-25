// File Name: for99.c
// Author: xiaxiaosheng
// Created Time: Sun 27 Jan 2019 03:22:58 PM CST

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
    int n = 8;
    printf("Initially, n = %d at %p\n", n, &n);
    for (int n = 1; n < 3; n++) 
        printf(" loop 1: n = %d at %p\n", n, &n);
    printf("After loop 1, n = %d at %p\n", n, &n);
    for (int n = 1; n < 3; n++) {
        printf(" loop 2 intdex n = %d at %p\n", n, &n);
        int n = 6;
        printf(" loop 2: n = %d at %p\n", n, &n);
    }
    printf("After loop 2, n = %d at %p\n", n, &n);
    return 0 ;
 }
