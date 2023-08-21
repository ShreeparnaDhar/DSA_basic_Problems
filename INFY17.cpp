#include<bits/stdc++.h>
using namespace std;
/*finding prime factor of a number*/
int main()
{
    int x;
    cin>>x;
    int c=2;
    while(x>1)
    {
        if(x%c==0)
       { cout<<c<<endl;
       x=x/c;
       }
      else c++;
    }
    
}