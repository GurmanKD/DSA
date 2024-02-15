#include <iostream>
using namespace std;

bool is_sorted(int arr[], int size){

  // base case
  if(size==0 || size == 1) return true;

  // recursive call
  return arr[size-2]<arr[size-1] && is_sorted(arr+1, size-1);
}

int main(){
  int arr[6]={1,2,3,4,5,0};
  int size=6;
  bool ans=is_sorted(arr, size); 
  cout<<ans;

}