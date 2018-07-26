#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter the Number of elements";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//selection sort
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	//printing
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
