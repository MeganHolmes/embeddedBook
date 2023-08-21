
#include <stdio.h>

#define FEATURE_A 1

#ifndef FEATURE_A
#define FEATURE_A 0
#define FEATURE_B 1
#else
#define FEATURE_B 0
#endif

int main(void)
{

#ifdef FEATURE_A
    printf("FEATURE_A is defined\n");
#elif FEATURE_B
    printf("FEATURE_B is defined\n");
#else
#error "Neither FEATURE_A nor FEATURE_B is defined"
#endif

    return 0;
}
