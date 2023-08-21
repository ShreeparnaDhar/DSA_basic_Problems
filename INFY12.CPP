#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int n1=0,n2=1,n3=0;
   
//cout<<n1<<endl<<n2<<endl;
    for(int i=0;i<n;i++)
    { 
    n3=n1+n2;
   //  cout<<n3<<endl;
    n1=n2;
    n2=n3;

    }
    cout<<n3<<endl;
    

}