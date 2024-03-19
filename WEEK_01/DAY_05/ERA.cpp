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
        int n;
        cin>>n;
        int arr[n];
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        int pos = 0;

        for(int i=1; i<=n; i++)
        {
            if(arr[i]>i)
            {
                if(pos==0)
                    pos += arr[i] - i;
                else
                {
                    if((pos+i)>=arr[i])
                        continue;
                    else
                    {
                        pos +=arr[i]-(pos+i);
                    }

                }
            }

        }
        cout<<pos<<endl;
    }
    return 0;
}
