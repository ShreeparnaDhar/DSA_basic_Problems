#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int cursum=0;
     int maxsum=0;
     
for(int i=0;i<n;i++)
{
     
       cursum+=a[i];
        
        if(cursum>maxsum)
                 maxsum = cursum;

         if(cursum<=0)

                    cursum=0;


}
        
       cout<<"the maxsum is"<<maxsum ;


       
 }






