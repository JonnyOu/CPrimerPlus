// File Name: diceroll.c
// Author: JonnyOu
// Created Time: Wed 30 Jan 2019 11:39:24 AM CST

/*rolldice.h -- 投骰子模拟程序*/

#include "diceroll.h"
#include <stdio.h>
#include <stdlib.h>

int roll_count = 0;

static int rollem(int sides) {
    int roll;

    roll = rand() % sides +1;
    ++roll_count;

    return roll;
}

int roll_n_dice(int dice, int sides) {
    int d, times;
    int total = 0;
    if (sides < 2) {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if (dice < 1) {
        printf("Need at least 1 dice.\n");
        return -1;
    }

    printf("Every times result:");
    for (d = 0; d < dice; d++) {
        times = rollem(sides);
        printf("%d ", times);
        total += times;
    }
    printf("\n");
    return total;
}

