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
        map<int,int>mp;
        int mx = -1;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            mp[val]++;
            mx = max(mx,mp[val]);
        }
        // cout<<mx<<endl;
        if(mx == n)
        {
            cout<<0<<endl;
            continue;
        }
        int dcost = 0,ecost = 0,totalcost = 0;
        while(mx<n)
        {
            dcost +=1;
            if(2*mx <=n)
            {
                ecost +=mx;
                mx *=2;
            }
            else
            {
                ecost +=(n-mx);
                mx *=2;
            }
            totalcost +=(ecost+dcost);
            dcost = 0;
            ecost = 0;

        }
        cout<<totalcost<<endl;
    }
    return 0;
}
