//
// Created by Erkam on 4/4/2025.
//

#include <stdbool.h>
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

/* Copy integer into buffer if space is available */
bool copy_int(int val, int maxbytes)
{
    if (maxbytes >= (int)sizeof(val))
        return true;
    // memcpy(buf, (void*)&val, sizeof(val));

    return false;
}

int main(void)
{
    printf("%d\n", copy_int(3, 30));
}
