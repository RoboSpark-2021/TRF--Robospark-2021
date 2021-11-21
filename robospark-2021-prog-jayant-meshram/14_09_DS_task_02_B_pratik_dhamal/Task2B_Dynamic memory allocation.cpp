#include<stdio.h>
#include<stdlib.h>
int main (){
	int Num,i,*ptr_new,New_Num;
	printf("\n -----------:  Memory allocation using Malloc :------");
	printf("\n Enter number of elements which you want to enter in array:--");
	scanf("%d",&Num);
	// Memory allocation using Malloc :------
	
	int *ptr=(int*)malloc(Num*sizeof(int));
	if (ptr==NULL)
	{
		printf("Memory cannot be allocated \n");
	}
	else 
	{
		printf("\n Enter the %d elements of array :--",Num);
		for(i=0;i<Num;i++)
		{
			scanf("%d",&*(ptr+i));
		}
		printf("\n Elements of array are :--");
		for(i=0;i<Num;i++)
		{
			printf("\t %d",*(ptr+i));
		}
	}
	
	printf("\n ---------:  Reallocation :------");
	
	printf("\n Enter number of elements for Reallocation :--");
	scanf("%d",&New_Num);
	
	ptr=(int*)realloc(ptr,sizeof(int)*(New_Num+Num));
	if (ptr==NULL)
	{
		printf("Memory cannot be allocated \n");
	}
	else 
	{
		printf("\n Enter the %d elements of array which you want to Reallocate :--",New_Num);
		for (int i=0;i<New_Num;i++)
		{
			scanf("%d",ptr+i);
		}
		printf("\n Elements of final array after reallocation are :--");
		for(int i=0;i<New_Num;i++)
		{
			printf("\t %d ",*(ptr+i));
		}
	}
	return 0;
}
