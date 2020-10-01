#include<stdio.h>
main() {
	int i,j,k,n;
	printf("Enter the number of rows to be printed: ");
	scanf(" %d",&n);
	for(i=1;i<=n;i++) {
	    for(j=0;j<=n-i;j++)
	        printf(" ");
	    for(k=1;k<=(2*i);k++)
		printf("%d", i);
	    printf("\n");
	}
}
