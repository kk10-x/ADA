#include<iostream>
using namespace std;
void selsort(int arr[],int n)
{
	int min,k=0,i=0,j=0,temp;
	for(j=0;j<n;j++)
	{
		min=j;
		for(i=j+1;i<n;i++)
		{
			if(arr[i]<=arr[min])
			{
				min=i;
			}
		}
		temp=arr[min];
		arr[min]=arr[j];
		arr[j]=temp;
	}
	return;
}
int main()
{
	int n;
	cout<<"Enter the size of the array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	selsort(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}
