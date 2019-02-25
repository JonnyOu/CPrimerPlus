// File Name: statasrt.c
// Author: JonnyOu
// Created Time: Sun 24 Feb 2019 12:55:18 PM CST

#include <stdio.h>
#include <limits.h>
_Static_assert(CHAR_BIT == 16, "16-bit char falsely assumed");

int main(void){
    puts("char is 16 bits.");
    return 0 ;
}
