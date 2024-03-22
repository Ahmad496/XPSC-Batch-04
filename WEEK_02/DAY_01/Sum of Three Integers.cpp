#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k,s,cnt = 0;
  cin>>k>>s;
  for(int i=0;i<=k;i++)
  {
    for(int j=0;j<=k;j++)
    {
      int c = s-(i+j);
      if(c>=0 && c<=k)
      cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
