#include<iostream>
using namespace std;
int main()
{
	int n,i,j,count=0;
	cin>>n;
	int a[n],b[n];
	//insertion in array
	for(i=0;i<n;i++)
	{
		cout<<"Enter element in 1st array : ";
		cin>>a[i];
		cout<<"Enter element in 2nd array : ";
		cin>>b[i];
	}
	//checking for duplicates in same arrays
	//sorting array1
		for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(int k=0;k<n;k++)
				{
					a[k-1]=a[k];
				}
				n--;
			}
		}
	//sorting array2
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(b[i]==b[j])
				{
					for(int k=0;k<n;k++)
				{
					b[k-1]=b[k];
				}
				n--;
				}
			}
		}
	
	//checking for duplicates in two arrays
	cout<<"duplicate elements: ";
	for(i=0;i<n;i++){
		int flag=0;
		for(j=0;j<n;j++)
		{
		if(a[i]==b[j])
		{
			flag=1;
			
		}
		}
		if(flag==1)
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<"Distinct Element are : ";
	for(i=0;i<n;i++)
	{
		int flag=0;
		for(j=0;j<n;j++)
		{
		
		if(a[i]==b[j])
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<a[i]<<" ";
	}
	
	}
	for(i=0;i<n;i++)
	{
		int flag=0;
		for(j=0;j<n;j++)
		{
		
		if(a[i]==b[j])
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<a[i]<<" ";
	}
	
	}
}}
	
	

