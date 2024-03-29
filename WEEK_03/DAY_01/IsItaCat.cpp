#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
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
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s.erase(unique(s.begin(),s.end()),s.end());



                if(s == "meow")
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;


    }
    return 0;
}
