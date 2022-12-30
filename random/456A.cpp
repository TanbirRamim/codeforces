#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <numeric>
#include <map>
#include <queue>
#include <stack>
#include <string>
#define sz(x) (int)(x).size()
using namespace std;
#define ll long long
#define pi pair<int, int>
int mod = 1000000007;
void setIO(string name = "")
{ // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0); // see Fast Input & Output
    if (sz(name))
    {
        freopen((name + ".in").c_str(), "r", stdin); // see Input & Output
        freopen((name + ".out").c_str(), "w", stdout);
    }
}
ll nextpow(ll x)
{
    ll res = 1;
    while (res < x)
    {
        res *= 2;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    // cout << "HERE" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;
    sort(arr.begin(), arr.end());
    int max_q = 0;
    bool works = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].second < max_q)
            works = true;
        max_q = max(max_q, arr[i].second);
    }
    if (works)
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;
}