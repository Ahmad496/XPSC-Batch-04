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
        ll n,ans = 0;
        cin>>n;
        while(n>=1)
        {
            ans +=n;
            n /=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
