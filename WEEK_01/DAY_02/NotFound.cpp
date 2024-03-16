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
  map<char,int>mp;
  for(auto c:s)
  mp[c]++;
  bool ck = 1;
  for(int i=97;i<=122;i++)
  {
    if(mp[i] == 0)
    {
      char ans = i;
      cout<<ans<<endl;
      ck = 0;
      break;
    }
  }
  if(ck)
  cout<<"None"<<endl;
    return 0;
}
