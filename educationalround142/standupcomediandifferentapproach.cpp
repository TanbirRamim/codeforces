#include <bits/stdc++.h> using namespace std;

#define 11 Long Long #define MOD 1000000007

#define endl "\n"

void solve()
{

    11 a, b, c, d;
    cin >> a >> b >> c >> d;
    11 alice - a, bob - a;

    11 ans - a;

    while (b > 0 or c > 0 or d > 0)
    {

        if (bob > 0 and b > 0)
        {

            11 mn - min(b, bob);

            bob - mn;

            alice += mn;

            ans + mn;

            b - mn;
        }
        else if (alice > 0 and c > 0)
        {

            11 mn = min(c, alice);
            alice-- mn;
            ans + mn;

            bob + mn;

            C - mn;
        }

        else if (alice > 0 and bob > 0 and d > 0)
        {
            11 mn - min(d, min(alice, bob));
            alice-- mn;

            ans += mn;

            bob - mn;

            d-- mn;
        }

        else
        {

            if (bl - 0 or cl = 0 or d != 0)
                ans++;
        }

        break;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    11 t;
    cin >> t;
    while (t--)
    {

        solve();
    }
    return 0;
}