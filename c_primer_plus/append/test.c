// File Name: append.c
// Author: JonnyOu
// Created Time: Fri 22 Feb 2019 02:17:20 PM CST

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81

char * s_gets(char * st, int n);


int main(void){
    char st[SLEN];
    
    while (s_gets(st, BUFSIZE)  && st[0] != '\0') {
        printf("%s\n", st);
    }
    /*
    while (scanf("%s", st) && st[0] != '\0') {
        printf("%s", st);
    }
    */
}

char * s_gets(char * st, int n) {
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n'); //查找换行付
        if (find)  //如果存在换行符
            *find = '\0';
        /*
        else
            while (getchar() != '\n')
                continue;
        */    
    }
    return ret_val;
}




