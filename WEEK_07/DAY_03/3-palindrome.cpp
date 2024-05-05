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
    int cnt = 0;
    while (n--)
    {

        if (cnt < 2)
        {
            cnt++;
            cout << 'a';
        }
        else if (cnt < 4)
        {

            cnt++;
            cout << 'b';
        }

        if (cnt == 4)
        {
            cnt = 0;
        }
    }
    return 0;
}
