/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class mybase{
  public:
  void show()
  {
      cout<<"base class show"<<endl;
  }
  virtual void print()
  {
      cout<<"base class print"<<endl;}
  
  /*void print()
  {
      cout<<"base class print"<<endl;//base class show                                                                                                               
//base class print 
  }
  /*virtual void print()
  {
      cout<<"base class print"<<endl;//base class show                                                                                                               
//derived class print  
  }*/
};
class myderived:public mybase{
    void show()
  {
      cout<<"derived class show"<<endl;
  }
  void print()
  {
      cout<<"derived class print"<<endl;
  }
};
class myderived2:public mybase{
    void show()
  {
      cout<<"derived class show"<<endl;
  }
  void print()
  {
      cout<<"derived2 class print"<<endl;
  }
};
int main()
{
   mybase *ptr;//ptr to base class
   myderived obj;//object of derived class
   ptr=&obj;
   ptr->show();
   ptr->print();//runtimepoly
   myderived2 obj2;
   ptr=&obj2;
   ptr->show();
   ptr->print();//runtimepoly

    return 0;
}
