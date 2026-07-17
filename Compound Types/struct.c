#include <stdio.h>

int main()
{

    struct Person
    {
        int id;
        float height;
    } carl={3, 6.1f}, max={4, 5.11f};
    // Notice how we can initialize a variable inside the struct instead of another line.

    struct Person bob = {1, 5.7f};
    printf("Bob: %d, %.1f\n", bob.id, bob.height);

    struct Person alice = {2, 4.9f};
    printf("Alice: %d, %.1f\n", alice.id, alice.height);

    printf("Carl: %d, %.1f\n", carl.id, carl.height);
    
    // Notice this other way to initialize a vaiable in a struct.
    max = (struct Person){.id=4, .height=6.11f};
    printf("Max: %d, %.2f\n", max.id, max.height);

    // struct inside a struct
    struct Individual 
    {
        int id;
        struct
        {
            float weight;
            float height;
        } data;
        
    };

    struct Individual timmy = {21, {178.34f, 6.11f}};
    printf("Timmy: %d, %.2f, %.2f\n", timmy.id, timmy.data.weight, timmy.data.height);
    
    return 0;
}