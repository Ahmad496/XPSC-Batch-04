#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
int main()
{
    optimize();
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=1;i<n;i++)
    {
        int val;
        cin>>val;
        mp[val]++;
    }
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        if(mp[i] == 0)
        {
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
