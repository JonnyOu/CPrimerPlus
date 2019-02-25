// File Name: variadic.c
// Author: JonnyOu
// Created Time: Sat 23 Feb 2019 08:27:54 PM CST

#include <stdio.h>
#include <math.h>
# define PR(X, ...) printf("Message " #X ": " __VA_ARGS__)

int main(void){
    double x = 48;
    double y = 7;

    PR(1, "x = %g\n", x);
    PR(2, "x = %.2f, y = %.4f\n", x, y);

    return 0 ;
}
