#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
#define int long long
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int op = 0;
        int sum = 0;
        priority_queue<int, vector<int>, greater<int>> shine;
        for (int i = m; i < n; i++)
        {
            if (a[i] < 0)
                shine.push(a[i]);
            sum += a[i];
            while (sum < 0)
            {
                int constructor = shine.top();
                shine.pop();
                constructor = -1 * constructor;
                sum += (2 * constructor);
                op++;
            }
        }
        if (a[m - 1] <= 0)
            sum = a[m - 1];
        else if (m != 1)
        {
            sum = -1 * a[m - 1];
            op++;
        }
        priority_queue<int> pp;
        for (int i = m - 2; i >= 1; i--)
        {
            if (a[i] > 0)
                pp.push(a[i]);
            sum += a[i];
            while (sum > 0)
            {
                int constructor = pp.top();
                pp.pop();
                constructor = -1 * constructor;
                sum += (2 * constructor);
                op++;
            }
        }
        cout << op << endl;
    }
    return 0;
}
