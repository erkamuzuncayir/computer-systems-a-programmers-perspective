//
// Created by erkam on 4/17/25.
//

#include <stdio.h>

int divide_power2(int x, int k)
{
    int neg_mask    = ~0 << ((sizeof(int) << 3) - 1);
    int is_negative = x & neg_mask;
    is_negative && (x += (1 << k) - 1);
    return x >> k;
}

int mod4(int n)
{
    int neg_mask    = ~0 << ((sizeof(int) << 3) - 1);
    int is_negative = n & neg_mask;
    is_negative && (n = (~(((~n + 1) & 0x3)) + 1));
    !is_negative && (n &= 0x3);
    return n;
}

int threefourths(int n)
{
    int quotient  = divide_power2(n, 2);
    quotient      = (quotient << 1) + quotient;
    int remainder = mod4(n);
    remainder     = (remainder << 1) + remainder;
    remainder     = divide_power2(remainder, 2);
    return quotient + remainder;
}

int main(void)
{
    int x = -8;
    printf("%d\n", threefourths(x));
}
