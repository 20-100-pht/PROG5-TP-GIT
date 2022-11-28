#include "bit_operations.h"

char get_bit(int32_t v, int p){
    return (v >> p) & 1;
}

int32_t set_bit(int32_t v, int p){
    return v | (1 << p);
}

int32_t clr_bit(int32_t v, int p){
    return v & ~(1 << p);
}