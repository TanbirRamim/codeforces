#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, boom;
        cin >> n >> boom;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> saas;
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                saas.push_back(1);
                break;
            }
        }
        int j = 0;
        for (; i < n; i++)
        {
            if (saas[j] + 1 == v[i])
            {
                saas.push_back(v[i]);
                j++;
            }
        }
        int l = n - saas.size();
        if (l % boom == 0)
        {
            cout << l / boom << endl;
        }
        else
        {
            cout << l / boom + 1 << endl;
        }
    }
}