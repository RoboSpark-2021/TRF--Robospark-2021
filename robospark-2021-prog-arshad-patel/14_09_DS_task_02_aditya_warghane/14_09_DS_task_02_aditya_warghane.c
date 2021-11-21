
#include <stdio.h>

int main()
{   int x,*ptr;
    printf("Enter size:-    ");                        // ask size from user and take i/p x
    scanf("%d",&x);
    
    ptr = (int *) malloc(x*sizeof(int));              // allocate the size x as required by user
    printf("\nEnter %d elements\n",x);
    for(int i=0;i<x;i++)
    {
        scanf("%d",ptr+i);                            // enter x elements in the dynamic array
    }
    for(int i=0;i<x;i++)
    {
        printf("%d ",*(ptr+i));                         //print x elements of dynamic array
    }
    
    
    printf("\nEnter realloc size:-  ");                 //  ask realloc size and update x
    scanf("%d",&x);
    
    ptr=(int*)realloc(ptr,x*sizeof(int));               // reallocate new size to ptr
    printf("\nEnter %d elements\n",x);
    for(int i=0;i<x;i++)
    {
        scanf("%d",ptr+i);                              // enter elements in the reallocated array
    }
    for(int i=0;i<x;i++)
    {
        printf("%d ",*(ptr+i));                         //print new elements of reallocated array
    }
    return 0;
}


