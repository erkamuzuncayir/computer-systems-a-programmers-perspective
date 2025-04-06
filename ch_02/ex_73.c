//
// Created by Erkam on 4/4/2025.
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

/* Addition that saturates to TMin or TMax */
int saturating_add(int x, int y)
{
    int w                = (sizeof(int) << 3);
    int sum              = x + y;
    int pos_overflow     = (x >> (w - 1) & 1) & !(sum >> (w - 1) & 1) | (y >> (w - 1) & 1) & !(sum >> (w - 1) & 1);
    int neg_overflow     = !(x >> (w - 1) & 1) & (sum >> (w - 1) & 1) | !(y >> (w - 1) & 1) & (sum >> (w - 1) & 1);
    pos_overflow && (sum = INT_MAX) || neg_overflow && (sum = INT_MIN);
    return sum;
}

int main(void)
{
    int x = 0x1, y = 0x7FFFFFFF;
    printf("%d\n", saturating_add(x, y));
}
