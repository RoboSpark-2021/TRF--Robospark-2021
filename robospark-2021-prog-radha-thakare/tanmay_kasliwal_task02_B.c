#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,*p,n1;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if (p==NULL){
        printf("Memory cant be allocated");
    }
    else{
        printf("Enter the elements of array\n");
        for (int i =0;i<n;i++){
            scanf("%d",&(p[i]));
        }
        printf("Elements in array are\n");
        for (int i =0;i<n;i++){
            printf("%d\n",p[i]);
        }
    }

    printf("Give the new size of array\n");
    scanf("%d",&n1);
    p=(int*)realloc(p,sizeof(int)*n1);
    if (p==NULL){
        printf("Memory cant be allocated");
    }
    else{
        printf("Enter the elements of array\n");
        for (int j =0;j<n1;j++){
            scanf("%d",&(p[j]));
        }
        printf("Elements in array are\n");
        for (int j =0;j<n1;j++){
            printf("%d\n",p[j]);
        }
    }


}