#include<stdio.h>

#define LEN 6
// function for printing array
void print_arr (int arr[], int len){
  printf("[");
  int i = 0;
  for(;i<len;i++){
    printf(" %d", *arr);
    arr++;
  }
  printf("]\n");
}

//returns average of values in array
double avg_arr (int arr[], int len){
  double sum = 0;
  int i;
  for(i=0; i<len;i++){
    sum+=*arr;
    arr++;
  }
  return sum/len;
}

int main(){
  int arr[LEN] = {1,2,3,4,5,6};
  print_arr(arr,LEN);
  printf("%lf\n",avg_arr(arr,LEN));
  return 0;
}
