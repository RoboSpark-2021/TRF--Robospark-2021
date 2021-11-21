#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int *array;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  array = (int *)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i);
    scanf("%d", &array[i]);
  }

  printf("The array is: [");
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("]\n");

  printf("Enter the new count: ");
  scanf("%d", &n);
  array = (int *)realloc(array, sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i);
    scanf("%d", &array[i]);
  }

  printf("The array is: [");
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("]\n");
}
