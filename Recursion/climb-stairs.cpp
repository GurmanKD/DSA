#include<iostream>
using namespace std;

int ways(int n){
  // base
  if(n<0) return 0;
  if(n==0) return 1;

  // recursive call
  return ways(n-1) + ways(n-2);
}

int main(){
  int n;
  cin>>n;
  int no_of_ways=ways(n);
  cout<<no_of_ways;
}