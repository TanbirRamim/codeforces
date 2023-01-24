#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, counter = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                counter++;
            }
        }
        if (counter % 2 == 0)
        {
            cout << counter / 2 + n - counter << endl;
        }
        else
        {
            cout << counter / 2 + n - counter + 1 << endl;
        }
    }
}