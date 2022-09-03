#include "t_delta.h"

int t_delta(uint32_t t1, uint32_t t2)
{
    uint32_t r1, r2, d;
    int s;

    d = t2 - t1;
    if (d < UINT32_MAX / 2) {
        r1 = t1;
        r2 = t2;
        s = 1;
    } else {
        r1 = t2;
        r2 = t1;
        s = -1;
    }
    return s * (int32_t)(r2 - r1);
}
