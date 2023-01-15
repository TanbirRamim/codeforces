// 3bewildered 3 //
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int index = -1;
    int counter;
    cin >> t;
    while (t--)
    {
        int myNumber;

        cin >> myNumber;

        int myArray[26] = {}; // 26 alphabets

        string myString; // string to store the input

        for (int i = 0; i < myNumber; i++)
        {
            char myCharacter;
            cin >> myCharacter;
            myString += myCharacter;
            myArray[(int)(myCharacter - 'a')]++;
        }
        int ans = INT_MAX;

        for (int i = 0; i < 26; i++)
        {
            counter = i + 1;

            if (myNumber % counter != 0)
            {
                continue;
            }

            int mark = myNumber / counter;

            priority_queue<int> myQueue;

            for (int i = 0; i < 26; i++)
            {
                myQueue.push(myArray[i]);
            }

            int press = 0;    // number of presses
            while (counter--) // counter is the number of alphabets
            {
                int x = myQueue.top();
                myQueue.pop();
                press += max(0, mark - x);
            }
            if (ans > press)
            {
                ans = press;
                index = i + 1;
            }
        }
        priority_queue<pair<int, int>> myQueue; // pair of frequency and index

        int hash[26] = {};
        for (int i = 0; i < 26; i++)
        {
            myQueue.push(make_pair(myArray[i], i));
            hash[i] = INT_MAX;
        }
        int mark = myNumber / index;
        while (index--)
        {
            int k = myQueue.top().second;

            int l = myQueue.top().first;

            myQueue.pop();

            hash[k] = l - mark;
        }
        char xenon[myNumber];

        for (int i = 0; i < myNumber; i++)
        {
            int k = (int)(myString[i] - 'a');
            if (hash[k] == INT_MAX)
            {
                for (int j = 0; j < 26; j++)
                {
                    if (hash[j] < 0)
                    {
                        hash[j]++;

                        xenon[i] = char(j + (int)('a')); // j + (int)('a') is the ascii value of the character

                        break;
                    }
                }
            }
            else if (hash[k] > 0)
            {
                hash[k]--;
                for (int j = 0; j < 26; j++)
                {
                    if (hash[j] < 0)
                    {
                        hash[j]++;

                        xenon[i] = char(j + (int)('a'));

                        break; // break the loop
                    }
                }
            }
            else
                xenon[i] = char(k + (int)('a')); // if hash[k] == 0
        }

        cout << ans << endl;

        for (int i = 0; i < myNumber; i++)
        {
            cout << xenon[i]; // print the string
        }

        cout << endl;
    }

    return 0;
}
// code ends here //