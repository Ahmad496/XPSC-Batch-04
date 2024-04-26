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

    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // sort(a.begin(), a.end());
    for (int i = 1; i < n; i++)
        a[i] += a[i - 1];
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int ans = lower_bound(a.begin(), a.end(), x) - a.begin();
        cout << ans + 1 << endl;
    }

    return 0;
}
