//
// Created by erkam on 4/14/25.
//

#include <stdio.h>

int A(int x)
{
    return (x << 4) + x;
}

int B(int x)
{
    return x - (x << 3);
}

int C(int x)
{
    return (x << 6) - (x << 2);
}

int D(int x)
{
    return (x << 4) - (x << 7);
}

int main(void)
{
    // 17 = 1 0001
    int x      = 3;
    printf("If %d multiplied by 17, result will be: %d\n", x, A(x));

    // -7 = 1001
    printf("If %d multiplied by -7, result will be: %d\n", x, B(x));

    // 60 = 11 1100
    printf("If %d multiplied by 60, result will be: %d\n", x, C(x));

    // -112 = 11 1100
    printf("If %d multiplied by -112, result will be: %d\n", x, D(x));
}
