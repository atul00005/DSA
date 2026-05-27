// Day 1 learning basic fundamental of c++ for dsa
// Variable, data types, loop, if else, operators, input output

// Practice Question Of Day 1

//Problem 1 : Print numbers from 1 to N
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i = 0; i<=n; i++){
    cout<<i<<endl;
  }
}

// Problem 2 : Sum of first N numbers

#include<iostream>
using namespace std;
int main(){
  int n ;
  cin>>n;
  int sum = 0;
  for(int i =1; i<=n;i++){
    sum +=i;
  }
  cout<<sum;
}


// Problem 3 : Find largest of two numbers

#include<iostream>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;

  if(a>b){
    cout<<"A is the larger than B "<<endl;
  }else{
    cout<<"B is the larger than A"<<endl;
  }
}

//Problem 4: Check positive, negative, or zero

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n>0){
    cout<<"It is Positive Number";
  }else if (n<0){
    cout<<"It is Negative Number";
  } else {
    cout<< "It is zero";
  }
}

// Problem 5: Print multiplication table

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i = 0; i<=10;i++){
    cout<< n << "x" << i << "="<< n*i <<endl;
  }
}

// Problem 6: Print "I am learning DSA"
#include<iostream>
using namespace std;
int main(){
  cout<<"I am learning DSA";
}


// Problem 7 : Take name as input and print it

#include<iostream>
using namespace std;
int main(){
  string name;
  cin>> name;

  cout<<name;
}

//Problem 8 : Take two numbers and print their sum and their product

#include<iostream>
using namespace std;
int main(){
  int a, b;
  cin>>a>>b;

  cout<<a+b<<endl;
  cout<<a*b<<endl;
}

//Problem 9: Check whether a number is even or odd

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  if(n%2==0){
    cout<<"This is Even Number";
  }else{
    cout<<"This is Odd Number";
  }
}

//Problem 10: Print numbers from N to 1

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i = n; i>=1 ;i--){
    cout<<i;
  }
}

//Problem 11: Final tasks

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n%2==0 && n>0){
    cout<<"Even and Positive Number";
  } else if(n%2!=0 && n>0){
    cout<<"Odd and Positive Number";
  } else if(n%2==0 && n<0){
    cout<<"Even and Negative Number";
  } else if(n%2!=0 && n<0){
    cout<<"Odd and Negative Number";
  }else{
    cout<<"Zero";
  }
}