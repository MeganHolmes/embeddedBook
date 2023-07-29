
#include <stdio.h>

int main(void)
{
    int intArr[5] = {1, 2, 3, 4, 5};
    int* intPtr = intArr;
    char charArr[5] = {'a', 'b', 'c', 'd', 'e'};
    char* charPtr = charArr;

    for (int idx = 0; idx < 5; idx++)
    {
        printf("intArr[%d] Value = %d\n", idx, *(intPtr + idx));
        printf("intArr[%d] Address = %p\n", idx, (intPtr + idx));
    }

    for (int idx = 0; idx < 5; idx++)
    {
        printf("charArr[%d] Value = %c\n", idx, *(charPtr + idx));
        printf("charArr[%d] Address = %p\n", idx, (charPtr + idx));
    }
}

