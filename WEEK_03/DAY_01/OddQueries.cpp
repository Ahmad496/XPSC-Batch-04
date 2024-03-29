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
        int n,q;
        cin>>n>>q;
         ll arr[n+1];
        arr[0] = 0;
        for(int i=1;i<=n;i++)
        cin>>arr[i];
        for(int i=1;i<=n;i++)
        arr[i] +=arr[i-1];
        while(q--)
        {
        int l,r,k;
        cin>>l>>r>>k;
        ll diff = r-l+1;
        ll a = diff*k;
        if(a%2 == 0)
        a = 0;
        else
        a = 1;
        ll b = arr[l-1];
        if(b%2 == 0)
        b = 0;
        else
        b = 1;
        ll c = arr[n] - arr[r];
        if(c%2 == 0)
        c = 0;
        else
        c = 1;
        if((a+b+c)%2 == 0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        }

    }
    return 0;
}
