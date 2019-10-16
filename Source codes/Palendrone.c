#include<iostream>
#include<string.h>
using namespace std;
void palendrome(char a[], int);
main()
{
	char a[100];
	cout<<"enter the string: \n";
	gets(a);
	int size=strlen(a);
	palendrome(a, size);
}
void palendrome(char a[], int x)
{
	int i,j,f=0;
	for(i=0,j=x-1;i<j;i++,j--)
	{
		if(a[i]==a[j])
		continue;
		else
		f=1;
    }
    if(f==1)
    cout<<"\n Not palendrome";
    else
    cout<<"\n palendrome";
}
