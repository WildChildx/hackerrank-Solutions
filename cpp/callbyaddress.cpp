//Call by value
#include<iostream>
using namespace std;
//if you write only ptr we get only address
//if you write *ptr we get value stored at that address
void printnumber(int *ptr){

    *ptr = *ptr +1;
  cout<<"This is the number "<<number;
}

int main(){
    int numA=10;
  printnumber(&numA);
  printnumber(&numA)
  return 0;
}