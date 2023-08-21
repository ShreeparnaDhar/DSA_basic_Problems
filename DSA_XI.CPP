#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {

      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];

      }

      int dp[n];
      for(int i=0;i<n;i++)
      {
          dp[0]=0;
          dp[i]= INT_MAX;
          for(int i=1;i<n;i++)
          {
              for(int j=0;j<i;j++)
              {
                  if(dp[j]!=INT_MAX and dp[j]+j>=i )
                  {
                      if(dp[j]+1<dp[i])
                      {
                          dp[i]=dp[j]+1;
                      }
                  }

              }
             return -1;  
          }
         if(dp[n-1]!=INT_MAX) 
         cout<<dp[n-1]<<endl;
         else cout<<-1;
      }

   }
}