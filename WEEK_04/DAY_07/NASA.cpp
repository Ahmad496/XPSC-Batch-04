#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
int main()
{
    optimize();
    
    vector<int>all_palindrome;
    for(int i=0;i<(1<<15);i++)
    {
        string s = to_string(i);
        int len = s.size();
        bool ck = 1;
        for(int i=0;i<(len/2);i++)
        {
            if(s[i]!=s[len-i-1])
            {
                ck=0;
                break;
            }
        }
        if(ck)
        all_palindrome.push_back(i);
    }
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>cnt(1<<15),a;
        
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            cnt[x]++;
            a.push_back(x);
        }
        ll ans = n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<all_palindrome.size();j++)
            {
                int val = a[i]^all_palindrome[j];
                ans +=cnt[val];
            }
        }
        cout<<(ans/2)<<endl;
    }
    return 0;
}
 
