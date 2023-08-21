#include<bits/stdc++.h>
using namespace std;

void MergeTwoArray(int a[],int b[],int m,int n)
{
    for(int i=0;i<m;i++)
        
        {
            if(a[i]>b[0])
            swap(a[i],b[0]);

            for(int j=1;j<n && b[j-1]>b[j];j++)
            swap(b[j-1],b[j]);

        }
 for(int i=0;i<m;i++)
     cout<<a[i];
     for(int i=0;i<n;i++)
     cout<<b[i];






}
int main()
{   
    int m,n;;
    cin>>m>>n;
    int a[m];
    int b[n];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
 for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

MergeTwoArray(a,b,m,n);
}






