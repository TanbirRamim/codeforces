#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int width, depth, height;
        cin >> width >> depth >> height;
        int a, b, f, g;
        cin >> a >> b >> f >> g;
        int ultimate;

        ultimate = height;

        ultimate += min(min(abs(b - g) + a + f, abs(b - g) + (width - a) + (width - f)), min(abs(a - f) + b + g, abs(a - f) + (depth - b) + (depth - g)));

        cout << ultimate << endl;
    }
}
