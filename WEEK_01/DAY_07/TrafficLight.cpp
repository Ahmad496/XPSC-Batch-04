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
        char ch;
        cin>>ch;
        string s;
        cin>>s;
        s +=s;
        int ans = 0,last = 0;
       for(int i = 2*n;i>=0;i--)
       {
          if(s[i] == 'g')
              last = i;
         if(s[i] == ch)
         ans = max(ans,last - i);
       }
       cout<<ans<<endl;
    }
    return 0;
}
