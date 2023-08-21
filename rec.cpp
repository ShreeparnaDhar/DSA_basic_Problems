#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f=1;
    cout<<"enter a no";
    cin>>n;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    cout<<f;
    return 0;

    }
