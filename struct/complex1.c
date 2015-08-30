#include <math.h>


struct complex_struct {
    double x, y;
};

double real_part(struct complex_struct z)
{
    return z.x;
}

double img_part(struct complex_struct z)
{
    return z.y;
}

double magnitude(struct complex_struct z)
{
    return sqrt(z.x * z.x + z.y * z.y);
}

double angle(struct complex_struct z)
{
    return atan2(z.y, z.x);
}

struct complex_struct complex_struct_form_img(double x, double y)
{
    struct complex_struct z;
    z.x = x;
    z.y = y;
    return z;
}
