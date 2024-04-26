#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
int main()
{
    optimize();
    
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    while(k--)
    {
        int val;
        cin>>val;
        bool flag = 1;
        int l=0,r=n-1;
        while(l<=r)
    {
        int mid = (l+r)/2;
        if(a[mid] == val)
        {
            cout<<"YES"<<endl;
            flag = 0;
            break;
        }
        else if(a[mid]>val)
        r=mid-1;
        else
        l = mid+1;
    }
    if(flag)
    cout<<"NO"<<endl;
    }
    return 0;
}
 
