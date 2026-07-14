#include <stdio.h>

int main() {

    char value = 0;
    printf("Value: %d\n", value);
    // Can still use %d to print a char value, but it will be promoted to an int when passed to printf.

    unsigned long size = sizeof(char);
    printf("Size of char: %lu bytes\n", size);
    // The %lu format specifier is used to print an unsigned long value.

    /*
    1 byte = 8 bits
    The max value of char is 127 (2^7 - 1)
    The min value of char is -128 (-2^7)
    */
    return 0;
}