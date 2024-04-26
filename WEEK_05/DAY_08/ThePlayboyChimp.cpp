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
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1, idx = -1;
        while (l <= r)
        {
            int mid = (l + r) >> 1;

            if (a[mid] >= x)
            {
                idx = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        if (a[n - 1] < x)
        {
            cout << a[n - 1] << " ";
                }
        else if (idx - 1 < 0)
            cout << "X"
                 << " ";
        else
            cout << a[idx - 1] << " ";
        l = 0, r = n - 1, idx = -1;
        while (l <= r)
        {
            int mid = (l + r) >> 1;

            if (a[mid] <= x)
            {
                idx = mid;
                l = mid + 1;
            }
            else
                l = mid + 1;
        }

        if (a[n - 1] < x)
            cout << "X"
                 << " ";
        else
            cout << a[idx + 1] << " ";
        cout << endl;
    }
    return 0;
}
