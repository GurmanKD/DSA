#include<iostream>
using namespace std;

bool checkPalindrome(string s, int i){
  if(i>s.length()-i-1) return true;

  return s[i]==s[s.length()-i-1] && checkPalindrome(s,i+1);
}

int main(){
  string s="cucucu";
  cout<<checkPalindrome(s, 0);
}
