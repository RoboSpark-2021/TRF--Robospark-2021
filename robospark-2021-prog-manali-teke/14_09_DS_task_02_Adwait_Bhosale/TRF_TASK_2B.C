#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *ptr;
    // Taking user inputs (Using malloc) 
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    ptr = (int*)calloc(n, n*sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Enter element number %d: ",i);
        scanf("%d",&ptr[i]);
    }
    printf("The values you entered are:\n");
    for (int i = 1; i <=n; i++)
    {
        printf("%d ", ptr[i]);
    }
    // Updating the user input (Using realloc)
    printf("\nEnter the new number of integers: ");
    scanf("%d", &n);
    ptr = (int*)realloc(ptr, n*sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Enter element number %d: ",i);
        scanf("%d",&ptr[i]);
    }
    printf("\nThe updated values you entered are:\n");
    for (int i = 1; i <=n; i++)
    {
        printf("%d ", ptr[i]);
    }
    return 0;
}