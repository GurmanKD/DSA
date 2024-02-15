#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key){
  // element not found
  if(start>end) return false;
  int mid=start +(end-start)/2;
  // element found
  if(arr[mid]==key) return true;
  if(arr[mid]<key) return binarySearch(arr, start, mid-1, key);
  else return binarySearch(arr, mid+1, end, key);
}

int main(){
  int arr[5]={1,2,3,4,5};
  cout<<binarySearch(arr, 0, 4, 3);
}