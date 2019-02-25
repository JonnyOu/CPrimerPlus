// File Name: test.c
// Author: JonnyOu
// Created Time: Mon 25 Feb 2019 06:22:20 PM CST

#include <stdio.h>
#include "insertionsort.h"

int main(){
    
    int a[] = {2, 1, 3};

    InsertSort(a, 3, sizeof(int), IntComp);

    for (int i = 0; i < 3; i++) 
        printf("%d ", a[i]);

    return 0 ;
}
