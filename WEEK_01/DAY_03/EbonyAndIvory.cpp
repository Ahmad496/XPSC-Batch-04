#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    bool flag = 0;
    for(int i=0; i<=10000; i++)
    {
        for(int j=0; j<=10000; j++)
        {
            if((a*i+b*j)==c)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
            if((a*i+b*j)>c)
            {

                break;
                flag = 1;
            }

        }
        if(flag)
            break;
    }
    cout<<"No"<<endl;
    //main();
    return 0;
}
