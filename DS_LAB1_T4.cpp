#include<iostream>
using namespace std;

int main(){
    int a = 20;// creat variable a with values 20 
    int* p = &a;//  pointer p stores address  of a

    cout << "a before: "<< a <<endl; //print 20
    *p = *p +5; // deference p change a's values to 25
    cout << " a after: "<< a << endl;   //print 25
    
    return 0;
}