//
// Created by Erkam on 4/2/2025.
//

#include <stdio.h>
#include <string.h>

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

void show_float(float x)
{
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void* x)
{
    show_bytes((byte_pointer)&x, sizeof(void*));
}

int main(void)
{
    const char* m = "mnopqr";
    show_bytes((byte_pointer)m, strlen(m));
}
