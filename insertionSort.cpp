#include<iostream>
using namespace std;
int main()
{
    int i,n,value,hole;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        value=a[i];
        hole=i;
        while(hole>0 && a[hole-1]>value)
        {
            a[hole]=a[hole-1];
            hole--;
        }
        a[hole]=value;
    }
    for(int i=0;i<n;i++)
    {
     cout<<a[i];
}

}
