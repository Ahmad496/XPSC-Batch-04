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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (k--)
    {
        int key;
        cin >> key;
        int l = 0, r = n - 1, mid, idx = n;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (a[mid] >= key)
            {
                idx = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << idx + 1 << endl;
    }
    return 0;
}
