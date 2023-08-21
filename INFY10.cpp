#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int r=0;
            //int amr=0;
        for(int i=a;i<=b;i++)
        {
            int temp=i;
            int amr=0;
            while(i!=0)
        {
           r=i%10;
           amr+=r*r*r;
           i=i/10;
        }
        if(temp==amr)
        cout<<amr<<" ";
        }
        
        
        


    }
    
           

}