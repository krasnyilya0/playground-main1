// Empty implementation file to satisfy the linker
#include "playground.h"

void snakePattern(vector<int> &numArray)
{
    int temp1, temp2;
    int side = sqrt(numArray.size());
    for (int i = 0; i < side; i++)
    {
        if (i % 2 == 1)
        {
            for (int m = 0; m < side / 2; m++)
            {
                temp1 = numArray[i * side + m];
                temp2 = numArray[i * side + (side - 1 - m)];
                numArray[i * side + m] = temp2;
                numArray[i * side + (side - 1 - m)] = temp1;
            }
        }
        for (int j = 0; j < side; j++)
        {
            cout << numArray[i * side + j] << " ";
        }
        cout << endl;
    }
}