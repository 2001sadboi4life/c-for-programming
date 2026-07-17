#include <stdio.h>
#define ROWS 2
#define COLS 3

int main()
{
   
    
    double table[ROWS][COLS] = {{1.2, 3.2, 5.2}, {9.0, 5.4, 1.6}};

    for (int i = 0 ; i < ROWS ; ++i)
    {
        for (int j = 0 ; j < COLS ; ++j)
        {
            printf("%4.1f", table[i][j]);
        }
        printf("\n");
    }   
    printf("\n");
    printf("Item at (1,2) is %.1f\n", table[1][2]);

    return 0;
}