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
  // Declare an uninitialized float array of size 20
  float floatArray[20];
  // Declare a reference to the array
  float(&refArray)[20] = floatArray;

  cout << "Values and logical addresses of the uninitialized float array:"
       << endl;
  for (int i = 0; i < 20; ++i)
  {
    cout << "floatArray[" << i << "]: Value = " << refArray[i]
              << ", Address = " << (void *)&refArray[i] << endl;
  }
  _pause();
  return EXIT_SUCCESS;
}