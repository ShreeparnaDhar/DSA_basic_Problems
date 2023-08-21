#include<iostream>
using namespace std;
int main()
{
    int n,leader=0,sum=0;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
  
    for(int i=1;i<n;i++)
    {
        int cur=a[i];
        int j=i-1;
        while(a[j]>cur && j>=0)
        {
            sum+=a[j];
            j++;
        }

    }
    cout<<sum+a[n-1]<<" ";
    return 0;
}
