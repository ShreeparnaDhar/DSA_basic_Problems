#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int sum=0;
   int f=1;
   for(int i=1;i<=n;i++)
   {
      f*=i;
   }
   cout<<f<<endl;
}