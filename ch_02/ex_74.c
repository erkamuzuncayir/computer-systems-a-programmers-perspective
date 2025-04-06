//
// Created by Erkam on 4/5/2025.
//

#include <limits.h>
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

/* Determine whether arguments can be subtracted without overflow */
int tsub_ok(int x, int y)
{
    int sub          = x - y;
    int pos_overflow = x > 0 && y < 0 && sub < 0;
    int neg_overflow = x < 0 && y > 0 && sub > 0;

    return !pos_overflow || !neg_overflow;
}

int main(void)
{
    printf("%d", tsub_ok(0, INT_MIN));
}
