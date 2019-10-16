#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int n,i;
	float sum=1,t=1,x;
	cout<<"Enter the angle in degrees: ";
	cin>>x;
	x=x*3.14159/180;
	for(i=1;i<=10;i++)
	{
		t=(t*(-1)*x*x)/(2*i*(2*i-1));
		sum=sum+t;
	}
	cout<<"value of sin("<<x<<")="<<setprecision(4)<<sum;
}
