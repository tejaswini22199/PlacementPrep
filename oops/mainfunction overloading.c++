//////////////////////////////////////worksfine
#include <iostream> 
using namespace std; 
class test{
    public:
int main(int a) 
{ 
    cout << a << "\n"; 
    return 0; 
} 
int main(char *a) 
{ 
    cout << a << endl; 
    return 0; 
} 
int main(int a, int b) 
{ 
    cout << a << " " << b; 
    return 0; 
} 
};
int main() 
{ 
    test obj;
    obj.main(3); 
    obj.main("C++"); 
    obj.main(9, 6); 
    return 0; 
}
o/p

3                                                                                                                             
C++                                                                                                                           
9 6                                                                                                                           
               
////////////////////////////////////////////////////////////error
#include <iostream> 
using namespace std; 
int main(int a) 
{ 
    cout << a << "\n"; 
    return 0; 
} 
int main(char *a) 
{ 
    cout << a << endl; 
    return 0; 
} 
int main(int a, int b) 
{ 
    cout << a << " " << b; 
    return 0; 
} 
int main() 
{ 
    main(3); 
    main("C++"); 
    main(9, 6); 
    return 0; 
