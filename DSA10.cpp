#include<bits/stdc++.h>
using namespace std;

class Solution
{ public:
       int minJumps(int arr[], int n) 
{
      if(n<=1) return 0;
      if(arr[0]==0) return -1;

      int maxReach =arr[0];
      int jump=1;
      int step= arr[0];

         for(int i=0;i<n;i++)
         {
               if(i==n-1)
               return jump;

               maxReach=max(maxReach,i+arr[i]);
               step--;

     if(step==0)
     {
          jump++;
          if(i>=maxReach)
          return -1;
          step=maxReach-i;
     }





         }


return -1;

}
}
;

int main()
{

int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];

}
     Solution obj;
     
     cout<<endl<<obj.minJumps(a,n);
}
}