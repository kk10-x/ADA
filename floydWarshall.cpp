#include<iostream>
#include<vector>
using namespace std;
int min(int a,int b){return (a>b)?b:a;}
vector<vector<int>> fw(vector<vector<int>> vec,int n)
{
    for(auto k=0;k<n;k++)
        for(auto i=0;i<n;i++)
            for(auto j=0;j<n;j++)
                vec[i][j]=min(vec[i][j],vec[i][k]+vec[k][j]);
    return vec;
}
void print(vector<vector<int>> vec,int n)
{
    cout<<"So the shortest distance from all vertices is:\n";
    for(auto i=0;i<n;i++)
    {
        for(auto j=0;j<n;j++)
            cout<<vec[i][j]<<" ";
        cout<<"\n";
    }
}
vector<vector<int>> putem_in(vector<vector<int>> vec,int n)
{
    cout<<"Enter your numbers \nEnter 9999 for infinity \n";int x;
    for(auto i=0;i<n;i++)
        for(auto j=0;j<n;j++)
        {
            cin>>x;
            vec[i][j]=x;
        }return vec;
}
int main(void)
{
    cout<<"Enter the order of the square matrix\n";
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int> (n));
    vec=putem_in(vec,n);
    vec=fw(vec,n);
    print(vec,n);
}