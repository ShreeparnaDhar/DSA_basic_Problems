#include<bits/stdc++.h>
using namespace std;                                                          
int main()
{  int t;
cin>>t;
 while(t--){
   int n,k;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++)
    {
      cin>>a[i];

    }
    sort(a,a+n);
   int ans =a[n-1]-a[0];
   int smallest=a[0]+k;
   int largest =a[n-1]-k;
   
       for(int i=0;i<n-1;i++)
       {
      int mi = min(smallest,(a[i+1]+k));
      int mx = max(largest,(a[i]-k));
    
      if(mi<0) continue;
       
   if(ans>mx-mi) 
   {ans = mx-mi;
    cout<<ans;
    //break;
       }
       
   
       }


   }
 

}



