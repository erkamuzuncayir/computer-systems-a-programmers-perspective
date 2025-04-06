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

int sra(int x, int k)
{
    /* Perform shift logically */
    int xsrl = (unsigned)x >> k;

    int mask = x & (~0 << ((sizeof(int) << 3); - k));
    xsrl |= mask;
    return xsrl;
}

unsigned srl(unsigned x, int k)
{
    /* Perform shift arithmetically */
    unsigned xsra = (int)x >> k;

    unsigned y    = xsra;
    unsigned mask = ~0 << ((sizeof(int) << 3); - k);
    xsra &= y ^ mask;
    return xsra;
}

int main()
{
    int x = 0xF00F0000;
    printf("initial\t\t: ");
    print_bits(x);

    x = sra(x, 4);
    printf("first\t\t: ");
    print_bits(x);

    x = srl(x, 4);
    printf("second\t\t: ");
    print_bits(x);
}
