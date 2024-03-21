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
    ll cnt = 0;
    while(r<m)
    {
        while(l<n && v1[l]<v2[r])
        {
            cnt++;
            l++;
        }
            r++;
        cout<<cnt<<" ";
    }
    cout<<endl;
    return 0;
}
