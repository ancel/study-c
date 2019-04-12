#include <stdio.h>

int main()
{
    int var = 20; //实际变量声明
    int *ip;//指针变量申明,*号表明该变量是一个指针，p为该指针变量的名字，对指针赋值的时候要使用p=地址，取指针变量指向的地址存储的值时需要用*p
    int arr[10];
    arr[0] = 1;
    int *arrPointer;

    ip = &var;//在指针变量中存储var的地址
    arrPointer = arr;
    printf("address of var:%p\n", &var);
    printf("address stored in ip:%p\n", ip);//指针变量中存储的地址
    printf("address of *ip:%d\n", *ip);//使用指针访问到的值
    printf("%p\n", &arr);
    printf("%p\n", arrPointer);
    printf("%p\n", *arrPointer);
    printf("%d\n", arrPointer[0]);
}

