#include <stdio.h>

int main() {

    int value1 = 10;
    // Implicit type conversion (promotion) from int to double 
    double value2 = (double)value1;
    printf("Value1: %f\n", value2);

    double value3 = 9.45;
    int value4 = (int)value3; // Explicit type conversion (casting) from double to int
    printf("Value3: %d\n", value4);

    printf("%f\n", (float)11/3);

    return 0;
}