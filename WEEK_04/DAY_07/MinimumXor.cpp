#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, Xor = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            Xor ^= a[i];
        }
        int ans = Xor;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, Xor^a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}