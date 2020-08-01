/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class mybase
{
public:
  void show ()
  {
    cout << "base class show" << endl;
  }
  virtual void print () = 0;


};

class myderived:public mybase
{
public:
  void show ()
  {
    cout << "derived class show" << endl;
  }
  void print ()
  {
    cout << "derived class print" << endl;
  }
};

class myderived2:public mybase
{
public:
  void show ()
  {
    cout << "derived class show" << endl;
  }
  void print ()
  {
    cout << "derived2 class print" << endl;
  }
};

int
main ()
{
  myderived2 m;
  m.print ();
  return 0;
}
