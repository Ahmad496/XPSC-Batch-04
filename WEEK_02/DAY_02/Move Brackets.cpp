#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
                st.push(s[i]);
            else
            {
                if(!st.empty())
                {
                    if(st.top()=='(')
                        st.pop();
                    else
                        cnt++;
                }
                else
                    cnt++;
            }
        }
        int tmp = st.size();
        int ans = tmp+cnt;
        cout<<ans/2<<endl;
    }
    return 0;
}
