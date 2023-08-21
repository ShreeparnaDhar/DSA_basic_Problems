#include<bits/stdc++.h>>
using namespace std;

int main()
{
 int N,R;
 cin>>N>>R;
 int s=0;

  for(int i=0;i<R;i++)
  {

    
      s+=((N/10)+(N%10));
      i++;
  }
 cout<<s;



}