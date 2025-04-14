//
// Created by erkam on 4/14/25.
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

int divide_power2(int x, int k)
{
    int neg_mask    = ~0 << ((sizeof(int) << 3) - 1);
    int is_negative = x & neg_mask;
    is_negative && (x += (1 << k) - 1);
    return x >> k;
}

int main(void)
{
    int x = 0x82336665;
    print_bits(x);
    print_bits(divide_power2(x, 3));
}
