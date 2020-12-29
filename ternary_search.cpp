#include<iostream>
using namespace std;

int main()
{
	int tot,i,arr[100],l,r,mid1,mid2,key;
	cout<<"WELCOME TO TERNARY SEARCH\n\nenter size of array:\n";
	cin>>tot;
	cout<<"\nenter elements into array:\n";
	for(i=0;i<tot;i++)
	cin>>arr[i];
	l=0;
	r=tot-1;
	mid1=l+(r-l)/3;
	mid2=r-(r-l)/3;
	cout<<"enter key to find:\n";
	cin>>key;
	if(key<mid1)
	{
		for (i=0;i<mid1;i++)
		if(arr[i]==key)
		{
			cout<<"key is found";
			exit(0);
		}
	}
	else if(key==mid1||key==mid2)
	{
		cout<<"\n key is found";
		exit(0);
	}
	else if(key>mid2)
	{
		for (i=mid2;i<tot;i++)
		if(arr[i]==key)
		{
			cout<<"key is found";
			exit(0);
		}
	} 
	else
	{
		for (i=mid1+1;i<mid2;i++)
		if(arr[i]==key)
		{
			cout<<"key is found";
			exit(0);
		}
	}
	return 0;
}
