#include<stdio.h>
main()
{
  int y;
 printf("enter the number\n");
 scanf("%d",&y);
 if( y%400==0)
 printf("this is a leap year");
 else
 if(y%4==0 && y%100!=0)
 printf("this is a leap year");
 else
 printf("this is not a leap year");
}
