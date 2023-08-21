#include<bits/stdc++.h>

using namespace std;
/*
int main()
{

   int t;
   cin>>t;
   while(t--)
   {

       int n,m;
       cin>>n>>m;
       int a[n],b[m];
       unordered_map<int,int>mp;

       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           mp[a[i]]++;
       }


 for(int i=0;i<m;i++)
       {
           cin>>b[i];
           mp[b[i]]++;
       }


cout<<endl<<mp.size()<<endl;










   }
}*/


   int main()
   {
     int set1[]={3,4,1,7,2,9};
     int set2[]={22,2,4,11,33,3};
     sort(set1, set1+ 6);
     sort(set2, set2+ 6);
     vector<int>v(12);
     vector<int>::iterator it;
     it = set_union(set1,set1+6,set2,set2+6,v.begin());
     
    v.resize(it-v.begin());
     cout<<"size is"<<"  "<<(v.size())<<endl;

for(it=v.begin();it!=v.end();++it)
cout<<*it;

it = set_intersection(set1,set1+6,set2,set2+6,v.begin());
v.resize(it-v.begin());
cout<<endl<<"size is"<<"  "<<(v.size())<<endl;
for(it=v.begin();it!=v.end();++it)
cout<<*it;




   }
/*   using namespace std;
int main () {
   int set1[] = {5,6,7,8,9,10};
   int set2[] = {1,2,3,4,6,7};
   vector<int> v(10);
   vector<int>::iterator st;
   sort (set1, set1 + 6);
   sort (set2, set2 + 6);
   st = set_union(set1, set1 + 6, set2, set2 + 6, v.begin());
   v.resize(st - v.begin());
   cout<<"The union between the sets has "<< (v.size())<< " elements: "<<endl;
   for (st = v.begin(); st != v.end(); ++st)
      cout<< *st<<" ";
   cout <<endl;
   return 0;
}
*/








