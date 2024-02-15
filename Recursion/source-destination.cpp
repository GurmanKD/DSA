#include<iostream>
using namespace std;
void sd(int source, int destination){
  // base case
  if(source==destination){
    cout<<"pahauch gaya!";
    return;
  }
  // processing
  cout<< source<<" "<<destination<<endl;
  source++;
  // recursive statement
  sd(source, destination);
}
int main(){
  int source=1, destination=10;
  sd(source, destination);
}