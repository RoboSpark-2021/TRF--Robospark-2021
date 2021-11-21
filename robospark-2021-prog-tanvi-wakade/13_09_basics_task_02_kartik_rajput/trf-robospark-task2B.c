/*
Kartik Rajput
Task 2 Date 13-09-2021
B.
Code for dynamic array using malloc/calloc, take size from user take data inputs, print them, again take size from user and realloc with new size, take user-data and again print new data.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int* ptr;
int no;
printf("Enter size : ");
scanf("%d", &no);
ptr = (int*)malloc(no * sizeof(int));
if (ptr != NULL)
    printf("Memory is allocated using malloc\n");
else
    printf("Memory reallocation failed\n");
for (int i=0;i<no;i++)
{
printf("enter value of %d element : ",i+1);
scanf("%d",&ptr[i]);
}
printf("Array elements : ");
for (int i=0;i<no;i++)
    printf("%d \t",ptr[i]);
printf("\nEnter size to reallocate : ");
scanf("%d", &no);
ptr = realloc(ptr, no * sizeof(int));
if (ptr != NULL)
    printf("Memory reallocated using realloc\n");
else
    printf("Memory reallocation failed\n");
printf("Array elements after reallocation : ");
for (int i=0;i<no;i++)
    printf("%d \t",ptr[i]);
printf("\n");
for (int i=0;i<no;i++)
{
printf("enter value of %d element : ",i+1);
scanf("%d",&ptr[i]);
}
printf("Array elements : ");
for (int i=0;i<no;i++)
    printf("%d \t",ptr[i]);
}
