//
//  main.c
//  Cdesign
// 在一个例子里边既有两根横线也有四根横线的那种，四根横线是教程上的例子，两根是我自己琢磨出来的！！！棒棒哒！！！
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


//C语言程序设计经典100例－－第三例
//int main()
//{
//    long int x,y,i;
//    for(i=1;i<100000;i++)
//    {
//        x=sqrt(i+100);
//        y=sqrt(i+268);
//        if (x*x==i+100 && y*y==i+268)
//            {
//                printf("this number is it:%ld\n",i);
//        }
//    }
//}





//C语言程序设计经典100例－－第四例
//
//int main()
//{
//    int year,month,day,leap,sum;
//    printf("please put in the date:");
//    scanf("%d,%d,%d",&year,&month,&day);
//    switch (month) {
//        case 1:sum=0;break;
//        case 2:sum=31;break;
//        case 3:sum=59;break;
//        case 4:sum=90;break;
//        case 5:sum=120;break;
//        case 6:sum=151;break;
//        case 7:sum=181;break;
//        case 8:sum=212;break;
//        case 9:sum=243;break;
//        case 10:sum=273;break;
//        case 11:sum=304;break;
//        case 12:sum=334;break;
//        default:printf("data error");break;
//    };
//    sum=sum+day;
//    if((year%100==0&&year%4==0)|| year%400==0)
//    {
//        leap=1;
//    }
//    else {leap=0;};
//    if(month>2&&leap==1)
//    {sum=sum+1;}
//printf("\ntoday is the %d day in %d year\n\n",sum,year);
//
//}


//C语言程序设计经典100例－－第五例


//
//
////  int main()
////{
////    int x,y,z,t;
////    printf("\n请输入三个数字:\n");
////    scanf("%d%d%d",&x,&y,&z);
////    if (x>y) { /*交换x,y的值*/
////        t=x;x=y;y=t;
////    }
////    if(x>z) { /*交换x,z的值*/
////        t=z;z=x;x=t;
////    }
////    if(y>z) { /*交换z,y的值*/
////        t=y;y=z;z=t;
////    }
////    printf("从小到大排序: %d %d %d\n",x,y,z);
////}
//
//
//
//
//int sort(int *,int *,int *);
//int swap(int *a,int *b);
//
//int main()
//{
//    int x,y,z;
//    printf("choose three number:");
//    scanf("%d%d%d",&x,&y,&z);
//    sort(&x,&y,&z);
//    printf("sort of xyz is:%d,%d,%d\n",x,y,z);
//
//};
//
//
//int swap(int *a,int *b)
//{
//
//    int temp;
//    temp=*a;
//    *a=*b;
//    *b=temp;
//    return 0;
//
//};
//
//int sort(int *x,int *y,int *z)
//{
//    if(*x>=*y)
//    {
//        swap(x,y);
//    };
//
//
//        if (*x<=*z)
//    {
//      if(*y>=*z)
//      {
//          swap(y, z);
//      };
//
//
//    }
//    else
//    swap(z, x);
//
//
//    return 0;
//
//};



//C语言程序设计经典100例－－第六例
//void swap(int *,int *);
//
//int main()
//{
//    int a,b;
////    swap(&a, &b);
////    printf("abcd:%d  %d\n",a,b);
//    printf("come on:");
//    scanf("%d %d",&a,&b);  scanf这个函数需要多看一下，然后还有指针的使用这个梗 ，妈个鸡 弄了老子好久了！！！
//    swap(&a,&b);
//    printf("swap ab:%d %d\n",a,b);
//    return 0;
//
//};
//
//void swap(int *a,int *b)
//{
//    int temp;
//    temp=*a;
//    *a=*b;
//    *b=temp;
//
//};


//
////int main()
////{
////    printf("用 * 号输出字母 C!\n");
////    printf("   ******\n");
////    printf("  *\n");
////    printf(" * \n");
////    printf("  *   ****\n");
////    printf("   ****  *\n");
////    printf("         *\n");
////}

//C语言程序设计经典100例－－第七例  运行失败，因为环境时Mac导致的吧，这个我可是原封不动的直接照搬过来的


//
//int main()
//{
//    char a=176,b=219;
//    printf("%c%c%c%c%c\n",b,a,a,a,b);
//    printf("%c%c%c%c%c\n",a,b,a,b,a);
//    printf("%c%c%c%c%c\n",a,a,b,a,a);
//    printf("%c%c%c%c%c\n",a,b,a,b,a);
//    printf("%c%c%c%c%c\n",b,a,a,a,b);
//    return 0;
//}



