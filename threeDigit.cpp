#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"Three Digit number";
    }
    else {
        cout<<"Not a Three digit number";
    }
}