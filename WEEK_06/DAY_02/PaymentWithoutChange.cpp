#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
typedef long long ll;
void solve()
{
    ll a, b, n, s;
    cin >> a >> b >> n >> s;
    ll tmp = a * n;
    if (tmp == s)
    {
        cout << "YES" << endl;
    }
    else if (s - tmp > 0)
    {
        if (s - tmp <= b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else if (tmp - s > 0)
    {
        // while (tmp - s > 0)
        // {
        //     tmp -= n;
        // }
        ll res = s % n;
        if (res <= b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    optimize();

    int q;
    cin >> q;
    while (q--)
    {
        solve();
    }
    return 0;
}
