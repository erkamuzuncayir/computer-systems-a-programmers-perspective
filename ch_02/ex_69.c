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

unsigned fits_bits(unsigned x, int n)
{
    int w = (sizeof(unsigned) << 3);
    return x << n | x >> (w - n - 1) >> 1;
}

int main()
{
    int x = 0x12345678;
    printf("initial\t\t: ");
    printf("%x\n", x);

    printf("result\t\t: ");
    printf("%x\n", fits_bits(x, 4));
}
