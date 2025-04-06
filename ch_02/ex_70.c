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

unsigned fits_bits(int x, int n)
{
    return !(x & (((~0 << n - 1) | (1 << n - 1)) << 1));
}

int main()
{
    int x = 0x0000001F;
    printf("initial\t\t: ");
    print_bits(x);

    printf("result\t\t: ");
    printf("%x\n", fits_bits(x, 32));
}
