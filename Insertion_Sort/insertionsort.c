// File Name: insertionsort.c
// Author: JonnyOu
// Created Time: Mon 25 Feb 2019 04:59:58 PM CST

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "insertionsort.h" 

void InsertSort(void * base, size_t nelem, size_t width, int (*Comp)(const void * , const void *)) {

    int i, j;
    char * p = (char *)base; //获取
    void * key;

    for (i = 1; i < nelem; i++) {

        j = i - 1;
        key = (void *)(p + i * width); //key指向当前遍历的第i个元素
        char * ptr = (char *)malloc(sizeof(char) * width); //申请一个原数组元素空间，sizeof(char)本身占一个字节空间，与width相乘得到原数组元素的大小
        memcpy(ptr, (p + i * width), width);//memcpy(void * dest, const void * src, size_t n); 将第二个指针指向的空间的n个元素赋值给第一个指针指向的空间
        
        while (j >= 0 && Comp((void *)(p + j * width), key)) {
            
            memcpy((p + (j + 1) * width), (p + j * width), width);
            j--;
        
        } 

        memcpy((p + (j + 1) * width), ptr, width);
    }
}


int CharComp(const void * a, const void * b) {
    char * n = (char *)a;
    char * m = (char *)b;

    if (*n > *m) return 1;
    else return 0;
}

int IntComp(const void * a, const void * b) {
    int * n = (int *)a;
    int * m = (int *)b;

    if (*n > *m) return 1;
    else return 0;
}


int DouComp(const void * a, const void * b) {
    double * n = (double *)a;
    double * m = (double *)b;

    if (*n > *m) return 1;
    else return 0;
}






