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
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        ll ans = 0;
        int flag = 0;
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=0 )
            {

                if(a[i] <0 )
                flag += 1;
                else if(a[i] == 0)
                {
                  if(flag >=1)
                   flag +=1;
                }

            }
            else
            flag = 0;
            if(a[i]<0)
            a[i] *=-1;
            ans +=a[i];
            if(flag == 1)
            cnt++;

        }
        cout<<ans<<" "<<cnt<<endl;
    }
    return 0;
}
