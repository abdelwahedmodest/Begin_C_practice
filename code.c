#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr1;
    int *ptr2;

    // malloc example
    ptr1 = (int *)malloc(n * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize the memory allocated by malloc
    for (int i = 0; i < n; i++) {
        ptr1[i] = i;
    }

    // calloc example
    ptr2 = (int *)calloc(n, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // The memory allocated by calloc is already initialized to zero

    // Do something with the allocated memory
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr1[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(ptr1);
    free(ptr2);

    return 0;
}
