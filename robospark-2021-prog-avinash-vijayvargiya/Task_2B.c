#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    int n, i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        printf("Memory successfully allocated using calloc.\n");
        printf("Enter those elements:\n");
        for (i = 0; i < n; ++i) {
            scanf("%d",&ptr[i]);
        }
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
        printf("\n\nEnter the new size of the array\n");
        scanf("%d",&n);
        ptr = realloc(ptr, n * sizeof(int));
        printf("Memory successfully re-allocated using realloc.\n");
        printf("Enter those elements:\n");
        for (i = 0; i < n; ++i) {
           scanf("%d",&ptr[i]);
        }
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }

        free(ptr);
    }

    return 0;
}
