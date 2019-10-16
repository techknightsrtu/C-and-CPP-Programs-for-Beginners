#include<iostream>
using namespace std;
main()
{
	int a[10],i,n,s;
	int *p;
	cout<<"Enter the number of elements to be entered: ";
	cin>>n;
	cout<<"Enter the elements of array: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	p=a;
	cout<<"Enter the elements to be search: ";
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(*(p+i)==s)
	{
		cout<<"Element found at position: "<<i+1<<endl;
		break;
	}
	}
	if(i==n)
		cout<<"Element not found...search unsuccesfull!!";	
}
