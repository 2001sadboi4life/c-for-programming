#include <stdio.h>

int main() {

    // int counter = 0; --> can be initialized in the for loop

    for(int counter = 0; counter <= 5; ++counter) {
        
        printf("Loop iteration %d\n", counter);
        // ++counter; --> can be initialized in the for loop
    }

    return 0;
}