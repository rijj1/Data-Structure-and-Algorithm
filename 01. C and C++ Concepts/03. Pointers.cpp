/******************************************************************************

                                 POINTERS

*******************************************************************************/
#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    int a=10;
    int *p;
    p=&a;
    
    cout <<"Directly fetching a: "<< a<<endl;
    printf("Using pointer %d \n", *p);
    
    //Pointer in an array
    int A[5]={2,4,6,8,10};
    int *q, *r;
    q=A;
    r=&A[0];
    
    printf("Printing q: ");
    for(int i=0; i<5; i++){
        cout<<q[i]<<"   ";
    }
    
    printf("\nPrinting r: %d",*r);
    
    
    //Using Pointer create an Array in a Heap in C
    int *s;
    s=(int *)malloc(5*sizeof(int));
    s[0]=10; s[1]=15; s[2]=23; s[3]=21; s[4]=31;
    
    cout<<"\nAccesing array s from heap in C: ";
    for(int i=0; i<5 ; i++){
        cout<<s[i]<<"   ";
    }
    free(s); //Releasing the memory in C
    
    //Using Pointer create an Array in a Heap in C++
    int *t;
    t=new int[5];
    t[0]=13; t[1]=18; t[2]=76; t[3]=98; t[4]=34;
    
    cout<<"\nAccesing array t from heap in C++: ";
    for(int i=0; i<5 ; i++){
        cout<<t[i]<<"   ";
    }
    delete [ ] t; //Releasing the memory in C++
    cout<<endl;
    
    //Size of the Pointer is independent of its data type
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;
    // Pointers stores the adress and thus they takes same space rather than the type it stores the address
    return 0;
}
