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
        string a,b;
        cin>>a>>b;
        int lena,lenb;
        lena = a.size()-1;
        lenb = b.size()-1;
        if(a[lena] == b[lenb])
        {
            if(a[lena] == 'S' && b[lenb] == 'S')
            {
                if(lena > lenb)
                cout<<'<'<<endl;
                else if(lena<lenb)
                cout<<'>'<<endl;
                else
                cout<<'='<<endl;
            }
            else if(a[lena] == 'L' && b[lenb] == 'L')
            {
                if(lena > lenb)
                cout<<'>'<<endl;
                else if(lena<lenb)
                cout<<'<'<<endl;
                else
                cout<<'='<<endl;
            }
            else
            cout<<'='<<endl;
        }
        else
        {
            if(a[lena] == 'S')
            {
                cout<<'<'<<endl;
            }
            else if(a[lena] == 'M')
            {
                if(b[lenb] == 'S')
                cout<<'>'<<endl;
                else
                cout<<'<'<<endl;
            }
            else
            cout<<'>'<<endl;
        }
    }
    return 0;
}
