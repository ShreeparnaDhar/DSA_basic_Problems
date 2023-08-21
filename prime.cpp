#include<iostream>
using namespace std;
int main(){
    int n,flag=0;
    cout<<"enter a no";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<"number is not prime";
            flag++;
            break;
        }
        if(flag==0){
            cout<<"prime no";
            return 0;
        }
    }
}