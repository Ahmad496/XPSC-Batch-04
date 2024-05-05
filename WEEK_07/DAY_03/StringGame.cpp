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
        string s;
        cin >> s;
        int cnt = 0;
        int cntz = 0, cnto = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cntz++;
            else
                cnto++;
        }
        int ans = min(cntz, cnto);
        if (ans % 2)
            cout << "Zlatan" << endl;
        else
            cout << "Ramos" << endl;
    }
    return 0;
}
