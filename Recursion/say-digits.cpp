#include<iostream>
#include<strings.h>
using namespace std;

string arr[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void say_digits(int &n){

  // base case
  if(n==0) return;

  // processing
  int curr = n % 10;
  n = n/10;

  // recursice call
  say_digits(n);
  cout<<arr[curr]<<" ";

}
int main(){
  int n;
  cin>>n;

  say_digits(n);
}