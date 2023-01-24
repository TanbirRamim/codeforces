#include <iostream>
#include <algorithm>
using namespace std;

int get_min_spell_casts(int n, int health[])
{
    sort(health, health + n);
    int first_strategy = 0, second_strategy = 0;
    for (int i = 0; i < n; i++)
    {
        first_strategy += health[i];
        if (health[i] > 1)
        {
            second_strategy += (health[i] - 1);
        }
        else
        {
            second_strategy += 1;
            break;
        }
    }
    return min(first_strategy, second_strategy);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int health[n];
        for (int i = 0; i < n; i++)
        {
            cin >> health[i];
        }
        cout << get_min_spell_casts(n, health) << endl;
    }

    return 0;
}
