#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c = n;
        int mx = 1;
        map<int, int> mp;
        for (int i = 2; i * i <= n; i++)
        {
            if (c % i == 0)
            {
                int count = 0;
                while (c % i == 0)
                {
                    count++;
                    c /= i;
                }
                mp[i] = count;
                if (count > mx)
                    mx = count;
            }
        }
        if (c != 1)
            mp[c] = 1;
        int res = 0;
        for (int i = 0; i <= mx; i++)
        {
            int curr = 1;
            for (auto it : mp)
            {
                if (it.second > 0)
                {
                    mp[it.first]--;
                    curr *= it.first;
                }
            }
            res += curr;
        }
        cout << res - 1 << endl;
    }
}