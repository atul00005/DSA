// Factorial

// #include<iostream>
// using namespace std;

// int factorial(int n){
//   int fact = 1;
//   for(int i = 1; i<=n;i++){
//     fact = fact*i;
//   }
//   return fact;
// }
// int main(){
//   int n;
//   cin>>n;
//   factorial(n);
// }

//Prime number

// #include<iostream>
// using namespace std;

// int prime(int n){
//   if(n<=1){
//     return false;
//   };
//   for(int i = 2;i<n;i++){
//     if(n%i==0){
//       return false;
//     }
//   }
//   return true;
// }

// int main(){
//   int n;
//   cin>>n;

//   if(prime(n)){
//     cout<<"It is Prime Number";
//   } else{
//     cout<<"It is not a Prime Number";
//   };
// }

// Count Digits

// #include<iostream>
// using namespace std;

// int count(int n){
//   int count = 0;
//   for(int i = 1; i<n;i++){
//     count++;
//     n = n/10;
//   }
//   return count;
// }

// int main(){
//   int n;
//   cin>>n;

//   cout<<count(n);
// }


//Reverse digit

// #include<iostream>
// using namespace std;
// int reverse(int n ){
//   int rev = 0;
//   while(n>0){
//     int digit = n%10;
//     rev = rev *10 +digit;
//     n = n/10;
//   }
//   return rev;
  
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<reverse(n)<<endl;
// }

//Palidrome Number

// #include<iostream>
// using namespace std;

// int reverse(int n){
//   int rev = 0;
//   while(n>0){
//     int digit = n%10;
//     rev = rev*10+digit;
//     n = n/10;
//   }
//   return rev;

// }

// int palidrome(int n){
//     if(reverse(n)== n){
//     cout<<"This is palidrome number"<<endl;
//   }else{
//     cout<<"This is not a palidrome number";
//   }
//   return true;
// }

// int main(){
//   int n;
//   cin>>n;
//   cout<<palidrome(n)<<endl;
// }

//Sum of Digits

// #include<iostream>
// using namespace std;

// int sum(int n){
//   int rev = 0;
//   int sums = 0;

//   while(n>0){
//     int digit = n%10;
//     rev = rev * 10 + digit;
//     n = n/10;
//     sums = sums +digit;
//   }
//   return sums;
// }
// int main(){
//   int n;
//   cin>>n;

//   cout<<sum(n)<<endl;
// }

//Armstrong number

#include<iostream>
using namespace std;
int Armstrong(int n){
  int original = n;
  int arm = 0;
  while(n>0){
    int digit = n%10;
    arm = arm + digit*digit*digit;
    n =n /10;
  }
  return arm;
}
int main(){
  int n;
  cin>>n;

  cout<<Armstrong(n)<<endl;
}