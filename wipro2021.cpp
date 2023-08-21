#include<iostream>
using namespace std;

int main ()
{
  int i,j,n,sum=0,p;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  for(int i=0;i<n;i++)

   {
      j=2;
      p=0;
      while(j<arr[i])
      {
       if(arr[i]%j==0)
       {
           p=1;
           sum+=arr[i];
           break;

       }
       j++;
      }
      if(p==0)
      cout<<arr[i];



      }
      cout<<"sum of non prime numbers"<<sum ;

}
