// File Name: assert.c
// Author: JonnyOu
// Created Time: Sun 24 Feb 2019 12:48:50 PM CST

#include <stdio.h>
#include <math.h>
#include <assert.h>

int main(){

    double x, y, z;
    
    puts("Enter a pair of numbers (0 0 tp quit): ");
    while (scanf("%lf%lf", &x, &y) == 2) {
        z = x * x - y * y;
        assert(z >= 0);
        printf("answer is %f\n", sqrt(z));
        puts("Next pair of numbers: ");
    }

    return 0 ;
}


