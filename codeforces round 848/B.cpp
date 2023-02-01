#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int T, n, k, cnt[26], ans;
char a[N], b[N];
int main()
{
    cin >> T;
    while (T--)
    {
        memset(cnt, 0, sizeof(cnt));
        ans = 0;
        cin >> n >> k >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                ans++;
            }
            else
            {
                cnt[a[i] - 'a']++;
            }
        }
        sort(cnt, cnt + 26);
        for (int i = 0; i < 26 - k; i++)
        {
            ans += cnt[i];
        }
        cout << ans << endl;
    }
    return 0;
}