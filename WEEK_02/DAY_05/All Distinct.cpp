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
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            s.insert(val);
        }
        int ans = n - s.size();
        if(ans%2 == 0)
        cout<<s.size()<<endl;
        else
        cout<<s.size()-1<<endl;
    }
    return 0;
}
