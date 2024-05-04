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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int diff = 1e9 + 123;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
            continue;
        diff = min(diff, a[i] - b[i]);
    }
    if (diff < 0)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {
            if (a[i] > diff)
            {
                cout << "NO" << endl;
                return;
            }
            else
                continue;
        }
        if (diff != (a[i] - b[i]))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    optimize();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}
