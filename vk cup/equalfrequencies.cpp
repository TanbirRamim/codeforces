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
        int a[26] = {};
        string s;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s += c;
            a[(int)(c - 'a')]++;
        }
        int ans = INT_MAX;
        int ind = -1;
        for (int i = 0; i < 26; i++)
        {
            int count = i + 1;
            if (n % count != 0)
                continue;
            int z = n / count;
            priority_queue<int> pq;
            for (int i = 0; i < 26; i++)
            {
                pq.push(a[i]);
            }
            int p = 0;
            while (count--)
            {
                int x = pq.top();
                pq.pop();
                p += max(0, z - x);
            }
            if (ans > p)
            {
                ans = p;
                ind = i + 1;
            }
        }
        priority_queue<pair<int, int>> pq;
        int hash[26] = {};
        for (int i = 0; i < 26; i++)
        {
            pq.push(make_pair(a[i], i));
            hash[i] = INT_MAX;
        }
        int z = n / ind;
        while (ind--)
        {
            int k = pq.top().second;
            int l = pq.top().first;
            pq.pop();
            hash[k] = l - z;
        }
        char x[n];
        for (int i = 0; i < n; i++)
        {
            int k = (int)(s[i] - 'a');
            if (hash[k] == INT_MAX)
            {
                for (int j = 0; j < 26; j++)
                {
                    if (hash[j] < 0)
                    {
                        hash[j]++;
                        x[i] = char(j + (int)('a'));
                        break;
                    }
                }
            }
            else if (hash[k] > 0)
            {
                hash[k]--;
                for (int j = 0; j < 26; j++)
                {
                    if (hash[j] < 0)
                    {
                        hash[j]++;
                        x[i] = char(j + (int)('a'));
                        break;
                    }
                }
            }
            else
                x[i] = char(k + (int)('a'));
        }
        cout << ans << "\n";
        for (int i = 0; i < n; i++)
            cout << x[i];
        cout << "\n";
    }
    return 0;
}