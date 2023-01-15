#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int number;
        cin >> number;
        vector<int> cinema(number);
        for (int i = 0; i < number; i++)
            cin >> cinema[i];
        int result = 0;
        map<int, int> ticket;
        sort(cinema.begin(), cinema.end());
        for (int i = 0; i < number; i++)
            ticket[cinema[i]]++;
        if (ticket[0] == 0)
            result = 2;
        else
            result = 1;
        for (int i = 0; i < number - 1; i++)
        {
            if (cinema[i] < i + 1 && cinema[i + 1] >= i + 2)
            {
                result++;
            }
        }
        cout << result << endl;
    }
}