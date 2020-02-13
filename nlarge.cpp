#include<iostream>
using namespace std;
void klarge(int arr[],int n,int max,int k)
{
	int i,j,min=0;
	while(k>0)
	{
		cout<<max;
		k--;
		for(i=0;i<n;i++)
		{
			if(arr[i]>max)
				max=arr[i];
			else if(arr[i]<min)
				min=arr[i];
			else
			{
				cout<<"There are no more large elements\n";
				return;
			}
		}
	}
}
int main()
{
	int n;
	cout<<"Enter the size of the array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the array element\n";
	int max=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]<max)
			max=arr[i];
	}
	cout<<"How many large elements do you wanna print?\n";
	int k=0;
	cin>>k;
	klarge(arr,n,max,k);
	return 0;
}
