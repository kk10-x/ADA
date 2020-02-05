#include<iostream>
using namespace std;
void lsearch(int arr[],int ele,int i)
{
	if(arr[i]==ele)
	{
		cout<<"element found at"<<i+1<<"\n";
		return;
	}
	lsearch(arr,ele,i+1);
	return;
}
void in(int arr[],int n)
{
	cout<<"enter the array elements \n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	return;
}
int main()
{
	int n,ele;
	cout<<"enter the length of the array \n";
	cin>>n;
	int arr[n];
	in(arr,n);
	cout<<"enter the element to be secrhed \n";
	cin>>ele;
	lsearch(arr,ele,0);
	return 0;
}
