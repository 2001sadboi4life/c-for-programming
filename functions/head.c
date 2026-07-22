#include <stdio.h>
#include "hFunc.h"
#include "hFunc.h"

struct Value struct_munger(struct Value item)
{
    item.id = 7;
    item.v[0] = 1;
    item.v[1] = 2;

    return item;
}

int main()
{
    greet();

    struct Value item1 = {1, {1,2}};
    printf("id: %d\nv: %d, %d\n\n", item1.id, item1.v[0], item1.v[1]);

    struct Value item2 = item1;
    printf("id: %d\nv: %d, %d\n\n", item2.id, item2.v[0], item2.v[1]);

    struct Value result = struct_munger(item1);
    printf("Result: {id:%d, v:{%d, %d}}\n\n", result.id, result.v[0], result.v[1]);

    // Working on extern here.
    printf("count 1: %d\n", count);
    int_count();
    printf("count 2: %d\n\n", count);

    // Working on static vars here.
    int1_count();
    int1_count();

    return 0;
}

