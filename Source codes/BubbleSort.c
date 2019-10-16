#include<iostream>
using namespace std;
main()
{
int a[6],i,j,b;
cout<<"enter the elements in the array\n";
for(i=0;i<6;i++)
{
cin>>a[i];	
 }
 for(i=0;i<6;i++)
 { for(j=0;j<6;j++)
 { if(a[j]>a[j+1])
 { b=a[j+1];
 a[j+1]=a[j];
 a[j]=b;
 }}
 } cout<<"sorted array is\n";
 for(i=0;i<6;i++)
 {
cout<<a[i]<<"\n";
 } 
 return(0);
 } 
