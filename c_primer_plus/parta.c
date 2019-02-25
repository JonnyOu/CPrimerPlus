// File Name: parta.c
// Author: xiaxiaosheng
// Created Time: Wed 30 Jan 2019 10:27:48 AM CST

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void report_count();
void accumulate(int k);
int count = 0;

int main(){
    int value;
    register int i;

    printf("Enter a positive integer (0 to quit):");
    while (scanf("%d", &value) == 1 && value > 0) {
        ++count;
        for (i = value; i >= 0; i--)
            accumulate(i);
        printf("Enter a positive integer (0 to quit):");
    }
    report_count();

    return 0 ;
}

void report_count() {
    printf("Loop executed %d times\n", count);
}
