#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter marks : ";
  cin>>n;

  // Check if marks are valid (0 to 100)
  if(n < 0 || n > 100) {
    cout << "Invalid marks entered!";
  }
  else if(n>=81 and n<=100) {
    cout<<"Very Good";
  }
  else if(n>=61 and n<=80) {
    cout<<"Good";
  }
  else if(n>=41 and n<=60){
    cout<<"Average";  
  }
  else{
    cout<<"Fail";
  }
}
