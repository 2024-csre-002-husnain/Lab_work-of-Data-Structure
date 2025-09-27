#include <iostream>
using namespace std;

// structure for Circular Linked List
// making a function for Josephus Iteration.
int josephusIterative(int n, int k) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result = (result + k) % i;
    }
    return result;
}

int main() {
    int n, k; 
    // creat for number of people (n)
    cout << "Enter number of people (n): ";
    cin >> n;
    // Creat for number of elimination(k)
    cout << "Enter step count (k): ";
    cin >> k;
    // For finding a safe or a survivor.
    // +1 is used for starting the loop from 1 not from 0.
    int survivor = josephusIterative(n, k) +1;
    cout << "The safe position is: " << survivor << endl;

    return 0;
}
