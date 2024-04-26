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
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > a)
                ans += a;
            else
                ans += v[i];
        }
        ans += b;
        cout << ans - 1 << endl;
    }
    return 0;
}
