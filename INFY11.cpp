#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int arm=0;
    int temp=0;
    for(int i=a;i<=b;i++)
    {
        int r=0;
        int s=0;
        temp=i;
    while(i>0)
    {
        r=temp%10;
        s+=r*r*r;
        temp=temp/10;
    }
    
    if(i==s)
    cout<< s<<endl;
    }
    
    //cout<<arm<<endl;
}