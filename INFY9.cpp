#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,amr=0;
        cin>>n;
        int temp=n;
        while(n>0)
        {
           r=n%10;
           amr+=r*r*r;
           n=n/10;
        }
        if(temp==amr)
        cout<<"amtrom"<<endl;
        else
        cout<<"not amstrom"<<endl;
    }
}