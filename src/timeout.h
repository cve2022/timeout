#ifndef TIMEOUT_H
#define TIMEOUT_H

#include <stdint.h>
#include <stdbool.h>

typedef struct {
    uint32_t tout;
} timeout_t;

bool timeout(timeout_t *tout);
void timeout_set(timeout_t *tout, uint32_t delay);

#endif
