#include<iostream>
using namespace std;

void greet (){
  cout<<"Welcome to Dsa Series";
}
int main(){
  greet();
}

//Types of Function 

//Function without parameter

#include<iostream>
using namespace std;

void name(){
  cout<<"My Name is Atul Dadwal";
}
int main(){
  name();
}

//Function with parameter

#include<iostream>
using namespace std;

void sum(int a , int b){
  cout<<"Sum"<<" "<<a+b;
}

int main(){
  sum(4,7);
}

//Function with return value

#include<iostream>
using namespace std;

int sums(int a , int b){
  int sums = a+b;
  return sums;
}
int main(){
  int result;
  result = sums(5,3);
  cout<<"Sum "<<result<<endl;
}