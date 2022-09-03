#include "timeout.h"
#include "t_delta.h"
#include "systick.h"

bool timeout(timeout_t *tout)
{
    uint32_t t1, t2;
    int32_t d;

    t1 = systick_get();
    t2 = tout->tout;
    d = t_delta(t1, t2);
    return d <= 0;
}

void timeout_set(timeout_t *tout, uint32_t delay)
{
    if (delay > UINT32_MAX / 2)
        delay = UINT32_MAX / 2;
    tout->tout = systick_get() + delay;
}
