#include <iostream>  
using namespace std; 

int main() {
    int A[10] = {2, 6, 8, 7, 1}; // array of size 10 but only 5 elements used
    int size = 5;                // logical size of array
    int pos = 3;                 // index where we want to insert
    int value = 9;               // new value to insert

    // shift elements right from the end until position
    for (int i = size; i > pos; --i) {
        A[i] = A[i - 1];
    }

    A[pos] = value; // place the new value
    size++;         // update logical size

    cout << "After insertion: \n";
    for (int i = 0; i < size; ++i)
        cout << A[i] << " "; // print updated array
    cout << endl;

    return 0;
}