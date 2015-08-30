#include <stdio.h>

struct complex{
    int x;
    int y;
};

struct complex complex_add(struct complex x, struct complex y)
{
    struct complex new_complex = {};

    new_complex.x = x.x + y.x;

    new_complex.y = x.y + y.y;

    return new_complex;
}

int main(int argc, char* argv[])
{
    struct complex complex_variable = {1, 2};

    struct complex* point_complex = &complex_variable;

    printf("x is %i\n", complex_variable.x);
    printf("y is %i\n", point_complex->y);

    return 1;
}
