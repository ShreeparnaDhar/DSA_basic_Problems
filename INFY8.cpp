#include<bits/stdc++.h>
using namespace std;
int main()
{     
    int t;
    cin>>t;
    while(t--)
    {
    int n,r=0,rev=0;
    cin>>n;
    int temp=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;

    }
    if(temp==rev)
    cout<<"palidrome"<<endl;
    else
    cout<<"not palidrome"<<endl;
    }
    
}