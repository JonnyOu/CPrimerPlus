/* 2019.2.25 17:07
 *
 *
 * 要求:实现一个排序函数，这个排序函数可以对任意类型的数据进行排序，包括自定义结构
 *
 * 思路:该排序函数用插入排序实现，仿照c语言的sort()函数，通过主调函数传入待排序数据的类型进行确认，
 *      没种类型的值都要重写相应的compare函数。
 *
 *
 *
 */
#include <stdio.h>

void InsertSort(void * , size_t , size_t , int (*Comp)(const void * , const void * ));


int CharComp(const void * , const void * );

int IntComp(const void * , const void * );

int DouComp(const void *, const void * );

