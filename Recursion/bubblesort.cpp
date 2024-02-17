#include<iostream>
#include<vector>
using namespace std;

void bubbelSort(vector<int> &arr, int size){
  for(int i=1; i<size; i++){
    // for round 1 to size-1
    bool swapped = false;

    for(int j=0; j<size-i; j++){
      // process element till size-i index
      if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
        swapped=true;
      }
    }

    if(swapped ==  false) break; // already sorted
  }
}

void rbubbleSort(vector<int> &arr, int size){
  //base case
  if(size==0 || size==1) return;

  //solve 1 case, ie, largest element ko uski sahi jagah pe pahauchado
  for(int i=0; i<size-1; i++){
    if(arr[i]>arr[i+1]) swap(arr[i], arr[i+1]);
  }

  //baaki kaam recursion sambhaal lega
  rbubbleSort(arr, size-1);
}

int main(){
  vector<int> arr;
  arr = {1,0,2,9,3,8,4,7,5,6}; // works in c++11 and later versions
  rbubbleSort(arr,10);
  for(int i=0; i<10; i++) 
    cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}

//g++ -std=c++11 your_file.cpp -o your_executable
//./your_executable
