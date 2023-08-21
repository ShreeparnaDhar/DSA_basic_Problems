#include<bits/stdc++.h>
using namespace std;
int merge(int a[],int b[],int n,int m)
{
    int i=0;
    while(a[n-1]>b[0])
    {
        if(a[i]>b[0])
        {
            swap(a[i],b[0]);
            sort(a,a+m);
        }
        i++;
    }
    for (int i = 0; i < n; i++)
        cout << a[i]<<" ";

    //cout << endl;

    for (int i = 0; i < m; i++)
        cout << b[i] << " ";
}

int main()
{
    int n,m;
    cin>>n>>m;
    int ar1[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar1[i];
    }
    int ar2[m];
    for(int i=0;i<m;i++)
    {
        cin>>ar2[i];
    }
    merge(ar1,ar2,n,m);
    //cout<<"After merging the first Array";
    
    return 0;

}