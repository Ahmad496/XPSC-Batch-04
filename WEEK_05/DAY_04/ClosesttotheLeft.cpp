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

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (k--)
    {
        int l = 0, r = n - 1;
        int key, idx = -1;
        cin >> key;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] <= key)
            {
                idx = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << idx + 1 << endl;
    }
    return 0;
}
