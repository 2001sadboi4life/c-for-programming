#include <stdio.h>

int main()
{
    printf("Type a number from 1-3: ");
    int value = getchar() - '0';

    switch(value)
    {
        case 1:
            printf("Value is 1\n");
            break;
        case 2:
            printf("Value is 2\n");
            break;
        case 3:
            printf("Value is 3\n");
            break;
        default:
            printf("%d not in range 1-3\n", value);
    }

    return 0;
}