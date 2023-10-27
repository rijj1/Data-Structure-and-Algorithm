/******************************************************************************

                       POINTER TO A STRUCTURE

*******************************************************************************/
#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main()
{
    Rectangle r={10,5};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    
    Rectangle *p=&r;
    cout<< (*p).length <<endl;
    cout<< p->breadth <<endl;
    
    //Creating Rectangle in heap
    Rectangle *q;
    q=(struct Rectangle *)malloc(sizeof(struct Rectangle)); // used in C
    //q=new Rectangle; //Used in C++
    q->length=15;
    q->breadth=7;
    cout<< q->length <<endl;
    cout<< q->breadth <<endl;    
    free(q);
    return 0;
}
