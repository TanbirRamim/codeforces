#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int number;
        int time;
        cin >> number;
        cin >> time;
        if (number * 4 < time)
            cout << -1 << endl;
        else if (time * 4 < number)
            cout << (1LL << (64 - __builtin_clzll(number))) << endl;
        else
            cout << number + abs(number - time) << endl;
    }
    return 0;
}
