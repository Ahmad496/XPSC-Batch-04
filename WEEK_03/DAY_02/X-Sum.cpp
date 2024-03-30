#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
ll a[205][205];
ll solve(int i,int j,ll a[][205],int n,int m)
{
    ll ans = 0;
      for(int s=i,t=j;(s>=0 && t<m);s--,t++)
      {
          ans +=a[s][t];
      }
      for(int s=i-1,t=j-1;(s>=0&&t>=0);s--,t--)
      {
          ans +=a[s][t];
      }
      for(int s=i+1,t=j-1;(s<n&&t>=0);s++,t--)
      {
          ans +=a[s][t];
      }
      for(int s=i+1,t=j+1;(s<n && t<m);s++,t++)
      {
          ans +=a[s][t];
      }
   return ans;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        ll ans=-1;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cin>>a[i][j];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
           {
            ans = max(ans,solve(i,j,a,n,m));
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}
