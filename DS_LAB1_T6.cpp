#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"How many scores? "; // asks user for number of score
    cin>>n; // input n from keyboard

    //creat an array of integers at run time using 'new'
    int* scores = new int[n];

    //inupt the score
    cout<<"Enter "<<n<<" scores: "<<endl;
    for(int i=0; i<n; ++i){
       cin >> scores[i]; // store each score in the array
    }

    //calculate the sum of scores
    long sum = 0;
    for(int i=0; i<n; ++i){
        sum+=scores[i];
    }
    //print the average
    cout<<"Average = "<<(double)sum/n<<endl;
    
    //for free the memory (good practice)
    delete[] scores; //free array
    scores = nullptr;  //set pointer to null for safety
    
    return 0;
}