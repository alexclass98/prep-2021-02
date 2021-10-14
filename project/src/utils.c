#include "utils.h"

size_t timer_from(int from) {
    size_t counter = 0;
    for (int i = from; i >= 0; --i) {
        ++counter;
        printf("%d", i);
        if (i != 0)
        printf("%s", " ");
        else
        printf("%s", "\n");
    }
    return counter;
}


int custom_pow(int base, int power) {
    int Mult = 1;
    for (int i=0; i < power; i++)
    Mult*=base;
    return Mult;
}

