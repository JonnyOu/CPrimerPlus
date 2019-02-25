// File Name: predef.c
// Author: JonnyOu
// Created Time: Sun 24 Feb 2019 10:10:41 AM CST

#include <stdio.h>
void why_me();

#if __STDC_VERSION__ != 201112L
#error Not C11
#endif  

int main(){
    printf("%s\n", __FILE__ );
    printf("%s\n", __DATE__ );
    printf("%s\n", __TIME__ );
    printf("%ld\n", __STDC_VERSION__ );
    printf("%d\n", __LINE__ );
    printf("%s\n", __func__ );
    why_me();

    return 0 ;
}

void why_me() {
    printf("%s\n", __func__ );
    printf("%d\n", __LINE__ );
}
