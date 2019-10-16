#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("enter the number of rows to be printed: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
	    printf(" ");
		{
			for(k=1;k<=i;k++)
			if(i<10)
			printf(" %d ", i);
			else
			printf("%d ", i);
		}
		printf("\n");
	}
}
