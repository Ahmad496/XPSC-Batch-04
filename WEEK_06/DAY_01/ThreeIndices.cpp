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
        int n, j = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
                j = i;
        }
        if (j)
        {
            cout << "YES" << endl;
            cout << j << " " << j + 1 << " " << j + 2 << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
