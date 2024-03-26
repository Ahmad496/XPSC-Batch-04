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
        string a,b;
        cin>>a>>b;
        bool ok = 1;
        for(int i=0;i<n;i++)
        {
            if((a[i] == b[i]) || ((a[i] == 'G')&&(b[i] == 'B'))||(a[i] == 'B')&&(b[i] == 'G'))
            continue;
            else
            {
                cout<<"NO"<<endl;
                ok = 0;
                break;
            }
        }
        if(ok)
            cout<<"YES"<<endl;
    }
    return 0;
}
