#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *ptr;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr == NULL){
        printf("Memory is not Allocated\n");
    }
    else{
        printf("Memory Allocated\n");
        for(int i=1;i<=n;i++){
            printf("Enter the element %d: ",i);
            scanf("%d",&ptr[i]);
        }
        printf("The elements of the array are \n");
        for(int i=1;i<=n;i++){
            printf("%d\n",ptr[i]);
        }
        int j;
        printf("Enter the updated size of array: ");
        scanf("%d",&j);
        ptr=realloc(ptr,j*sizeof(int));
        printf("Memory Reallocated Successfully\n");
        for(int i=1;i<=j;i++){
            printf("Enter the element %d: ",i);
            scanf("%d",&ptr[i]);
        }
        printf("The elements of the array are \n");
        for(int i=1;i<=j;i++){
            printf("%d\n",ptr[i]);
        }

    }
}