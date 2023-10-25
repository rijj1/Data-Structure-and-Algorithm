/******************************************************************************

                                    ARRAYS

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int A[5];
  A[0] = 12;
  A[1] = 15;
  A[2] = 25;

  cout << sizeof (A) << endl;
  cout << A[1] << endl;
  printf ("%d\n", A[2]);

  int B[10] = { 2, 4, 6, 8, 10, 12 };

  //for Loop
  for (int i = 0; i < 10; i++)
    {
      cout << B[i] << "   ";
    }
  cout << endl;

  //foreach Loop
for (int x:B)
    {
      cout << x << "  ";
    }
  cout << endl;

  //variable sized array
  int n;
  cout << "Size of variable sized array:" << endl;
  cin >> n;
  int C[n];

  for (int i = 0; i < n; i++)
    {
      cout << C[i] << "   ";
    }
  cout << endl;

  return 0;
}
