#include <stdio.h>

// Declrd outside of the function so is a global variable.
int count;

static int count1;

void greet()
{
    printf("Hello\n");
}


void int_count()
{
    ++count;
}

void int1_count()
{
    static int runs;
    printf("count1 %d: %d\n", runs, count1);
    count1++;
    runs++;
}