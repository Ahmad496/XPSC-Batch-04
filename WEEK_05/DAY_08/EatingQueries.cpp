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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.rbegin(), a.rend());
        for (int i = 1; i < n; i++)
            a[i] += a[i - 1];
        while (q--)
        {
            int x;
            cin >> x;
            if (x > a[n - 1])
            {
                cout << -1 << endl;
                continue;
            }
            int lo = lower_bound(a.begin(), a.end(), x) - a.begin();
            cout << lo + 1 << endl;
        }
    }
    return 0;
}
