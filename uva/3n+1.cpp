#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, i, j;
    while (scanf("%d%d", &a, &b) == 2 && a > 0 && b > 0)
    {
        int ans, sum = 0;
        cout << a << " " << b << " ";
        if (a > b)
            swap(a, b);
        // cout<<a<<b<<endl;
        for (i = a; i <= b; i++)
        {
            ans = 1;
            for (j = i; j != 1; j = j)
            {
                if (j % 2 == 0)
                    j /= 2;
                else
                    j = 3 * j + 1;
                ans += 1;
            }
            if (ans >= sum)
                sum = ans;
        }
        cout << sum << endl;
    }
    return 0;
}