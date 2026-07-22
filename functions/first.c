#include <stdio.h>
#include <stdbool.h>


void myFirstFunc (int number, bool boolean)
{
    printf("number: %d\nboolean: %d\n", number, boolean);
}


int main()
{
    myFirstFunc(50, true);

    return 0;
}