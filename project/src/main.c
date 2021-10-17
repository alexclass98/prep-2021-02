#include "utils.h"
#include "mod.h"
#include "iterator.h"
#include <stdlib.h>

#define ERR_ARGS_COUNT (-1)
#define ERR_WRONG_FLG (-2)

#define TST_FOO_FIX     1
#define TST_FOO_IMPL    2
#define TST_MOD_IMPL    3

int main(int argc, const char** argv) {
    if (argc < 3) {
        return ERR_ARGS_COUNT;
    }

    int Test_case = atoi(argv[1]);
    const char* data;
    data = argv[2];

    switch (Test_case) {
        case TST_FOO_FIX: {
             printf("%zu\n", timer_from(atoi(data)));
             break;
		}

        case TST_FOO_IMPL: {
            if (argc == 4) {
                 printf("%i\n", custom_pow(atoi(data), atoi(argv[3])));
                break;
            } else {
                return ERR_ARGS_COUNT;
            }
        }
        case TST_MOD_IMPL: {
            mod(atoi(data));
                 break;
        }
        case 4 : {
            print_range(atoi(data));
            break;
        }
        default: {
            return ERR_WRONG_FLG;
        }
    }
}
