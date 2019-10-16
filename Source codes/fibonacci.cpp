//write a C++program to print the fibonacci sequence about to a given range.
#include<iostream>
using namespace std;
main()
{
int n,i,a=1,b,c;
cout<<"enter the number upto ehich series is to be printed: ";
cin>>n;
cout<<"required fibonacci series is: ";
for(i=0;i<=n;i++)
{  
	c=a+b;
	cout<<c<<"+";
	a=b;
	b=c;
}
return(0);	
}
