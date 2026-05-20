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

