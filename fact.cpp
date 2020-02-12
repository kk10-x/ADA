#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
		return 1;
	return n*fact(n-1);
}
int main()
{
	int n;
	cout<<"Enter N:";
	cin>>n;
	int t=fact(n);
	cout<<t<<"\n";
	return 0;
}

