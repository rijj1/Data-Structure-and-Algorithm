/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int add (int a, int b)
{
  int c;
  c = a + b;
  
  return c;
}

int main ()
{
  int num1 = 10, num2 = 15, sum;
  
  sum = add (num1, num2);
  cout << "Sum is " << sum;

  return 0;
}

