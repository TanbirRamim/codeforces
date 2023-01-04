#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define form(i, x, n) for (int i = x; i < int(n); i++)

void forces()
{
    int hello;
    cin >> hello;
    if (hello % 2 == 0)
    {
        cout << "YES\n";
        for (int i = 0; i < hello / 2; i++)
        {
            cout << "1 -1 ";
        }
        cout << endl;
    }
    else if (hello == 3)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        int x = hello / 2;
        for (int i = 0; i < hello / 2; i++)
        {
            cout << 1 - x << " " << x << " ";
        }
        cout << 1 - x << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        forces();
    }
    return 0;
}
