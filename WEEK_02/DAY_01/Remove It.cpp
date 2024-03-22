#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x;
  cin>>n>>x;
  for(int i=0;i<n;i++)
  {
    int val;
    cin>>val;
    if(val == x)
    continue;
    else
    cout<<val<<" ";
  }
  return 0;
}
