// File Name: fun_poin_test.c
// Author: JonnyOu
// Created Time: Sat 23 Feb 2019 11:22:53 AM CST

/*
 *函数指针测试示例
 *
 * */




#include <stdio.h>


int fun_poin(int (*fp)(int , int ), int , int ); //函数指针类型与需要调用的函数类型一致，即返回类型(int)与参数列表(int, int)一致
int add(int , int );
int sub(int , int );

int main(){
    int a = 4;
    int b = 1;
    int c = 2;

    printf("%d\n", fun_poin(add, a, b)); //传入需要调用的函数名 
    printf("%d\n", fun_poin(sub, a, c));

    return 0 ;
}

int fun_poin(int (* fp)(int , int ), int a, int b) {
    return (* fp)(a, b); //根据传入的参数，此时(* fp)等价于需要调用的函数名, 与fp(a, b);语句一致，矛盾的和谐！
}

int add(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}
