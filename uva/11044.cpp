#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        int n, m;

        cin >> n >> m;

        n = n / 3;

        m = m / 3;

        cout << n * m << "\n";
    }

    return 0;
}