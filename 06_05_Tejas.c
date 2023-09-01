/*
name = Tejas Budhe
Roll No. = 06
program id = 05
SE-IT (sem 3)
2023-24
*/

#include <stdio.h>
int main() {
  int n;
  double arr[20];
  printf("Enter the number of elements (1 to 10): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  //sorting array 
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]);

  return 0;
}
