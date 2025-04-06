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
    return ~(~0 << x - 1) | (1 << x - 1);
}

int main()
{
    int x = 0x3F;
    printf("initial\t\t: ");
    print_bits(x);

    printf("result\t\t: ");
    lower_one_mask(6);
}
