#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
int main()
{
    optimize();
    // int ans = 'a'-97;
    // cout<<ans<<endl;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int m,n;
        cin>>m>>n;
        vector<string>v(m);
        // while(m--)
        // {
        //     string s;
        //     cin>>s;
        //     v.push_back(s);
        // }
        for(int i=0;i<m;i++)
        cin>>v[i];
         string a = v[0];
        string b = v[1];
        int ans = 0;
        for(int i=0;i<n;i++)
        {
           ans +=abs(a[i]-b[i]);
        }
        for(int i=0;i<m;i++)
        {
            string a = v[i];
            for(int j=i+1;j<m;j++)
            {
              string b = v[j];
              int ans2 = 0;
              for(int k=0;k<n;k++)
              {
                ans2 +=abs(a[k]-b[k]);
              }
              ans = min(ans,ans2);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
