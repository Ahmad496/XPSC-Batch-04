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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    while (q--)
    {
        int x, b;
        cin >> x >> b;
        int l = 0, r = n - 1, idx = -1, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (a[mid] <= b)
            {
                idx = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        int l1 = 0, r1 = n - 1, ind = n, md;
        while (l1 <= r1)
        {
            md = (l1 + r1) / 2;
            if (a[md] >= x)
            {
                ind = md;
                r1 = md - 1;
            }
            else
                l1 = md + 1;
        }
        // cout << idx + 1 << endl;
        // cout << ind + 1 << endl;
        // cout << idx << " " << ind << endl;
        cout << idx - ind + 1 << " ";
    }
    cout << endl;
    return 0;
} // 5 2 2 0
