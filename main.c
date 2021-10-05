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

//copy array
void cp_arr (int arr1[], int arr2[], int len){
int i;
  for(i=0;i<len;i++){
    *arr2 = *arr1;
    arr1++;
    arr2++;
  }
}
int main(){
  int arr[LEN] = {1,2,3,4,5,6};
  print_arr(arr,LEN);
  printf("%lf\n",avg_arr(arr,LEN));
  int arr2[LEN] ={0,0,0,0,0,0};
  cp_arr(arr,arr2,LEN);
  print_arr(arr2,LEN);
  return 0;
}
