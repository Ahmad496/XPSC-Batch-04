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

        map<string,int>mp1,mp2,mp3,mp;
        int pt1 = 0,pt2 = 0,pt3 = 0;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            mp1[s]++;
            mp[s]++;
        }
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            mp2[s]++;
            mp[s]++;
        }
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            mp3[s]++;
            mp[s]++;
        }
        for(auto it = mp.begin();it !=mp.end();it++)
        {
            string s = it->first;
           if(mp1[s] && mp2[s] && mp3[s])
           continue;
           else if(mp1[s] && mp2[s])
           {
            pt1++;
            pt2++;
           }
           else if(mp1[s] && mp3[s])
           {
            pt1++;
            pt3++;
           }else if(mp3[s] && mp2[s])
           {
            pt3++;
            pt2++;
           }
           else if(mp1[s])
           {
            pt1 +=3;
           }
           else if(mp2[s])
           pt2 +=3;
           else if(mp3[s])
           pt3 +=3;
        }
      cout<<pt1<<" "<<pt2<<" "<<pt3<<endl;
    }
    return 0;
}
