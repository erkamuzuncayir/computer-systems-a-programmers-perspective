//
// Created by Erkam on 4/2/2025.
//

#include <stdio.h>

typedef unsigned char* byte_pointer;

unsigned replace_byte(unsigned x, int i, unsigned char b)
{
    size_t   shift = i * 8;
    unsigned mask  = ~(0xFF << shift);
    unsigned y     = b << shift;
    return (x & mask) | y;
}

void show_bytes(byte_pointer start, size_t len)
{
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer)&x, sizeof(int));
}

int main(void)
{
    int x = 0x12345678;
    // 0x12AB5678
    show_int(replace_byte(x, 2, 0xAB));
    // 0x123456AB
    show_int(replace_byte(x, 0, 0xAB));
}
