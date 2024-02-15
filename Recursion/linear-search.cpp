#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
  if(size==0) return false;
  return arr[0]==key || linearSearch(arr+1, size-1, key);
}

int main(){
  int arr[5]={1,2,3,4,5};
  cout<<linearSearch(arr, 5,3);
}