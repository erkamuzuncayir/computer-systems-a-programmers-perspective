//
// Created by Erkam on 4/5/2025.
//

#include <stdint.h>
#include <stdio.h>

void print_bits(int x)
{
    int w = (sizeof(long long) << 3);
    for (int i = w - 1; i >= 0; i--)
    {
        printf("%d", (x >> i) & 1);
        if (i % 8 == 0)
            printf(" ");
    }
    printf("\n");
}

long long signed_high_prod(int x, int y)
{
    return (uint64_t)(x * y);
}

unsigned unsigned_high_prod(unsigned x, unsigned y)
{
    int      signed_part = signed_high_prod((int)x, (int)y);
    unsigned correction  = ((x >> 31) * y) + ((y >> 31) * x);
    return signed_part + correction;
}


int main(void)
{
    int x = 0xFFFFFFF;
    int y = 2;
    print_bits(unsigned_high_prod(x, y));
}
