#include<bits/stdc++.h>
using namespace std;

int main()
{
 int N,R;
 cin>>N>>R;
 int s=0;

  int i=0;
  while(i<R)
  {
  
    
      s+=((N/10)+(N%10));
      i++;
  }
 
cout<<s;


}