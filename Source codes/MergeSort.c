#include<stdio.h>
void m_sort(int a[],int low,int high);
void merge(int a[],int low,int mid,int mid1,int high);
int main()
{
	int n,i,a[30];
	printf("enter no of elements : ");
	scanf("%d",&n);
	printf("\nenter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m_sort(a,0,n-1);
	printf("\nsorted array : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void m_sort(int a[],int low,int high)
{
	int mid;
	if(high>low)
  {
	mid=(low+high)/2;
	m_sort(a,low,mid);
	m_sort(a,mid+1,high);
	merge(a,low,mid,mid+1,high);
   }
}
void merge(int a[],int low,int mid,int mid1,int high)
{
	int temp[50];
	int i,j,k;
	i=low;
	j=mid1;
	k=0;
	while((i<=mid) && (j<=high))
	{
		if(a[i]<a[j])
		temp[k++]=a[i++];
		else
		temp[k++]=a[j++];
	}
	while(i<=mid)
	{
		temp[k++]=a[i++];
	}
	while(j<=high)
	{
		temp[k++]=a[j++];
	}
	for(i=low,j=0;i<=high;i++,j++)
	a[i]=temp[j];
}
