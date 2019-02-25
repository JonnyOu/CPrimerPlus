// File Name: r_drive0.c
// Author: JonnyOu
// Created Time: Wed 30 Jan 2019 11:04:25 AM CST

/*r_drive0.c -- 测试rand0()函数*/
/*与rand0.c 一起编译*/

#include<stdio.h>
extern unsigned int rand0(void);

int main(){
    int count;

    for (count = 0; count < 5; count++)
        printf("%d\n", rand0());
    return 0 ;
}
