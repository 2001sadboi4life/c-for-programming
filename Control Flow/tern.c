#include <stdio.h>

int main()
{
    int temp = 2;

    int cooling = temp > 3 ? 1: 0;
    printf("The temperature is %dC\n", temp);

    printf("Cooling is %s\n", cooling ? "ON" :"OFF");
}