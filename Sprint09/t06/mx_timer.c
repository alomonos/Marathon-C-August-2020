#include <time.h>

double mx_timer(void (*f)()) {
    if (clock() < 0)
        return -1;
    double start = clock();
    f();
    double finish = clock();
    return (finish - start) / CLOCKS_PER_SEC;
}
