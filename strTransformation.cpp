#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter the String 1 and String 2\n";
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    if(l1<=l2)
        for(int i=0; i<l2;i++)
        {
            if((int)s1[i]!=(int)s2[i])
                s2[i]=s1[i];
        }
    else 
        cout<<"The length of the s1 is greater than s2\n ";
    
    cout<<"The modified string:"<<s2;
    return 0;
}