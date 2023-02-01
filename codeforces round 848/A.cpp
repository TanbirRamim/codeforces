#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans += a[i];
        }

        int flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == -1 && a[i - 1] == -1)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << ans + 4 << endl;
        }
        else
        {
            if (ans == n)
            {
                cout << ans - 4 << endl;
            }
            else
                cout << ans << endl;
        }
    }
    return 0;
}