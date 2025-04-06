//
// Created by Erkam on 4/2/2025.
//

#include <stdbool.h>
#include <stdio.h>

bool is_little_endian();

int main(void)
{
    if (is_little_endian())
        printf("Little endian\n");
    else
        printf("Big endian\n");
}

bool is_little_endian()
{
    int   x = 0x1;
    char* p = (char*)&x;
    return *p == 0x1;
}
