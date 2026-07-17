#include <stdio.h>

int main()
{

    struct First
    {
        int value1;
        int value2;
    };

    struct First Second[10];

    int counter = 10;
    for (int i = 0; i <= 9 ; ++i)
    {
        Second[i].value1 = i;
        Second[i].value2 = counter;
        --counter;
    }

    for (int i = 0 ; i < sizeof(Second)/(sizeof(int)*2) ; ++i)
    {
        printf("%d-%d\n", Second[i].value1, Second[i].value2);
    }
    return 0;
}