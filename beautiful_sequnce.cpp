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
        bool flag=false;
        int a[n];
        for(int i=0;i<n;i++){
         cin>>a[i];
         if(a[i]<=(i+1))
           flag=true;
           
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return -1;
}