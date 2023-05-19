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
        string s;
        cin>>n>>s;
        map<string,int> ans;
        for(int i=0;i<n-1;i++)
        {
             string sh;
            sh+=s[i];
            sh+=s[i+1];
            ans[sh]++;


        }
        cout<<ans.size()<<endl;
    }

    
    
    return 0;
}