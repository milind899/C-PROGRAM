#include <stdio.h>

int main()
{
    // arithematic operators

    // +(addition)
    // -(subtraction)
    // *(multiplication)
    // /(division)
    // %(modulus)
    // ++(increment)
    // --(decrement)

    // x+=1 == x = x + 1
    // x-=1 == x = x - 1

    int x = 8;
    int y = 6;
    float z = x / (float)y; //using (float) to convert y from int to float variable

    printf("%f", z);

    return 0;
}