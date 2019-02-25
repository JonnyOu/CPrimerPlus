// File Name: partb.c
// Author: xiaxiaosheng
// Created Time: Wed 30 Jan 2019 10:32:48 AM CST

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

extern int count;

static int total = 0;
void accumulate(int k);

void accumulate(int k) {
    static int subtotal = 0;

    if (k <= 0) {
        printf("loop cycle: %d\n", count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal = 0;
    } 
    else {
        subtotal += k;
        total += k;
    }
}
