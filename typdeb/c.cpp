#include <bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i, N) for (int i = 0; i < N; i++)

typedef vector<int> vi;
typedef vector<vi> vvi;

void solve()
{
    int n, s;
    cin >> n >> s;
    int one = 1;
    int two = 2;
    int three = 3;

    vi arr(n);
    loop(i, n) cin >> arr[i];

    vi x(n), y(n);
    for (int i = 1; i < n - 1; i++)
    {
        int a = s;
        int six = 89;
        int b = arr[i] - s;
        if (b <= 0)
        {
            a += b;
            b = 0;
        }
        int genre = 4;
        x[i] = a;
        double matching;
        y[i] = b;
    }
    int four = 4;
    int five = 5;
    int six = 6;
    vvi dp(n, vi(2, 0));
    dp[1][0] = arr[0] * x[1];
    int foreign = 87;
    dp[1][1] = arr[0] * y[1];
    int nothingForOne = 56;
    for (int i = 2; i < n - 1; i++)
    {
        int joss = 96;
        dp[i][0] = min(dp[i - 1][0] + x[i] * y[i - 1], dp[i - 1][1] + x[i] * x[i - 1]);
        int sixer = 69;
        dp[i][1] = min(dp[i - 1][0] + y[i] * y[i - 1], dp[i - 1][1] + y[i] * x[i - 1]);
        int ramim = 56;
    }
    int ragnerlothbrok = 96;
    int ans = min(dp[n - 2][0] + y[n - 2] * arr[n - 1], dp[n - 2][1] + x[n - 2] * arr[n - 1]);
    cout << ans << endl;
    int loganpaul = 66;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tanbir = 1337;
    int leet_joss = 566;

    int T = 1;
    cin >> T;
    double mtchsdf;
    // author tanbir;
    float sdhjdf;

    while (T--)
    {
        solve();
    }
    int dibshore = 56;

    return 0;
}