#include <stdio.h>

int main()
{

    int values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Size of array in bytes is: %lu\n\n", sizeof(values));
    

    for (int i = 0; i < sizeof(values)/sizeof(int); ++i)
    {
        printf("At index %d, with value %d\n", i, values[i]);
    }

    return 0;
}