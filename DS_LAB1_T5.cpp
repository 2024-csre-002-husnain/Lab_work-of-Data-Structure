#include<iostream>
using namespace std;

int main(){
    //Array of pointer to string literals
 const char* names[] = {" Ali", "Sara","Azeem","Noor"};

    //Find how many names are in the array  
 int n = sizeof(names)/sizeof(names[0]);

    //print each name
    for (int i = 0; i < n; ++i) {
        cout << " Names [" << i <<"] ->" << names[i]<<endl;
    }
    //Change the 3rd element ( Azeem)to point to "Fatima"
    const char* replacement = "Fatima";
    names[2] = replacement;

    cout << " After change, names[2] -> "<< names[2] << endl;
    return 0;

}