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

int lower_one_mask(unsigned x)
{
    x &= ~(x >> 1);
    x &= ~(x >> 2);
    x &= ~(x >> 4);
    x &= ~(x >> 8);
    x &= ~(x >> 16);

    return x;
}

int main()
{
    int x = 0xFF00;
    printf("initial\t\t: ");
    print_bits(x);

    printf("result\t\t: ");
    print_bits(lower_one_mask(x));
}
