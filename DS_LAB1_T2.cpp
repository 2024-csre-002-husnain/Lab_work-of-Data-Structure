#include<iostream>
using namespace std;

int main(){
    int x[10];// declare array of size 10(extra space forinsertion)
    int n = 5;//current size of array
    
    //fill with first 5 natural numbers
     for (int i = 0; i < n; i++){
        x[i] = i + 1; //stores 1,2,3,4,5
     }
        //insert a new value at the end
        x[n]=99; //add 99 at the last position
        n++; //increase array size

//print update array
cout <<"After insertion ";
for (int i = 0; i < n; i++){
    cout << x[i] <<"  "<<endl;

}
return 0; //end program
}