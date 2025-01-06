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
  int myInt = 900;
  int *myIntPtr = &myInt;

  cout << "Using the int variable: " << endl
       << "\tthe value is " << myInt
       << " and it's logical address is " << &myInt << endl;
  cout << "Using the pointer variable: " << endl
       << "\tthe value is " << *myIntPtr
       << " and it's logical address is " << myIntPtr << endl;

  _pause();
  return EXIT_SUCCESS;
}
