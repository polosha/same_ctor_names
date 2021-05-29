#include <iostream>
#include <iomanip>

using namespace std;

extern void foo();

struct A
{
  A()
  {
    cout << "A1\n" ;
  }
};

void bar()
{
  A a;
}

int main() {
  foo();
  bar();
  std::cout << "Hello World!\n";
}