
#define CIRCULAR_BUFFER_SIZE 12

int main(void)
{
    int circularBuffer[12];
    int i;

    for (i = 0; i < 12; i++)
    {
        circularBuffer[i] = i;
    }

    return 0;
}
