#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    for (ll i = 0; i < n - 2; i++)
    {
        for (ll j = i + 1; j < n - 1; j++)
        {
            for (ll k = j + 1; k < n; k++)
            {
                if ((v[i] + v[j] + v[k]) % 2 != 0)
                {
                    cout << "YES" << endl;
                    cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}