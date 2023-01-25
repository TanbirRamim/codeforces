#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if ((a + b + c + d) == 0)
        {
            cout << 0 << endl;
            continue;
        }

        if (a == 0)
        {
            cout << 1 << endl;
            continue;
        }
        int posi = a + 2 * min(b, c) + min((max(c, b) - min(b, c)), a);

        int left = a - (max(c, b) - min(b, c));
        if (left > 0)
        {
            if (left < d)
                posi += left + 1;
            else
            {
                posi += d;
            }
        }

        else if ((left == 0 && d > 0))
            posi++;
        else if (left < 0)
            posi++;
        cout << posi << endl;
    }
    return 0;
}