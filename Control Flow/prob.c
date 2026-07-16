#include <stdio.h>

int main()
{
    printf("Please enter a number from 0-9: ");
    int num = getchar() - '0';

    if (num > 9 || num < 0)
    {
        printf("You entered an invalid input\n");
        goto end_problem;
    }
    else
    {
        int counterA = 1;
        while (counterA <= num)
        {
            int multi = counterA * num;
            int counterB = 0;
            while (counterB <= multi)
            {
                if (counterB != 0)
                {
                    printf("%3d", counterB);
                }
                
                counterB = counterB + counterA;
            }
            ++counterA;
            printf("\n");
        }
    }
    printf("\n");
    
    end_problem:

    return 0;
}