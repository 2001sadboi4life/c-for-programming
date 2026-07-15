#include <stdio.h>

/*
 *
 * char, short int, int, long int, long long int
 * 
 * float, double, long double
 * 
 */

 int main() {

    printf("Sizes of integers:\n");
    printf("----------------------\n");
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("\n");

    printf("\nSizes of floating-point numbers:\n");
    printf("--------------------------------\n");
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    return 0;
 }
 