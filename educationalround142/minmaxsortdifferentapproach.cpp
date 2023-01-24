#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define _sort(x) sort(all(x))
#define _rsort(x) sort(rall(x))
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define loop(i, N) for (int i = 0; i < N; i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pi;
typedef vector<pi> vpi;
typedef map<int, int> mpii;
typedef map<pi, int> mppi;
typedef vector<string> vs;
#define mod1 1000000007
#define mod2 998244353

int add(int a, int b)
{
    return (a + b) % mod1;
}
int sub(int a, int b)
{
    return (a - b + mod1) % mod1;
}
int mul(int a, int b)
{
    return (a % mod1) * (b % mod1) % mod1;
}

void solve()
{
    int n;
    cin >> n;

    vi arr(n);
    loop(i, n) cin >> arr[i];

    vi index(n + 1, 0);
    loop(i, n) index[arr[i]] = i;

    int mx = 1, s = 1, e = 1;
    int currs = 1, curre = 1;
    int ans = (n + 1) / 2;
    int mid = (n + 1) / 2; // 3
    int val = max(mid - min(mid, curre) + currs - 1, (n - max(mid, curre)));
    // cout << i << ' ' << val << ' ' << curre << ' ' << currs << endl;
    ans = min(ans, val);
    for (int i = 2; i <= n; i++)
    {
        if (index[i] > index[curre])
            curre++;
        else
        {
            int tmp = curre - currs + 1;
            if (tmp > mx)
            {
                mx = tmp;
                s = currs;
                e = curre;
            }
            curre = i;
            currs = i;
        }
        val = max(mid - min(mid, curre) + currs - 1, (n - max(mid, curre)));
        // cout << i << ' ' << val << ' ' << curre << ' ' << currs << endl;
        ans = min(ans, val);
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;

    while (T--)
        solve();
}