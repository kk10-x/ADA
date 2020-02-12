#include<iostream>
using namespace std;
void toh(int n,char fr,char tr,char ar)
{
	if(n==1)
	{
		cout<<"\n move disk 1 from rod "<<fr<<" to rod "<<tr<<"\n";
		return;
	}
	toh(n-1,fr,ar,tr);
	cout<<"\n move disk "<<n<<" from rod "<<fr<<" to rod "<<tr<<"\n";
	toh(n-1,ar,tr,fr);
}
int main()
{
	int n;
	cout<<"enter the number of disks\n";
	cin>>n;
	toh(n,'A','C','B');
	return 0;
}
