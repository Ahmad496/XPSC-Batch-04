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
        int n, b[103];
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>b[i];
        int j = 0;
        while(n--)
        {
            int a;
            cin>>a;
            int cntu = 0, cntd = 0;
            for(int i=0; i<a; i++)
            {
                char ch;
                cin>>ch;
                if(ch=='U')
                    cntu++;
                else
                    cntd++;
            }
            //cout<<cntu<<" "<<cntd<<endl;
            //cout<<b[j]<<" "<<cntu<<" "<<cntd;
            //cout<<b[j] - cntu + cntd<<endl;
            b[j]= (b[j]- cntu + cntd);
            b[j] %=10;
            if(b[j]<0)
                b[j] +=10;
            cout<<b[j]<<" ";
            j++;

        }
        cout<<endl;

    }

    return 0;
}
