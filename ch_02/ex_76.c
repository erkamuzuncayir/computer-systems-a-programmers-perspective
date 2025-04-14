//
// Created by erkam on 4/14/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* my_calloc(size_t nmemb, size_t size)
{
    if (nmemb == 0 || size == 0)
        return NULL;

    size_t alloc_size = nmemb * size;
    if (alloc_size != nmemb * size)
    {
        fprintf(stderr, "Error: insufficient memory\n");
        return NULL;
    }

    void* ptr = malloc(alloc_size);
    if (ptr == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        return NULL;
    }

    memset(ptr, 0, size);

    return ptr;
}

int main(void)
{
    int *ptr = my_calloc(5, sizeof(int));

    printf("Size of memory block that ptr pointed is: %zu\n", 5 * sizeof(*ptr));

    free(ptr);
    return 0;
}
