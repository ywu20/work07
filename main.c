#include<stdio.h>

// function for printing array
void printArr (int arr[], int len){
  printf("[");
  int i = 0;
  for(;i<len;i++){
    printf(" %d", *arr);
    arr++;
  }
  printf("]\n");
}

int main(){
  int arr[4] = {1,2,3,4};
  printArr(arr,4);
  return 0;
}
