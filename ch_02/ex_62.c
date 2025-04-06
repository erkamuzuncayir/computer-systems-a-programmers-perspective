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

bool int_shifts_are_arithmetic()
{
    return (-1 >> 1) == -1;
}

int main(void)
{
    printf("Is shifts are arithmetic: %d\n", int_shifts_are_arithmetic());
}
