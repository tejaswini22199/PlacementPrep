  
#include <iostream> 
using namespace std; 
class Base 
{ 
public: 
    double f(double i) 
    { 
        cout << "f(int): "; 
        return i+3.5; 
    } 
}; 
class Derived : public Base 
{ 
public: 
    int f(int d) 
    { 
        cout << "f(int): "; 
        return d+3; 
    } 
}; 
int main() 
{ 
    Derived* dp = new Derived; 
    cout << dp->f(3) << '\n'; 
    cout << dp->f(3.3) << '\n'; 
    delete dp; 
    return 0; 
}
f(int): 6                                                                                                                     
f(int): 6                                                                                                                     
          
