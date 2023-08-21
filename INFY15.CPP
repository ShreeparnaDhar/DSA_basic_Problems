#include<bits/stdc++.h>
using namespace std;
/*Factor of a number*/
int fact(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
   {
       f*=i;
   }
   return f;
}
int main()
{
    int n;
    cin>>n;
    int sum=0;
    sum=fact(n);
    cout<<sum<<endl;

}