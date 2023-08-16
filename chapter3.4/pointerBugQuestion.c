
#include <stdio.h>

int* createArray(void)
{
    int array[5] = {1, 3, 4, 2, 7};
    return array;
}

int main(void)
{
    int* array = createArray();

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
