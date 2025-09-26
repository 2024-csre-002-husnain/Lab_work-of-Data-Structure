#include<iostream>
using namespace std;

int main(){
    int x = 42;
    int*p = &x;//p is a pointer 
    int** q= &p;//q is a pointer to pointer, storing the address of p
    
    //print values step by step
    cout << "x: "<< x <<endl;  // print 42
    cout << "*p: "<< *p <<endl;
    cout << "**q: " <<**q<<endl;//**q = value at address of p 42 */

    **q = 100;
    cout << "After **q= 100, x: "<< x <<endl;//print 100
return 0;
}