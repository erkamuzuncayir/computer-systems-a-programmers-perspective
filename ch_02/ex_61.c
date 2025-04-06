//
// Created by Erkam on 4/2/2025.
//

#include <stdbool.h>
#include <stdio.h>

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    for (int i = len - 1; i >= 0; i--)
        printf("%.2x ", start[i]);
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer)&x, sizeof(int));
}

bool is_any_bit_one(const int x)
{
    return !!x;
}

bool is_any_bit_zero(const int x)
{
    return !!~x;
}

bool is_any_lsb_one(const int x)
{
    return !!(x & 0xFF);
}

bool is_any_msb_zero(const int x)
{
    int shift = (sizeof(int) - 1) << 3;
    return ~(x >> shift) & 0xFF;
}

int main(void)
{
    int x = 0xF0FFFFFF;
    show_int(x);

    printf("%d\n", is_any_bit_one(x));
    printf("%d\n", is_any_bit_zero(x));
    printf("%d\n", is_any_lsb_one(x));
    printf("%d\n", is_any_msb_zero(x));
}
