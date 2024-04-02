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
        vector<vector<int>>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                int val;
                cin>>val;
                v[i].push_back(val);
            }

        }
        for(int i=0;i<n;i++)
        mp[v[i][0]]++;
        int a,b;
        for(pair<int,int>u:mp)
        {
            if(u.second>1)
            a=u.first;
            if(u.second == 1)
            b = u.first;
        }
        cout<<a<<" ";
        bool flag = 0;
        for(int i=0;i<n;i++)
        {
            if(v[i][0] == b)
            {
               for(int j=0;j<n-1;j++)
               cout<<v[i][j]<<" ";
               flag = 1;
            }
            if(flag)
            break;
        }
      cout<<endl;
    }
    return 0;
}
