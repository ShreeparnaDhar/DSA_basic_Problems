#include<bits/stdc++.h>
using namespace std;
int getzeros(int num )
{
  int count =0;

 for(int i=5;(num/i)>0;i=i*5)
 {
      count+=(num/i);

 }
 return count;


}


int main()
{
  int t; 
  cout<<"enter the value of t";
    cin>>t;
    int n;
    while(t--)
    {
      
      cin>>n;
      cout<<getzeros(n)<<endl ;

    }
    
}

