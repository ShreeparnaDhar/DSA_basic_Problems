#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        int TH,TC,T;
        cin>>TH>>TC>>T;
        for(int i=0;i<=T;i++)
        {
        TH-=1;
        TC+=2;
        }
        if(TC==TH)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"yes";
        }

    
}