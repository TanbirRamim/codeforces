#include <bits/stdc++.h>
using namespace std;

void printResult(int x, int y)
{
    cout << x << ' ' << y << endl;
}

int sumOfNumbers(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int testCases = 1;
    cin >> testCases;
    while (testCases)
    {
        int numberOfElements;
        cin >> numberOfElements;
        if (numberOfElements % 2)
        {
            cout << "YES" << endl;
            int i = 1;
            while (i < ceil((double)numberOfElements / 2) + 1)
            {
                int firstNum = sumOfNumbers((2 * i) - 1, numberOfElements);
                int secondNum = sumOfNumbers(numberOfElements, numberOfElements - i + 1);
                printResult(firstNum, secondNum);
                i++;
            }
            i = 1;
            while (i < ceil((double)numberOfElements / 2))
            {
                int firstNum = sumOfNumbers(2 * i, numberOfElements);
                int secondNum = sumOfNumbers(numberOfElements, numberOfElements - ceil((double)numberOfElements / 2) - i + 1);
                printResult(firstNum, secondNum);
                i++;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
        testCases--;
    }
    return 0;
}
