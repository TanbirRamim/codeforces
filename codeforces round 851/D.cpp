#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e9 + 7;

int power(int base, int exponent)
{
    int result = 1;
    while (exponent)
    {
        if (exponent & 1)
            result = (result * base) % M;
        base = (base * base) % M;
        exponent >>= 1;
    }
    return result;
}

void updateAnswer(int &answer, int x)
{
    answer = (answer + x) % M;
}

bool isValid(int num1, int num2, int x)
{
    return (num2 - num1 <= x);
}

int findRight(int start, int end, vector<int> &a, int x)
{
    int t = 1;
    while (start < end + 1)
    {
        int mid = (start + end) / 2;
        if (isValid(a[mid], a[end], x))
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    t = (t * power(2, end)) % M;
    return t;
}

int findLeft(int start, int end, vector<int> &a, int x)
{
    int t = 1;
    while (start < end + 1)
    {
        int mid = (start + end) / 2;
        if (isValid(a[start], a[mid], x))
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    t = (t * power(2, (int)a.size() - start + 1)) % M;
    return t;
}

int32_t main()
{
    int n;
    cin >> n;
    vector<int> pw(n + 1, 1), a(n + 1);
    for (int i = 1; i <= n; i++)
        pw[i] = pw[i - 1] * 2 % M;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        int j = i + 1;
        while (j <= n)
        {
            int x = a[j] - a[i];
            int right = findRight(1, i - 1, a, x);
            int left = findLeft(j + 1, n, a, x);
            int t = (right * left) % M;
            updateAnswer(answer, t);
            j++;
        }
    }
    cout << answer << '\n';
    return 0;
}
