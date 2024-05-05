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
        int n;
        cin >> n;
        if (n % 2)
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
        }
        else
        {
            int tmp = n * (n + 1) - 2;
            tmp /= 2;
            tmp %= n;
            cout << n - tmp << " ";
            for (int i = 2; i <= n; i++)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
