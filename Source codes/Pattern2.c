#include<stdio.h>
main() {
	int n,i,j,k,g,m=1;
	printf("Enter the number of star rows: ");
	scanf(" %d",&n);
	printf("\n\n");
	for(i=1;i<=n;i++) {
	    for(j=0;j<2;j++) 
	        k=2*m;
	    for(g=0;g<k;g++)
	        printf("* ");	
	    printf("\n");
            m++;
        }
}
