#include <stdio.h>

void fibonacci(int array[], int nums)
{

    
    int i = 0;
    while (i < nums)
    {
        if (i == 0)
        {
            array[i] = i;
            ++i;
        }
        else if (i == 1)
        {
            array[i] = i;
            ++i;
        }
        else
        {
            int curr = array[i - 1];
            int prev = array[i - 2];
            int total = curr + prev;
            array[i] = total;
            ++i;
        }

    }

    for (int j = 0;j < nums; ++j)
    {
        printf("%d   ", array[j]);
    }
    printf("\n");
    
}