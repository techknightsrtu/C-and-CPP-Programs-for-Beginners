#include<stdio.h>
main()
{
  int a,b,c=0;
 printf("enter the number\n");
 scanf("%d",&a);
 int d=a;
 while(a>0)
 {
 	b=a%10;
 	c=c*10+b;
 	a=(a-b)/10;
 }
 printf("reverse of number is=%d\n",c);
 int e=d-c;
 printf("the difference between original and reverse is %d",e);
}
 
