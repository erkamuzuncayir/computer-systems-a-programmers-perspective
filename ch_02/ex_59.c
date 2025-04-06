//
// Created by Erkam on 4/2/2025.
//

#include <stdio.h>

typedef unsigned char* byte_pointer;

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
    int x = 0x89ABCDEF;
    int y = 0x76543210;

    // 0x765432EF.
    int z =(y & ~0xFF) | (x & 0xFF);

    show_int(x);
    show_int(y);
    show_int(z);
}
