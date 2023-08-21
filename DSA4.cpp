#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution{
    public:
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    // finding the pivot element and partition the array along that
    int randomPartition(int arr[], int l, int r)
    {
        int n = r-l+1;
        int pivot = rand() % n;
        swap(&arr[l + pivot], &arr[r]);
        return partition(arr, l, r);
    }
    int kthSmallest(int arr[], int l, int r, int k)
    {
        // If k is smaller than number of elements in array
        if (k > 0 && k <= r - l + 1)
        {
            // find a position for random partition
            int pos = randomPartition(arr, l, r);
            
            // if this pos gives the kth smallest element, then return
            if (pos-l == k-1)
                return arr[pos];
                
            // else recurse for the left and right half accordingly
            if (pos-l > k-1)  
                return kthSmallest(arr, l, pos-1, k);
            return kthSmallest(arr, pos+1, r, k-pos+l-1);
        }
    
        return INT_MAX;
    }
     
    // partitioning the array along the pivot
    int partition(int arr[], int l, int r)
    {
        int x = arr[r], i = l;
        for (int j = l; j <= r - 1; j++)
        {
            if (arr[j] <= x)
            {
                swap(&arr[i], &arr[j]);
                i++;
            }
        }
        swap(&arr[i], &arr[r]);
        return i;
    }
    
};
int main()
{
 int t;
 cout<<"enter the value of t";
 cin>>t;
   while (t--)
   {
      int n;
      
      cout<<"enter the value of n";
      
      cin>>n;
      int arr[n];

    
    for (int i=0; i<n; i++)
    
        cin>>arr[i];

    int k;
    cout<<"enter the value of k";
    cin>>k;
    Solution ob;
    cout<<ob.kthSmallest(arr,0,n-1,k);




   }



}
