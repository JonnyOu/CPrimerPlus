// File Name: binbit.c
// Author: JonnyOu
// Created Time: Sat 23 Feb 2019 04:59:52 PM CST

#include <stdio.h>
#include <limits.h> //提供CHAR_BIT的定义，CHAR_BIT表示每个字节的位数
char * itobs(int, char *);
void show_bstr(const char *);

int main(void){
    char bin_str[CHAR_BIT * sizeof(int) +1]; 
    int number;
    
    while (scanf("%d", &number) == 1) {
        itobs(number, bin_str);
        printf("%d is ", number);
        show_bstr(bin_str);
        putchar('\n');
    }
    return 0 ;
}

char * itobs(int number, char * str) {
    const static int size = CHAR_BIT * sizeof(int);
    int i;

    for (i = size - 1; i >= 0; i--, number >>= 1) 
        str[i] = '0' + (1 & number);
    str[size] = '\0';

    return str;
}

void show_bstr(const char * str) {
    int i = 0;

    while (str[i]) {
        putchar(str[i]);
        if (++i % 4 == 0 && str[i])
            putchar(' ');
    }
}
