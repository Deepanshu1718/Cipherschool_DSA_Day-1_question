#include<iostream>
#include<String.h>
using namespace std;
int main(){
    int A;
    int B;
    int C;
    int D;
    int E;
    cout<<"Enter grade 1: ";
    cin>>A;
    cout<<"Enter grade 2: ";
    cin>>B;
    cout<<"Enter grade 3: ";
    cin>>C; 
    cout<<"Enter grade 4: ";
    cin>>D;
    cout<<"Enter grade 5: ";
    cin>>E;
    double avg = (A+B+C+D+E)/5.0;
    cout <<"The average grade is: "<<avg;  

}