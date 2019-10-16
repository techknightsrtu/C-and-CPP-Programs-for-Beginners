#include<iostream>
using namespace std;
void Bsearch(int a[], int l, int u,int m, int se);
main()
{ 
	int a[5],se,l=0,u=10,i,m;
	cout<<"enter the elements of array\n";
	for(i=0;i<5;i++)
		cin>>a[i];
	cout<<"enter the searching element:\n";	
	cin>>se;
	Bsearch(a,l,u,m,se);
}
void Bsearch(int a[], int l, int u, int m, int se)
{
	if(l<=u)
	{
		m=(l+u)/2;
		if(se==a[m])
			cout<<"the element is found at position"<<m+1;
		else if(se<a[m])
		{
			u=m-1;
			Bsearch(a,m,l,u,se);
		}
		else
		{
			m=l+1;
			Bsearch(a,m,l,u,se);
		}
	}
	else 
		cout<<"Element not found";
}
