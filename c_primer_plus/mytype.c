// File Name: mytype.c
// Author: JonnyOu
// Created Time: Sun 24 Feb 2019 10:44:32 AM CST

#include <stdio.h>

#define MYTYPE(X) _Generic((X), \
    int: "int",\
    float: 2,\
    double: 3,\
    default: "other"\
)

int main(void){
    int x = 5;
    printf("%s\n", MYTYPE(x));
    printf("%d\n", MYTYPE(0.2*x));
    printf("%s\n", MYTYPE(2L));
    printf("%d\n", MYTYPE(x));

    return 0 ;
}
