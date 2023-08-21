#include<bits/stdc++.h>
using namespace std;
void reverseArray(int a[],int start, int end)
{
    while(start<end)
    {
        swap(a[start],a[end]);
        /*int temp=a[start];
        a[start]=a[end];
        a[end]=temp;*/
        start++;
        end--;
    }
}
    void printArray(int a[],int n)
    {
   for(int i=0;i<n ;i++)
   { cout<< a[i];}
   }





int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
     cin>>arr[i] ;
  }
reverseArray(arr,0,n-1);
printArray(arr,n);


}