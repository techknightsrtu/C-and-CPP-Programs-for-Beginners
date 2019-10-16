#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char str[30];
	int i,l=0;
	cout<<"Enter a string: ";
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		l++;
	}
	cout<<"Number of words in string: "<<l+1;
}
