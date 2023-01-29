#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int t, n, s, a[N];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long ans = 0;
        for (int i = 1; i < n; i++)
        {
            int x = a[i];
            int y = s * 2;
            ans += min(x, y) * a[i - 1] + abs(x - y) * a[n - 1];
        }
        cout << ans << endl;
    }
    return 0;
}