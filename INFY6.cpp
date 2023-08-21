#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r=0;
    cin>>n;
    int sum=0;
    while(n>0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    cout<<sum<<endl;
}