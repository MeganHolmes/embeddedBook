// Implement a macro to convert fahrenheit to celsius

// Includes
#include <stdio.h>
#include <stdint.h>

// Defines
#define CONVERT_F_TO_C(f) (f-32) / 1.8f

void main()
{
    // Test 1 Answer is 20.0
    float test_val = 68.0f;
    float result = CONVERT_F_TO_C(test_val);

    printf("%f Fahrenheit is %f in celsius\n", test_val, result);
}
