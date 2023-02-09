#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int now_tanbir = 0;
    int k = -1;
    int a[n];
    int tanbir = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 2)
            tanbir++;
    }
    if (tanbir & 1)
        cout << -1 << endl;
    else
    {

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
                now_tanbir++;
            if (now_tanbir == tanbir / 2)
            {
                k = i;
                break;
            }
        }
        cout << k + 1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}