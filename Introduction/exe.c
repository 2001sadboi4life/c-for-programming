#include <stdio.h>

// 1km == 1.6 miles

int main() {

    printf("Enter a number 0-9: ");
    
    int miles = getchar() - '0';
    float km = (float)miles * 1.6;

    printf("%d miles is equal to %.1f kilometers\n", miles, km);

    return 0;
}