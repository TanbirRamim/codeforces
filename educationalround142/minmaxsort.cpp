#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> index(n + 1, 0);
    for (int i = 0; i < n; i++)
        index[arr[i]] = i;
    int ans = (n + 1) / 2;
    int mid = (n + 1) / 2;
    for (int i = 2; i <= n; i++)
    {
        int currs = i, curre = i;
        for (int j = i + 1; j <= n; j++)
        {
            if (index[j] > index[curre])
                curre = j;
            else
                break;
        }
        int val = max(mid - min(mid, curre) + currs - 1, (n - max(mid, curre)));
        ans = min(ans, val);
    }
    cout << ans << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
