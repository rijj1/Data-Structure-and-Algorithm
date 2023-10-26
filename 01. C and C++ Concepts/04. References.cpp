/******************************************************************************

                               REFERENCES

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int &r=a;
    printf("a: %d   r: %d",a,r);
    
    int b=25;
    r=b;
    printf("\na: %d   r: %d",a,r);
    return 0;
}
