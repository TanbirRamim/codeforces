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
        string s;
        cin >> s;
        int LR, RL;
        LR = RL = -1;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == 'R' && s[i] == 'L')
                RL = i;
            else if (s[i - 1] == 'L' && s[i] == 'R')
                LR = i;
        }
        if (LR == -1 && RL == -1)
            cout << -1 << endl;
        else
        {
            if (RL >= 0)
                cout << 0 << endl;
            else
                cout << LR << endl;
        }
    }
    return 0;
}
