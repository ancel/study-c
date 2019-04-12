#include <stdio.h>

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap2(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}



/*
 * c语言传递的都是值，指针类型传递的值为其地址
 */
int main()
{
    int a=3, b=4;
    swap(a, b);
    printf("a=%d,b=%d\n", a, b);
    swap2(&a, &b);
    printf("a=%d,b=%d\n", a, b);
}

