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
        vector<string>a;
        set<string>s;
        for(int i=0;i<n;i++)
        {
            string s1;
            cin>>s1;
            a.push_back(s1);
            s.insert(s1);
        }
        int ans[n];
        for(int i=0;i<n;i++)
        {
            string ss = a[i];
            int sz = ss.size();
            bool flag = false;
            for(int j=0;j<sz;j++)
            {
                string tmp1 = ss.substr(0,j);
                string tmp2 = ss.substr(j,sz-j);
                if(s.count(tmp1) && s.count(tmp2))
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
            ans[i] = 1;
            else
            ans[i] = 0;
        }
        for(int i=0;i<n;i++)
        cout<<ans[i];
        cout<<endl;
    }
    return 0;
}
