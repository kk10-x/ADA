#include<iostream>
using namespace std;
void bubsort(int arr[],int n)
{
	int i,j,temp;
	int m=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		m--;
	}
	return;
}

void out(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return;
}
int main()
{
	int n;
	cout<<"Enter the array size\n";
	cin>>n;
	cout<<"enter the array elements\n";
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	bubsort(arr,n);
	cout<<"the sorted array is"<<"\n";
	out(arr,n);
	cout<<"\n";
	return 0;
}
