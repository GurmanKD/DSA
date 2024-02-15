#include<iostream>
using namespace std;

int sum_arr(int arr[], int size){
 if(size==0) return 0;
 return arr[0]+sum_arr(arr+1, size-1);
}

// int sum_arr(int arr[], int size){
//  if(size==0) return 0;
//  if(size==1) return arr[0];
//  int remaining_part = sum_arr(arr+1, size-1);
//  return arr[0]+remaining_part;
// }



int main(){
  int arr[6]={1,2,3,4,5,6};
  int sum = sum_arr(arr, 6);
  cout<<sum;
}