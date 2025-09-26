#include<iostream>
using namespace std;

int main(){
int x[6];//declare an array of 6 integers
//fill array wth even numbers
for (int j = 0; j < 6; j++){
   x[j] = 2*j ;//stores )0,2,4,6,8,10

 }
 //print array elements
cout << " static array elements: ";
for (int j = 0 ; j < 6; j++){
   cout << x[j] <<" ";}//print Each element
   cout <<endl;//move to new line
   return 0;//end program 


}