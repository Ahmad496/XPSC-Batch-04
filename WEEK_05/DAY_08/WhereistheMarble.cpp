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

    int n, q;
    while (cin >> n && cin >> q)
    {

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int i = 1;
        while (q--)
        {
            int x;
            cin >> x;
            bool ok = binary_search(a.begin(), a.end(), x);
            cout << "CASE# " << i << ":" << endl;
            if (!ok)
            {
                cout << x << " not found" << endl;
                i++;
                continue;
            }
            int lo = lower_bound(a.begin(), a.end(), x) - a.begin();
            cout << x << " found at " << lo + 1 << endl;
            i++;
        }
    }
    return 0;
}
