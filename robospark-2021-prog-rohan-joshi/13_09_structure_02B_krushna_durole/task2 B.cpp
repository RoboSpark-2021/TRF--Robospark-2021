#include<iostream>
using namespace std;
int main()
{
    //code for the take the size of the allocate memory using malloc function
    //code for increasing the size of it .
    int *arr,*new_arr, n1,i;
    printf("Enter the size of the array you want . ");
    scanf("%d",&n1);
    arr = (int *)malloc(sizeof(int)*n1);
    for(i=0;i<n1;i++)
    {
        cin>>(*(arr + i));

    }
    printf("The array elements are : \n");
     for(i=0;i<n1;i++)
    {
         cout<<(*(arr+i))<<endl;
    }




    printf("Enter the new size you want of the array");
    int n2;
    cin>>n2;
    new_arr = (int*)realloc(arr, n2*sizeof(int));
    for(i=0;i<n2;i++)
    {
        cin>>(*(new_arr+i));

    }
    printf("The array elements are : \n");
    for(i=0;i<n2;i++)
    {
         cout<<(*(new_arr+i));

    }

}
