#include<stdio.h>
main()
{
int a,n,c;
scanf("%d",&n);
c=0;
	while(n>0)
	{
		a=n%10;
		n=(n-a)/10;
		c++;
	}
	printf("%d",c);
}