//                                C语言程序设计经典100例－－第八例

//
//int main()
//{
//    int i,j;
//    for(i=0;i<10;i++)
//    {
//        for (j=1; j<=i; j++)
//        {
//            printf("%d*%d=%d ",i,j,i*j);
//        }
//        printf("\n");
//
//    }
//
//
////    int main()
////    {
////        int i,j,result;
////        printf("\n");
////        for (i=1;i<10;i++)
////        {
////            for(j=1;j<10;j++)
////            {
////                result=i*j;
////                printf("%d*%d=%-3d",i,j,result); /*-3d表示左对齐，占3位*/
////            }
////            printf("\n"); /*每一行后换行*/
////        }
////    }
////
////}


//                               C语言程序设计经典100例－－第九例 个人改进版本哦！！


//
//    int main()
//    {
//        int i,j;
//        for(i=0;i<8;i++)
//        {
//            for(j=0;j<8;j++)
//                if((i+j)%2!=0)
//                    printf("|||");
//                else printf("   ");
//            printf("\n");
//        }
//        return 0;
//    }




//                               C语言程序设计经典100例－－第十例 个人改进版本哦！！
//int main()
//{
//    int i,j;
//    printf("：D）"); printf(" ：D）\n"); /*输出两个笑脸*/
//    for(i=1;i<11;i++)
//    {
//        for(j=1;j<=i;j++)
//            printf("777");
//        printf("\n");
//    }
//    return 0;
//}



//                               C语言程序设计经典100例－－第十一例

//int main()
//{
//    int f1=1,f2=1,i;
//    for(i=1;i<=20;i++)
//    {
//        printf("%12d  %12d",f1,f2);
//        if(i%2==0) printf("\n");
//        f1=f1+f2;
//        f2=f1+f2;
//    }
//
//    return 0;
//}

//                               C语言程序设计经典100例－－第十二例

//
//int main()
//{
//    int i,j;
//    for (i=101; i<2000; i++)
//    {
//        for (j=2; j<=i; j++)
//        {
//            if( i%j==0)
//
//            break;
//                };
//        if (j>=i)      //这个地方很不解，我就在想。j的取值不是根据j<i来的嘛。那么就算跳出来，j也还是没有脱离i的限制吧，那么为何还会有j>i这个if条件呢？后来龚珏告诉我。原来是只要j==i这个条件，
//        {
//
//         printf("%d 是素数\n",i);
//        }
//
//    };
//}
//
////
////int main()
////{
////    int i,j;
////    int count=0;
////
////    for (i=101; i<=200; i++)
////    {
////        for (j=2; j<i; j++)
////        {
////            // 如果j能被i整除在跳出循环
////            if (i%j==0)
////                break;
////        }
// // 判断循环是否提前跳出，如果j<i说明在2~j之间,i有可整除的数
////        if (j>=i)
////        {
////            count++;
////            printf("%d ",i);
////            // 换行，用count计数，每五个数换行
////            if (count % 5 == 0)
////                printf("\n");
////        }
////    }
////    return 0;
////}






//                               C语言程序设计经典100例－－第十三例

//
//
//int main()
//{
//    int i,x = 0,y = 0,z = 0;
//    for (i=100; i<=999; i++)
//    {
//        x=i%10;
//        y=i/10%10;
//        z=i/100%10;
//
//  //      };     // 嘛蛋 这里for的范围不对。卧槽。但是前面实例十二不就是跳出来之后继续算得嘛，怎么这儿又不一样了？！！wtf  咦，不对，对于循环内的i 不脱离for的时候才是定值哦。
//    if (i==(x*x*x+y*y*y+z*z*z))
//    {
//        printf("%d是水仙数!\n",i);
//    };
//    };
//    return 0;
//
//}
//
//
////
////int main()
////{
////    int i,x,y,z;
////    for(i=100;i<1000;i++)
////    {
////        x=i%10;
////        y=i/10%10;
////        z=i/100%10;
////
////        if(i==(x*x*x+y*y*y+z*z*z))
////            printf("%d\n",i);
////
////    }
////    return 0;
////}





//                               C语言程序设计经典100例－－第十四例

