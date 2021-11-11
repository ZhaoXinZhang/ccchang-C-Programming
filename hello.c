#include <stdio.h>
#define ROWS 2
#define LEN 3

int main(void) {
    int a[] ={3,2,1,7,6,5,9,8,7};
    bubble_sort(a, 9);
    printf("Hello\tworld");
    // output_arr(a, 9);
}

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
      printf("i=%d\n",i);
    for (int j = 0; j < i; ++j) {
        printf("j=%d\n",j);
      if (arr[j] > arr[i]) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    output_arr(arr, 9);

    }
  }
}
void output_arr(int arr[], int n) {
  for (int i = 0; i < n; ++i) { printf("%d ", arr[i]); }
  printf("\n");
}