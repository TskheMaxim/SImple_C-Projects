#include <iostream>
using namespace std;

void function(int a){
  if (a){
    if (a % 2 == 0){
      cout<<"The given number is even";
    }
    cout<<"The given number is odd";
  }
}

int main(){
  int input;
  cout<<"Enter the number to check for even or odd: ";
  cin>>input;
  int ans;
  function(input);
  
  return 0;
}