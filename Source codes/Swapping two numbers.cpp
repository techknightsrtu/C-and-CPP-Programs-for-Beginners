#include<iostream>
using namespace std;
main()
{
	void swap(int *,int*);
	void swap(int &,int &);
	int a,b,i;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	while(1)
	{
		cout<<"\nEnter 1 for address swap and 2 for reference swap: ";
		cin>>i;
		switch(i)
		{
			case 1: swap(&a,&b);
			break;
			case 2: swap(a,b);
			break;
			default: cout<<"\nINVALID CHOICE\n";
		}
	 } 
}
void swap(int *x,int *y)
{
	int z;
	z= *x;
	*x= *y;
	*y= z;
	cout<<*x<<" "<<*y<<endl;
}
void swap(int &x,int &y)
{
	int z;
	z=x;
	z=y;
	y=z;
	cout<<x<<" "<<y<<endl;
}
