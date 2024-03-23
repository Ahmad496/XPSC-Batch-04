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
    string ans = "Timur";
    sort(ans.begin(),ans.end());
    while(tc--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(ans == s)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
