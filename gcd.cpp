#include<iostream>
using namespace std;
void gcd(int m,int n)
{
	if(n==0)
	{
		cout<<"the GCD is"<<m<<"\n";
		return;
	}
	gcd(n,m%n);
}
int main()
{
	int m,n;
	cout<<"Enter the 2 numbers whose GCD is to be found \n";
	cin>>m>>n;
	gcd(m,n);
	return 0;
}

