#include <iostream>

using namespace std;

struct A
{
  A()
  {
    cout << "A2\n" ;
  }
};

void foo()
{
A a;
}