// File Name: strgets.c
// Author: JonnyOu
// Created Time: Sun 24 Feb 2019 03:02:11 PM CST

#include <stdio.h>
#include <string.h>
#include "strgets.h"

char * s_gets(char * st, int n) {

    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find) 
            *find = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }
}
