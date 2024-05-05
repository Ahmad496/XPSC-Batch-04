#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans1 = min(abs(v[0] - v[1]), abs(v[n - 1] - v[n - 2]));
        int before = INT_MIN, after = INT_MIN, ans = INT_MAX;
        for (int i = 1; i < (n - 1); i++)
        {
            before = abs(v[i] - v[i - 1]);
            after = abs(v[i] - v[i + 1]);
            ans = min(ans, max(before, after));
        }
        cout << min(ans1, ans) << endl;
    }
    return 0;
}
