#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{     
    if(n<0)
   n=-n;
   
    for(int i=2;i*i<=(n);i++)
    {
        if(n%i==0)
        {
             return false;
        }
        
    }
    return true;
}
int main()
{
     int a,b;
     int sum=0;
     cin>>a>>b;
     for(int i=a;i<=b;++i)
     {
         if(isPrime(i)==true)
         sum+=i;
         
     }
     cout<<sum<<endl;
}