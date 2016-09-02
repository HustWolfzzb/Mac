//
//  main.c
//  Cdesign
//
//  Created by 张照博 on 16/9/1.
//  Copyright © 2016年 apple. All rights reserved.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//C语言程序设计经典100例－－第一例

//int main ()
//{
//
//    int i,j,k;
//    for(i=1;i<5;i++)
//    {
//        for (j=1; j<5; j++)//三重循环
//        {
//            for (k=1; k<5; k++)
//            {
//                if(i!=k&&i!=j&&j!=k)//确保组合出来的三个数字不同
//                    printf("difficultnumber in 1234:%d%d%d \n\n",i,j,k);
//                    };
//
//        };
//};
//}


//C语言程序设计经典100例－－第二例
//int main ()
//{
////
////    double i;
////    double bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
////    printf("你的净利润是：\n");
////    scanf("%lf",&i);
////    bonus1=100000*0.1;
////    bonus2=bonus1+100000*0.075;
////    bonus4=bonus2+200000*0.05;
////    bonus6=bonus4+200000*0.03;
////    bonus10=bonus6+400000*0.015;
////    if(i<=100000) {
////        bonus=i*0.1;
////    } else if(i<=200000) {
////        bonus=bonus1+(i-100000)*0.075;
////    } else if(i<=400000) {
////        bonus=bonus2+(i-200000)*0.05;
////    } else if(i<=600000) {
////        bonus=bonus4+(i-400000)*0.03;
////    } else if(i<=1000000) {
////        bonus=bonus6+(i-600000)*0.015;
////    } else if(i>1000000) {
////        bonus=bonus10+(i-1000000)*0.01;
////    }
////    printf("提成为：bonus=%lf",bonus);
////
////    printf("\n");
//


//自己想出来的哦！！！！！
//    int i;
//    printf("你的净利润是：\n");
//    scanf("%d",&i);
//
//
//    int job = 0;
//
//    if (i<10000&&i>0)
//    {
//        job=1;
//    }
//    if(i>10000&&i<20000)
//    {
//        job=2;
//    }
//  if(i>20000)
//    {
//        job=3;
//    }
//
//
//    switch (job)
//    {
//        case 1:
//            printf("your bouns is:%f just normal\n",i*0.1);
//            break;
//        case 2:
//            printf("your bouns is:%f pretty good\n",1000+(i-10000)*0.05);
//            break;
//         case 3:
//            printf("you bouns is:%f so nice\n",1500+(i-20000)*0.06);
//            break;
//        default:
//            printf("fuck,what have you done? a ha ?\n");
//            break;
//    }
//
//}
