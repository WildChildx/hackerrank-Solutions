//Call by value
#include<iostream>
using namespace std;
void printnumber(int number){

  cout<<"This is the number "<<number;
}

int main(){
  printnumber(10);
  return 0;
}