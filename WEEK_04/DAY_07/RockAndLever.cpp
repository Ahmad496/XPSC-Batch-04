#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
            int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    mp[__lg(a[i])]++;
    long long ans = 0;
    for(auto u:mp)
    {
        ans +=(1LL*(u.second)*(u.second-1))/2;
    }
    cout<<ans<<endl;
    }
    return 0;
}