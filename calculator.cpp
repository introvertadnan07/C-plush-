#include<iostream>
using namespace std;
int main(){
    int n1;
    cin>>n1; // number 1
    char op; // operator
    cin>>op;
    int n2;
    cin>>n2;
    switch (op){
        case '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        case '%':
            cout<<n1%n2;
            break;
        default:
            cout<<"Invalid Opertaor";

    }
   
}