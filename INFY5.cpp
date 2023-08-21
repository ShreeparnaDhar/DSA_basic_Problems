#include<bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    for(int i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        
            return 0;
        
            return 1;
}
}
int main()
{
   int a,b;
   cin>>a>>b;
  // int num=0;
   for(int i=a;i<=b;i++)
   {    
       if(isPrime(i))
       {
           cout<<i<<endl;
       }
       
           //cout<<num<<endl;
      
   }
   
   

}