//
// int main()
// {
// 	int i;
//     int n;
// 	printf("请输入你要求的数：\n");
//     scanf("%d",&n);
// 	printf("你所求的数的因式分解：%d=",n);
// 	//另外的思路：
//     
////     for(i = 2; i * i <= n;) {
////         if(n % i == 0) {
////             printf("%d * ", i);
////             n /= i;
////         }
////         else
////             i++;
////     }
//
//     
//     for (i = 2 ; i <=n; i++)//这里出现了一个错误，那就是我没有考虑当i＝n／i的时候，这时候仍然要写进去，但是在for中我又限定了i<n！！
// 	{
//       while(n%i==0)
//        {
//            printf("%d",i);
//            n=n/i;
//            if (n!=1) {
//                printf("*");//这里总共出现过几处错误：首先是用do whlie 而不是while导致错误，然后是关于n/＝放在哪里的问题纠结了一会，
//                      };
//        };
//        
//    };
//     printf("\n");
// 	return 0;
// }

//
////
////  int main()
////  {
////      int n,i;
////      printf("请输入整数：");
////      scanf("%d",&n);
////      printf("%d=",n);
////      for(i=2;i<=n;i++)
////      {
////          while(n%i==0)
////          {
////              printf("%d",i);
////              n/=i;
////              if(n!=1) printf("*");
////          }
////      }
////    
////      printf("\n");
////      return 0;
////  }




//                               C语言程序设计经典100例－－第十五例


// int main(int argc, char const *argv[])
// {
//     int x;
// 	char g;
// 	printf("please put in your number\n");
// 	scanf("%d",&x);
//     g=((x>=90)?'A':((x>60)?'B':'C'));
//// g=(x>90)?A:((x>60)?B:C); 啊 卧槽，忘了char表达的时候要加一个‘’了罪过罪过
//     printf("该生的成绩是：%c\n",g );
//
// 	return 0;
// }

// // int main()
// // {
// //     int score;
// //     char grade;
// //     printf("请输入分数： ");
// //     scanf("%d",&score);
// //     grade=(score>=90)?'A':((score>=60)?'B':'C');
// //     printf("%c\n",grade);
// //     return 0;
// // }



//                               C语言程序设计经典100例－－第十六例  这个算法不怎么想看，过阵子再回来看好了


// int main()
// {
//     int a,b,t,r;
//     printf("请输入两个数字：\n");
//     scanf("%d %d",&a,&b);
//     if(a<b)
//     {t=b;b=a;a=t;}
//     r=a%b;
//     int n=a*b;
//     while(r!=0)
//     {
//         a=b;
//         b=r;
//         r=a%b;
//     }
//     printf("这两个数的最大公约数是%d，最小公倍数是%d\n",b,n/b);
    
//     return 0;
// }




//                               C语言程序设计经典100例－－第十七例



//int main()
//{
//	char c;
//	int letter=0,space=0,digits=0,others=0;
//	printf("write somethng please:\n");
//	while((c=getchar())!='\n')
//	{
//		if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
//		{
//			letter++;
//		}
//		else if (c>='0'&&c<='9')
//		{
//			digits++;
//		}
//		else if (c==' ')
//		{
//			space++;
//		}
//		else others++;
//	};
//	printf("字母=%d,数字=%d,空格=%d,其他=%d\n",letter,digits,space,others);
//	return 0;
//}






//                               C语言程序设计经典100例－－第十八例

//int main()
//{
//    int s=0,a,n,t;
//    printf("请输入 a 和 n：\n");
//    scanf("a=%d,n=%d",&a,&n);
//    t=a;
//    while(n>0)
//    {
//        s+=t;
//        a=a*10;
//        t+=a;
//        n--;
//    }
//    printf("a+aa+...=%d\n",s);
//    return 0;
//}
//


//int main()      //卧槽。 这个一定有问题，找机会要解决掉
//{
//    int a,b,c,d=0;
//    printf("type something:\n");
//scanf("%d,%d",&b,&c);
//  //  b=7;c=6;
//    int f=b;
//    for (; c>0; c--) {
//
//        d+=b;
//        a=b;
//        b+=(10*a);
//    };
//    printf("%d\n",d-f*10);
//    return 0;
//}
//
//

//                               C语言程序设计经典100例－－第十九例

