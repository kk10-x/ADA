#include<vector>
#include<iostream>
using namespace std;
int max(int n1,int n2){ return (n1>n2)?n1:n2;}
int ks(int w,vector<int> wts,vector<int> val,int n)
{
    if(n==0||w==0) return 0;
    if(wts[n-1]>w) return ks(w,wts,val,n-1);
    else return max(val[n-1]+ks(w-wts[n-1],wts,val,n-1),ks(w,wts,val,n-1));
}
int main(void)
{
    cout<<"Enter the number of objects and the size of the sack\n";
    vector<int> wts,val;
    int n,w,temp;
    cin>>n>>w;
    cout<<"enter the Weights of the object\n";
    for(auto i=0;i<n;i++)
    {
        cin>>temp;wts.push_back(temp);
    }    
    cout<<"Enter the Values of the Weights\n";
    for(auto i=0;i<n;i++)
    {
        cout<<wts[i]<<" = ";
        cin>>temp;val.push_back(temp);
    }
    cout<<ks(w,wts,val,n);
}
