/******************************************************************************

                             STRUCTURES

*******************************************************************************/
#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
    char x;
};
    
int main()
{
    struct Rectangle r1={10,5};
    
    printf("Size of Rectangle is %lu \n", sizeof(r1));
    
    //fetching values of r1
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    
    //changing the value of r1
    r1.length= 12;
    r1.breadth=7;
    
    //fetching values of r1
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

    return 0;
}

