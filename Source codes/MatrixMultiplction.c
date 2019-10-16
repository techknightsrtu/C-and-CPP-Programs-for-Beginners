#include<stdio.h>
main()
{
	int a[10][10], b[10][10],c[10][10],i,j,k, r1,c1,r2,c2;
	printf("enter the rows and columns of matrix1");
	scanf("%d%d", &r1, &c1);
	printf("enter the elments of first matrix");
	for(i=0;i<r1;i++)
	{for(j=0;j<c1;j++)
	{scanf("%d", &a[i][j]);
	}
	}
	printf("enter the rows and columns of matrix2");
	scanf("%d%d",&r2, &c1);
	printf("enter the values of second matrix");
	for(i=0;i<r1;i++)
	{for(j=0;j<c1;j++)
	{scanf("%d", &b[i][j]);
	}
	}
	if(c1!=r2)
	printf("not eligible");
	else
	{
		for(i=0;i<r1;i++)
		{for(j=0;j<c2;j++)
		{c[i][j]=0;
		for(k=0;k<r2;k++)
		{
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
			printf("%d",&c[i][j]);
		}
		}
		}
	}
}
