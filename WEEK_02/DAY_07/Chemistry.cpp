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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int cntOdd = 0,cntEven = 0;
        for(auto u:mp)
        {
            if((u.second)%2 == 0)
            cntEven++;
            else
            cntOdd++;
        }
        if(cntOdd>(k+1))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}
