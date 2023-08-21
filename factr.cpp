#include<bits/stdc++.h>
using namespace std;
int fact(int a){
    int s=0;
    if(a<0)
    return -1;
    if(a==0 || a==1)
    return 1;
    else
 s= a*fact(a-1);
     return s;
}
int main(){
    int n,f=1;
    cout<<"enter a no";
    cin>>n;
    f=fact(n);
    cout<<f;
    return 0;
}
