#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        string next;
        next = "";
        for (int i = str.size() - 1; i >= 2; i--)
        {
            next += str[i];
        }
        string left;
        string right;
        left = "";
        right = "";
        left = left + str[0];
        right = right + str[1];
        if (next >= left && next >= right || next <= left && next <= right)
        {
            cout << left << " " << next << " " << right << endl;
        }
        else
        {
            cout << ":(" << endl;
        }
    }
}