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
    while(l<n && r<m)
    {
        if(v1[l]<=v2[r])
        {
            cout<<v1[l]<<" ";
            l++;
        }
        else
        {
            cout<<v2[r]<<" ";
            r++;
        }
    }
     if(l == n && r!=m)
        {
            for(int i=r;i<m;i++)
            {
                cout<<v2[i]<<" ";
                r++;
            }
        }
        else
        {
            for(int i=l;i<n;i++)
            {
                cout<<v1[i]<<" ";
                l++;
            }
        }
    return 0;
}
