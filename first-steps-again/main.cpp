#include <iostream>
#include "Xyz.h"

using namespace std;

int main()
{
//   cout << "Hello World" << endl; 

    Xyz myXyz;
    int a[] = {1,2,3,4,5,6,7};
    int avg = 0;
    
    myXyz.show_x();
    
    cout << sizeof(a) << endl;
    
    for(int k=0; k<7; k++)  avg += a[k];
    
    avg /= 7;
    
    cout << "avg=" << avg << endl;
   
   return 0;
}

