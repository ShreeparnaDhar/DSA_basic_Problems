#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
        fibo(n-1);
        

    }
}
int main(){
    int n;
    cout<<"enter a no";
    cin>>n;
    cout<<"0"<<" "<<"1"<<" ";
    fibo(n-2);
    return 0;

}