#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string name;
    cin >> name;
    int count = name.size();
    if (name[0] == name[count - 1])
    {
        cout << name[0] << " ";
        for (int i = 1; i < count - 1; i++)
        {
            cout << name[i];
        }
        cout << " " << name[count - 1];
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            for (int j = count - 1; j > i + 1; j--)
            {
                string first = name.substr(0, i + 1);
                string second = name.substr(i + 1, j - i - 1);
                string third = name.substr(j, count - j);
                if ((first <= second && third <= second) || (second <= first && second <= third))
                {
                    cout << first << " " << second << " " << third << endl;
                    break;
                }
            }
        }
    }
    cout << ":(";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*5
bbba
aba
aaa
abba
abbb
*/