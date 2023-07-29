
#include <stdio.h>

int main(void)
{
    int a = 7;
    int* aPtr = &a;
    printf("raw value of a = %d, address of a = %p, raw value of aPtr = %p, address of aPtr = %p, value of address that aPtr has saved = %d\n", a, &a, aPtr, &aPtr, *aPtr);

    return 0;
}

