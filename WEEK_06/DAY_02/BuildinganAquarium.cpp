#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
typedef long long ll;
int main()
{
    optimize();

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        auto ok = [&](ll m)
        {
            ll cnt = 0;
            for (int i = 0; i < n; i++)
            {
                cnt += (a[i] < m) ? (m - a[i]) : 0LL;
            }
            return cnt <= x;
        };
        ll l = 1, r = 2e9, mid, ans;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
