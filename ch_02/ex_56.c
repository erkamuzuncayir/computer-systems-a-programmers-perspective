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
    const char* n = "123415";
    const int x = 1234;
    const float f = 1234.0f;
    show_bytes((byte_pointer)m, strlen(m));
    show_bytes((byte_pointer)n, strlen(n));
    show_int(x);
    show_float(f);
}