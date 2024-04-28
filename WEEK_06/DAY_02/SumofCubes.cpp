#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
typedef long long ll;
vector<ll> a;
void solve()
{
    ll x;
    cin >> x;
    for (int i = 0; i < a.size(); i++)
    {
        ll ck = x - a[i];
        if (ck <= 0)
        {
            cout << "NO" << endl;
            return;
        }
        // bool ok = binary_search(a.begin(), a.end(), ck);
        ll l = 0, r = a.size() - 1, mid;
        bool ok = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (a[mid] == ck)
            {
                ok = 1;
                break;
            }
            else if (a[mid] > ck)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if (ok)
        {
            cout << "YES" << endl;
            return;
        }
    }
    // cout << "NO" << endl;
}
int main()
{
    optimize();
    for (ll i = 1; (i * i * i) <= (1e12); i++)
        a.push_back(i * i * i);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
