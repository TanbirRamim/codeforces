#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, m;
        cin >> a >> b >> n >> m;
        int ans = 0;
        int t;
        int temp = n / (m + 1);
        int var = n % (m + 1);
        if ((n % m + 1) == 0)
            t = temp * a * m;
        else
        {
            t = temp * a * m;
            t += (min(var * b, var * a));
        }
        int z = min(n * a, n * b);
        cout << min(z, t) << endl;
    }
    return 0;
}