//
// Created by Erkam on 4/3/2025.
//

#include <stdio.h>

void print_bits(int x)
{
    int w = (sizeof(int) << 3);
    for (int i = w - 1; i >= 0; i--)
    {
        printf("%d", (x >> i) & 1);
        if (i % 8 == 0)
            printf(" ");
    }
    printf("\n");
}

int int_size_is_32()
{
    int set_msb    = 1 << 31;
    int beyond_msb = set_msb << 1;

    return set_msb && !beyond_msb;
}

int int_size_is_16()
{
    int set_msb    = 1 << 15;
    int beyond_msb = set_msb << 1;

    return set_msb && !beyond_msb;
}

int main()
{
    int x = 0xFF00;
    printf("initial\t\t: ");
    print_bits(x);

    printf("result\t\t: %d\n", int_size_is_32());
}
