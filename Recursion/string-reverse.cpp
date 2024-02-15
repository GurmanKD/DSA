#include<iostream>
using namespace std;

void stringReverse(int i, int j, string& s){
  // base case
  if(i>j) return;

  swap(s[i],s[j]);
  i++;
  j--;
  // recursive call
  stringReverse(i, j, s);
}

int main(){
  string s="gurman";
  stringReverse(0, 5, s);
  cout<<s;
}


// void stringReverse(int i, string& s){
//   // base case
//   if(i>(s.length()-i-1)) return;

//   swap(s[i],s[s.length()-i-1]);
//   i++;
//   // recursive call
//   stringReverse(i, s);
// }
