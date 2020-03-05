#include<iostream>

using namespace std;
void distance(int,int);
int a[10][10];
int main()
{
int i,j,n;
cout<<"\n enter the number of vertices in the diagraph:";
cin>>n;
cout<<"\n enter the adjacency matrix\n";
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
cin>>a[i][j];
for(i=1;i<=n;i++)
{
cout<<"\n the starting vertex is \n"<<i;
distance(i,n);
cout<<"\n\t press enter for other source vertex\n";
}
return 0;
}
void distance(int v,int n)
{
int queue[40],visited[20],dis[20],front,rear,i,j;
for(i=1;i<=n;i++)
visited[i]=dis[i]=0;
front=rear=0;
queue[rear++]=v;
visited[v]=1;
do
{
i=queue[front++];
for(j=1;j<=n;j++)
if(a[i][j]&&!visited[j])
{
dis[j]=dis[i]+1;
queue[rear++]=j;
visited[j]=1;
cout<<"\n\t the vertex"<<v<<" to "<<j<<" is of distance="<<dis[j]<<"\n";
}
}
while(front<rear);
}
