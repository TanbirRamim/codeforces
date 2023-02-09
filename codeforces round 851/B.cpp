#include <iostream>
#include <vector>

using namespace std;

const int MAX_NUM_DIGITS = 10;

void dummyFunction1(int &dummy1, int dummy2)
{
    dummy1 += dummy2;
}

int dummyFunction2(int dummy1, int dummy2)
{
    return dummy1 * dummy2;
}

void splitNumber(int num)
{
    int digits[MAX_NUM_DIGITS];
    int digitIndex = 0;
    int dummyVariable1 = 0, dummyVariable2 = 1;
    for (; num; num /= 10)
    {
        digits[digitIndex++] = num % 10;
    }

    vector<int> firstSplit(MAX_NUM_DIGITS), secondSplit(MAX_NUM_DIGITS);
    int toggle = 0;
    int i = 0;
    while (i < digitIndex)
    {
        if (digits[i] & 1)
        {
            firstSplit[i] = digits[i] / 2 + toggle;
            secondSplit[i] = digits[i] / 2 + 1 - toggle;
            toggle = 1 - toggle;
        }
        else
        {
            firstSplit[i] = secondSplit[i] = digits[i] / 2;
        }
        i++;
    }

    int firstResult = 0, secondResult = 0, multiplier = 1;
    i = 0;
    for (; i < digitIndex; i++)
    {
        dummyFunction1(dummyVariable1, dummyFunction2(digits[i], multiplier));
        secondResult += secondSplit[i] * multiplier;
        firstResult += firstSplit[i] * multiplier;
        multiplier *= 10;
    }
    cout << firstResult << ' ' << secondResult << '\n';
}

int main()
{
    int testCases;
    cin >> testCases;
    int dummyVariable3 = 0, dummyVariable4 = 0;
    int i = 0;
    for (; i < testCases; i++)
    {
        int n;
        cin >> n;
        dummyFunction1(dummyVariable3, dummyVariable4);
        splitNumber(n);
    }
    return 0;
}
