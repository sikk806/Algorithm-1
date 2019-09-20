#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int value[9];
    int sum = 0, diff = 0;
    int index[2];

    for (int i = 0; i < 9; i++)
    {
        cin >> value[i];
        sum += value[i];
    }

    diff = sum - 100;

    sort(value, value + 9);

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (value[i] + value[j] == diff)
            {

                index[0] = i;
                index[1] = j;

                for (int k = 0; k < 9; k++)
                {

                    if (k != index[0] && k != index[1])
                    {
                        cout << value[k] << endl;
                    }
                }
                return 0;
            }
        }
    }

    return 0;
}