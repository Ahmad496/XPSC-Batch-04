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
        int n, k;
        cin >> n >> k;
        int a[k + 1];
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        sort(a + 1, a + k + 1);
        int l = 1, r = k, mid, ans;
        auto ok = [&](int m)
        {
            ll sum = 0;
            for (int i = m; i <= k; i++)
            {
                if (a[i] <= sum)
                {
                    return 0;
                }
                sum += (n - a[i]);
            }
            return 1;
        };
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << k - ans + 1 << endl;
    }
    return 0;
}
