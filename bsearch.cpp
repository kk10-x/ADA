#include<bits/stdc++.h> 
using namespace std; 
int first(int arr[], int low, int high, int x, int n) 
{ 
    if(high >= low) 
    { 
        int mid = low + (high - low)/2; 
        if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x) 
            return mid; 
        else if(x > arr[mid]) 
            return first(arr, (mid + 1), high, x, n); 
        else
            return first(arr, low, (mid -1), x, n); 
    } 
    return -1; 
} 
int last(int arr[], int low, int high, int x, int n) 
{ 
    if (high >= low) 
    { 
        int mid = low + (high - low)/2; 
        if (( mid == n-1 || x < arr[mid+1]) && arr[mid] == x) 
            return mid; 
        else if (x < arr[mid]) 
            return last(arr, low, (mid -1), x, n); 
        else
            return last(arr, (mid + 1), high, x, n); 
    } 
    return -1; 
} 
int main() 
{
    int n;
    cout<<"enter the length of the array \n";
    cin>>n;
    cout<<"enter the array element \n";
    int arr[n];
    for(int i=0;i<n;i++)
	cin>>arr[i]; 
    cout<<"enter the search element \n";
    int x;
    cin>>x; 
    int f=first(arr, 0, n-1, x, n);
    int l= last(arr, 0, n-1, x, n);
    cout<<"First Occurrence ="<<f<<"\n";
    cout<<"\nLast Occurrence ="<<l<<"\n";
    int c=(l-f)+1; 
    cout<<"\ncount :"<<c<<"\n";
    return 0; 
} 
