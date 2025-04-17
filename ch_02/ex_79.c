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

int threefourths(int x)
{
	return divide_power2 (((x << 2) - x), 2);
}

int main(void)
{
	int x = 3;
	printf("%d\n", x);
	printf("%d\n", threefourths (x));
}
