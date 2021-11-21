#include<stdio.h>


void main(){
int n,*p;
printf("Enter Elements to be allocate:");
scanf("%d",&n);

p=(int*)malloc(n*sizeof(int));

if(p==NULL){
        printf("Allocation failed");
}
else
{   for(int i=0;i<n;i++){
    printf("Enter Input \n");
    scanf("%d",&p[i]);
}
    printf("OUTPUT:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",p[i]);
    }


}
//Proceeding for reallocation of memory to the array
printf("Enter Number of element to be entered\n");
scanf("%d",&n);
p=realloc(p,n*sizeof(int));

if(p==NULL){
        printf("Allocation failed");
}
else
{   for(int i=0;i<n;i++){
    printf("Enter Input \n");
    scanf("%d",&p[i]);
}
    printf("OUTPUT:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",p[i]);
    }


}

}
