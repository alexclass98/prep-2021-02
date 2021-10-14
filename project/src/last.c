#include "last.h"
void bib(int num) {
    if (num < 1) {
    for (int i=1; num-i <= 0; i--) {
        printf("%d", i);
        if (num-i != 0)
        printf("%s", " ");
        }
    }
    else {
            for (int i=1; num-i >= 0; i++) {
            printf("%d", i);
            if (num-i != 0)
            printf("%s", " ");
            }
        }
}
