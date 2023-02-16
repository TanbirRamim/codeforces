#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, cnt = 0;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        reverse(b.begin(), b.end());
        string s = a + b;

        for (int i = 0; i < (n + m - 1); i++)
        {
            if (s[i] == s[i + 1])
            {
                cnt++;
            }
        }
        if (cnt > 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}