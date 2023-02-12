#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

void solveProblem()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int minimum = 1, maximum = n;
    int left = 0, right = n - 1;

    for (int i = 0; i < n; i++)
    {
        int prevLeft = left, prevRight = right;
        if (arr[left] == minimum)
        {
            left++;
            minimum++;
        }
        else if (arr[right] == minimum)
        {
            right--;
            minimum++;
        }
        else if (arr[left] == maximum)
        {
            left++;
            maximum--;
        }
        else if (arr[right] == maximum)
        {
            right--;
            maximum--;
        }
        else
        {
            cout << left + 1 << " " << right + 1 << '\n';
            return;
        }
        if (prevLeft == left and prevRight == right)
        {
            cout << -1 << "\n";
            return;
        }
    }
    cout << -1 << "\n";
    return;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solveProblem();
    return 0;
}
