#include <iostream>

void solve()
{
    int num_segments, target, start_count = 0, end_count = 0;
    std::cin >> num_segments >> target;

    for (int i = 0; i < num_segments; ++i)
    {
        int left, right;
        std::cin >> left >> right;

        if (left == target)
        {
            ++start_count;
        }
        if (right == target)
        {
            ++end_count;
        }
    }

    if (start_count > 0 && end_count > 0)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int num_tests;
    std::cin >> num_tests;

    for (int i = 0; i < num_tests; ++i)
    {
        solve();
    }

    return 0;
}
