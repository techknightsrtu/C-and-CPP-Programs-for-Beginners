#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, j, a[]={1, 4, 7, 8, 10}, b[]={2, 3, 9}, temp, k;
	for(i=0; i<5; i++)
	{
		j=0;
		if(a[i] > b[j])
		{
			temp = a[i];
			a[i] = b[j];
			b[j] = temp;
			j++;
			while(j<3 && temp > b[j])
			{
				b[j-1] = b[j++];
			}
			b[j-1] = temp;
		}
	}	
	
	for(i=0; i<5; i++)	
		cout<<a[i]<<" ";
	cout<<"\n";
	for(j=0; j<3; j++)	
		cout<<b[j]<<" ";
	return 0;
}
