#include <stdio.h>


/*
 * Logical Operators:
 * &&, ||, !, !=, ==, <, >, <=, >=
 */

int main(){
    int temperature = 21;

    if (temperature < 0){
        printf("Freezing\n");
    }
    else if (temperature <= 20){
        printf("Nominal\n");
    }
    else {
        printf("Too Hot!!\n");
    }

    return 0;
}