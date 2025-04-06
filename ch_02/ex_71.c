//
// Created by Erkam on 4/4/2025.
//

#include <stdio.h>

typedef unsigned packed_t;

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

int xbyte(packed_t word, int bytenum)
{
    int max_bytenum = 3;
    int left_shift  = (max_bytenum - bytenum) << max_bytenum;
    return ((int)word << left_shift) >> 24;
}

int main(void)
{
    int x = 0xF071;

    print_bits(x);
    print_bits(xbyte(x, 1));
}
