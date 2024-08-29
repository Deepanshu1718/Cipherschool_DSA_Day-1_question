#include<iostream>
#include<String.h>
using namespace std;
int main(){
    string str;
    
    string str2;
    cout<<"Enter the first string: ";
    cin>>str;
    cout<<"Enter the second string: ";
    cin>>str2;
    string str3 = str +str2;
    cout<<str3<<endl;
}