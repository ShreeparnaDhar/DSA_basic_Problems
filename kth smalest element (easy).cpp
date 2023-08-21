#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
 int t,n;
 cout<<"enter hoe many times you want to run it";

 cin>>t;

 while(t--)
 {
     int n;
     cout<<"enter the numbers";
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
       cin>>arr[i];
      }
int k;
cout<<"Enter the value of k";
cin>>k;
priority_queue<int>q;
for(int i=0;i<n;i++)
{
    q.push(arr[i]);
    if(q.size()>k)
    
    q.pop();
    }
    cout<<q.top();

}



 

return 0;


};