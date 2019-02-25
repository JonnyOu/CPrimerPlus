// File Name: films.c
// Author: JonnyOu
// Created Time: Sun 24 Feb 2019 03:01:21 PM CST

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "strgets.h"

#define TSIZE 45

struct film {
    char title[TSIZE];
    int rating;
    struct film * next;
};

int main(void){

    struct film * head = NULL;
    struct film * prev, *current;
    char input[TSIZE];

    puts("Enter first movie title:");
    while (s_gets(input, TSIZE) != NULL && input[0] != '\0') {
        current = (struct film *)malloc(sizeof(struct film));
        if (head == NULL)
            head = current;
        else 
            prev->next = current;
        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating <0-10>:");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to stop):");
        prev = current;
    }

    //打印列表
    if (head == NULL)
        puts("No data entered.");
    else 
        puts("Here is the movie list:\n");
    current = head;
    while (current != NULL) {
        printf("Movie: %s    Rating: %d\n", current->title, current->rating);
        current = current->next;
    }

    //释放内存
    current = head;
    while (current->next != NULL) {
        
        current = head;
        head = current->next;
        free(current);
    }
    free(current);
    puts("Have a good time!");
        
    return 0 ;
}


