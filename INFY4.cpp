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
        if(n==1 || n==0)
            cout<<-1;
        
        
        int count=0;
       
        for(int i=2;i<(n);++i)
        {
            

            
            if(n%i==0)
            {
                //cout<<"not a prime"<<endl;
                count++;
                break;
               
            }
           // i++;
        }
        if(count==0)
        cout<<"prime";
        else
        cout<<"not prime";
    }
}