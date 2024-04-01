#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        int ans = v[n-1]-v[0];
        for(int i=0;i<n-1;i++)
        ans = max(ans,v[n-1]-v[i]);
        for(int i=1;i<n;i++)
        ans = max(ans,v[i]-v[0]);
        for(int i=1;i<n;i++)
        ans = max(ans,v[i-1]-v[i]);
        cout<<ans<<endl;
    }
    return 0;
}
