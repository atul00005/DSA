// Function to add two numbers
// Function to subtract
// Function to multiply
// Function to find maximum
// Function to check even/odd

#include<iostream>
using namespace std;

int add(int a, int b){
  int add = a +b;
  return add;
}

int sub(int a, int b){
  int sub = a-b;
  return sub;
}

int mul(int a , int b){
  int mul = a*b;
  return mul;
}

void maxi(int a , int b){
  if(a>b){
    cout<<"a is greater than b";
  } else{
    cout<< "b is greater than a";
  }

}

void evenodd(int a , int b){
  if(a%2==0 && b%2==0){
    cout<<"Both is even number";
  }else if(a%2==0 && b%2!=0){
    cout<<"A is even number and B is odd Number";
  } else if(a%2!=0 && b%2==0){
    cout<<"A is odd number and B is even number";
  } else{
    cout<<"Both is odd number";
  }
}

int main(){
  int a,b;
  cin>>a>>b;
  int Addition = add(a,b);
  int Substraction = sub(a,b);
  int Multiply = mul(a,b);

  cout<<Addition<<endl;
  cout<<Substraction<<endl;
  cout<<Multiply<<endl;
  maxi(a,b);
  cout<<endl;
  evenodd(a,b);
};