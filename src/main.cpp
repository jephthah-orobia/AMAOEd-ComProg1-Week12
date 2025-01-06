/* ****************************************************************
 * @author: Jephthah M. Orobia
 * @app name: AMAOEd-ComProg1-Week12
 * @app desc: Laboratory Exercise 11
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main()
{
  // Declare an uninitialized character array of size 10
  char charArray[10];
  // Declare a pointer pointing to the array
  char *ptr = charArray;

  cout << "Values and logical addresses of the uninitialized character array:" << endl;
  for (int i = 0; i < 10; ++i)
  {
    cout << "charArray[" << i << "]: Value = " << charArray[i] << ", Address = " << (void *)&charArray[i] << endl;
  }
  cout << "\nPointer to the array:" << endl;
  cout << "ptr: Value = " << (void *)ptr << ", Address = " << &ptr << endl;
  cout << endl;
  _pause();
  return EXIT_SUCCESS;
}
