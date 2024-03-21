#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
int main()
{
    optimize();
    int n,m;
    cin>>n>>m;
    vector<int>v1(n),v2(m);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    for(int i=0;i<m;i++)
    cin>>v2[i];
    ll l=0,r=0;
    ll ans = 0;
    while(l<n && r<m)
    {
        ll cnt1 = 0,cnt2 = 0, cur = v1[l];
        while(l<n && v1[l] == cur)
        {
            cnt1++;
            l++;
        }
        while(cur>v2[r])
            r++;
        while(r<m && v2[r] == cur)
        {
            cnt2++;
            r++;
        }
        ans +=(cnt1*cnt2);
    }
    cout<<ans<<endl;
    return 0;
}
