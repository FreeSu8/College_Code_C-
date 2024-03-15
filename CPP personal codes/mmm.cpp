#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  char buffer[100];
  int age = 23;

  // print "My age is " and age variable to buffer variable
  sprintf(buffer, "My age is %o", age);

  // print buffer variable
  cout << buffer;
    
  return 0;
}

// Output: My age is 23