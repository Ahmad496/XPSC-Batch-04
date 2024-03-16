#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
int main()
{
    optimize();
    string s;
    cin>>s;
    int sz = s.size();
    if(sz == 4)
    cout<<s<<endl;
    else if(sz == 3)
    cout<<"0"<<s<<endl;
    else if(sz == 2)
    cout<<"00"<<s<<endl;
    else
    cout<<"000"<<s<<endl;
    return 0;
}
