#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"Enter the no. of socks:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the colours of socks:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr + n);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				i++;
				break;
			}
		}
	}
	cout<<count;
	return 0;
}
