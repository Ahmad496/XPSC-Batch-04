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
        int x;
        cin >> x;
        int up = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout << up << endl;
    }
    return 0;
}
