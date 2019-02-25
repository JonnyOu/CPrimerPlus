// File Name: count.c
// Author: JonnyOu
// Created Time: Thu 21 Feb 2019 11:49:42 PM  

#include <stdio.h>
#include <stdlib.h> //提供exit()函数的原型

int main(int argc, char *argv[]){
    int ch; //读取文件时存储字符串的地方
    FILE *fp; //"文件指针"
    unsigned long count = 0;
    if (argc != 2) {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout); //与putchar(ch);相同
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", argv[1], count);
    return 0 ;
}