//
//#define N 1000
//int main()
//{
//    int i,j,k,n,sum;
//    int a[256];
//    for(i=2;i<=N;i++)
//    {
//        sum=a[0]=1;
//        k=0;
//        for(j=2;j<=(i/2);j++)
//        {
//            if(i%j==0)
//            {
//                sum+=j;
//                a[++k]=j;
//            }
//            
//        }
//        if(i==sum)
//        {
//            printf("%d=%d",i,a[0]);
//            for(n=1;n<=k;n++)
//                printf("+%d",a[n]);
//            printf("\n");
//        }
//        
//    }
//    return 0;
//}
//

//                               C语言程序设计经典100例－－第二十例




//int main()
//{
//    int n;
//    double sum=100,h=100.0;
//    for (n=2;n<=10; n++)
//    {
//       h/=2;
//        sum+=h*2;
//        printf("h:%f\n",h);
//       
//    };
//    printf("sum:%f\n",sum);
//    return 0;
//    
//}
//
////int main()
////{
////    float h,s;
////    h=s=100;
////    h=h/2; //第一次反弹高度
////    for(int i=2;i<=10;i++)
////    {
////        s=s+2*h;
////        h=h/2;
////    }
////    printf("第10次落地时，共经过%f米，第10次反弹高%f米\n",s,h);
////    return 0;
////}



//                               C语言程序设计经典100例－－第二十一例


//
//int main(){
//    int day, x1 = 0, x2;
//    day=9;
//    x2=1;
//    while(day>0)
//    {
//        x1=(x2+1)*2;  // 第一天的桃子数是第2天桃子数加1后的2倍
//        x2=x1;
//        day--;
//    }
//    printf("总数为 %d\n",x1);
//    
//    return 0;
//}
//



//                               C语言程序设计经典100例－－第二十二例


//int main()
//{
//    char i,j,k;
//    for(i='x';i<='z';i++) {
//        for(j='x';j<='z';j++) {
//            if(i!=j) {
//                for(k='x';k<='z';k++) {
//                    if(i!=k&&j!=k) {
//                        if(i!='x'&&k!='x'&&k!='z') {
//                            printf("顺序为：a--%c\tb--%c\tc--%c\n",i,j,k);
//                        }
//                    }
//                }
//            }
//        }
//    }
//}


//                               C语言程序设计经典100例－－第二十三例



  // 第一层的for 也就是最外面的for控制行数，每当第一层的for的i改变一次就有\n 然后内部的两个for 一个控制空格 一个控制＊的出现，十分精妙，形成互补。两个for各自执行完毕之后分别把结果打在同一行中进行put out
//int main()
//{
//    int i,j,k;
//    for(i=0;i<=10;i++) {
//        for(j=0;j<=9-i;j++) {
//            printf(" ");
//        }
//        for(k=0;k<=2*i;k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for(i=0;i<=9;i++) {
//        for(j=0;j<=i;j++) {
//            printf(" ");
//        }
//        for(k=0;k<=18-2*i;k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    
//}
//                               C语言程序设计经典100例－－第二十四例

//int main()
//{
//    int i,t;
//    float a=1,b=2,sum=0;
//    for (i=0; i<20; i++)
//    {
//        sum=sum+b/a;
//        t=a+b;
//        a=b;
//        b=t;
//    }
//    printf("sum:%f\n",sum);
//    return 0;
//    
//}
//                               C语言程序设计经典100例－－第二十五例
//
////int main()
////{
////    int i;
////    long double sum,mix;
////    sum=0,mix=1;
////    for(i=1;i<=20;i++)
////    {
////        mix=mix*i;
////        sum=sum+mix;
////    }
////    printf("%Lf\n",sum);
////}
//
//
//int main()
//{
//    long double sum=0,mix=1;
//    int i,j;
//    for(i=1;i<=20;i++)
//    {
//        for(j=1;j<=i;j++)
//        {
//            mix=mix*j;
//           
//        };
//        printf("%d的阶乘是：%Lf\n",i,mix);
//        sum=mix+sum;
//        mix=1;
//    };
//    printf("%Lf \n",sum);
//    return 0;
//    
//}
//                               C语言程序设计经典100例－－第二十六例
//                               C语言程序设计经典100例－－第二十七例
//                               C语言程序设计经典100例－－第二十八例
//                               C语言程序设计经典100例－－第二十九例
//                               C语言程序设计经典100例－－第三十例
//                               C语言程序设计经典100例－－第三十一例
//                               C语言程序设计经典100例－－第三十二例
//                               C语言程序设计经典100例－－第三十三例


