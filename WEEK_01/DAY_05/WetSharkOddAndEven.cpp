#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();
    int n;
    cin>>n;
    long long int arr[n];
    vector<long long>Odd,Even;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2)
        {
            Odd.push_back(arr[i]);
        }
        else
            Even.push_back(arr[i]);
    }
    long long ans = 0;
    for(int i=0; i<Even.size(); i++)
        ans +=Even[i];
    sort(Odd.begin(),Odd.end());

    if(Odd.size()%2 == 0)
    {
        for(int i=0; i<Odd.size(); i++)
            ans +=Odd[i];
    }
    else
    {
        for(int i=1; i<Odd.size(); i++)
            ans +=Odd[i];
    }
    cout<<ans<<endl;
    return 0;
}
