#include <stdio.h>

int main() {

    int counter = 0;

    while (counter <= 5) {
        printf("Fuck, this counter at %d\n", counter);
        counter++;
    }
    printf("\n");
    printf("Now we gonna code the second version of this shit\n");

    counter = 0; 
    // The do loop is important because it will always run at least once since the condition is at the bottom.
    do {
        printf("%d ", counter);
        counter++;
    } while (counter <= 5);
    
    printf("\n");
    
    return 0;
}