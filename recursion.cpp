#include<bits/stdc++.h>
using namespace std;
int sum(int a){
    int s;
    if(a==1)
    return (a);
    s=a+sum(a-1);
    return(s);
}
int main(){
    int n,k=0;
    cout<<"enter a no";
    cin>>n;
    k=sum(n);
    cout<<"sum of n natural no is"<<k;
    return 0;


}
