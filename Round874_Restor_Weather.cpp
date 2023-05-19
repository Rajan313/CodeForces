#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int k;
       cin>>k;
       vector<int> a(n,0);
       vector<int> b(n,0);
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
       }
       for(int i=0;i<n;i++)
       {
        cin>>b[i];
       }

       map<int,vector<int>> ans;
       vector<int> temp=a;
    
       sort(temp.begin(),temp.end());
       sort(b.begin(),b.end());
      for(int i=0;i<n;i++)
       ans[temp[i]].push_back(b[i]);
      

      for(int i=0;i<n;i++)
      {
        auto k=ans.find(a[i]);
        cout<<k->second[k->second.size()-1]<<" ";
        k->second.pop_back();
      }
      cout<<endl;
     }

    
    
    return 0;
}