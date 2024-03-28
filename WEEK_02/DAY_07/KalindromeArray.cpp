#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
bool solve(vector<int>v)
{
    int i=0,j=v.size()-1;
    while(i<j)
    {
        if(v[i]!=v[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int ans = -1;
        int i=0,j=n-1;
        int val1,val2;
        while(i<j)
        {
            if(a[i]!=a[j])
            {
                ans = 1;
                val1 = a[i];
                val2 = a[j];
                break;
            }
            i++;
            j--;
        }
        if(ans == -1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            if(a[i] == val1)
            continue;
            v1.push_back(a[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(a[i] == val2)
            continue;
            v2.push_back(a[i]);
        }
        if(solve(v1)||solve(v2))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
