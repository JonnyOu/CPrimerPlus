// File Name: enumtest.c
// Author: JonnyOu
// Created Time: Fri 22 Feb 2019 09:20:05 PM CST

#include <stdio.h>

int main(){
    enum spectrum {red, orange, yellow, green, blue, violet};
   // enum spectrum color;

    int c;
    int color = yellow;
    if (color == yellow)
        printf("yellow = %d\n", color);
    for (color = red; color <= violet; color++) {
        printf("color = %d\n", color);
    }
    printf("red = %d\n", red);
    return 0 ;
}
