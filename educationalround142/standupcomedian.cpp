#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long aliceMood = 0;
        long long bobMood = 0;
        long long numberOfJokes = 0;
        bool flag = true;
        while (flag)
        {
            if (a <= 0 && b <= 0 && c <= 0 && d <= 0)
            {
                flag = false;
            }
            if (aliceMood >= 0 && bobMood >= 0)
            {
                if (a > 0)
                {
                    aliceMood++, bobMood++, a--, numberOfJokes++;
                }
                else if (b > 0)
                {
                    aliceMood++, bobMood++, b--, numberOfJokes++;
                }
                else if (c > 0)
                {
                    aliceMood++, bobMood++, c--, numberOfJokes++;
                }
                else if (d > 0)
                {
                    aliceMood++, bobMood++, d--, numberOfJokes++;
                }
                else
                    break;
            }
        }
    }
}