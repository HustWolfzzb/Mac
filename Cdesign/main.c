//
//  main.c
//  Cdesign
//
//  Created by 张照博 on 16/9/1.
//  Copyright © 2016年 apple. All rights reserved.
//
#include <stdio.h>
void swap(int *x,int *y);

int main ()
{
    int a=1,b=3,i;
    for(i=0;i<10;i++)
    {
        swap(&a, &b);
    printf("a,b:%d,%d\n",a,b);
    };
        return 0;
};

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
