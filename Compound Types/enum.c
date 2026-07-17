#include <stdio.h>

int main()
{
    enum Fruit
    {
        APPLE,
        BANANA,
        ORANGE,
        CHERRY,
    } e1, e2 = CHERRY;
    // Writing the values e1 and e2 there are the same thing as initializing them later.
    // In this instance both values have been initialized but only e2 has a value
    return 0;
}