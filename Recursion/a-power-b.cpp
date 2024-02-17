#include<iostream>
using namespace std;
// int fun(int a, int b){
//   if(b==0) return 1;
//   return a*fun(a, b-1);
// } 

// => not optimised, for 2^1024, this takes 1024 iterations

int fun(int a, int b){
  if(b==0) return 1;
  if(b%2==0){
    return fun(a, b/2)*fun(a, b/2);
  }
  else{
    return a*fun(a, (b-1)/2)*fun(a, (b-1)/2);
  }
}

int main(){
  int a=2;
  int b=3;
  cout<<fun(2,3);
}