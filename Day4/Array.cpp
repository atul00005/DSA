// // Input and Output of Array

// #include<iostream>
// using namespace std;

// void arra(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i = 0 ;i<n;i++){
//     cin>>arr[i];
//   }

//   for(int i = 0 ; i<n;i++){
//     cout<<arr[i]<<" ";
//   }
// }

// int main(){

//   arra();
// }

// // Maximun Element in array

// #include<iostream>
// using namespace std;
// int maxi(){
//   int n ;
//   cin>>n;
//   int arr[5];

//   for(int i = 0; i<n;i++){
//     cin>>arr[i];
//   }

//   int max = arr[0];
//   for(int i = 0; i<n;i++){
    
//     if(max<arr[i]){
//       max = arr[i];
//     }
//   }
//   cout<<max;
//   return max;
  
// }

// int main(){
//   maxi();
// }

// // Minimum Element in array

// #include<iostream>
// using namespace std;
// int mini(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i = 0; i<n;i++){
//     cin>>arr[i];
//   }
  
//   int min = arr[0];
//   for(int i = 0;i<n;i++){
//     if(min>arr[i]){
//       min = arr[i];
//     }
//   }
//   cout<<min;
//   return min;

// } 
// int main(){
//   mini();
// }

// // Sum of Array Element

// #include<iostream>
// using namespace std;
// int sum(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i = 0;i<n;i++){
//     cin>>arr[i];
//   }
//   int add = 0;
//   for(int i = 0; i<n;i++){
//     add = add + arr[i];
//   }
//   cout<<add;
//   return add;
// }
// int main(){
//   sum();
// }

// // Count Even and Odd Numbers

// #include<iostream>
// using namespace std;

// int evenodd(){
//   int n;
//   cin>>n;

//   int arr[n];
//   for(int i = 0; i<n;i++){
//     cin>>arr[i];
//   }
//   int even = 0;
//   int odd = 0;
//   for(int i = 0; i<n;i++){
//     if(arr[i]%2==0){
//       even++;
//     }else{
//       odd++;
//     }
//   }
//   cout<<"Even: "<<even<<" "<<"Odd: "<<odd<<endl;
//   return even, odd;
// }

// int main(){
//   evenodd();
// }

// // Linear Search

// #include<iostream>
// using namespace std;
// int linear(){
//   int n;
//   cin>>n;
  
//   int arr[n];
//   for(int i = 0 ;i<n;i++){
//     cin>>arr[i];
//   }

//   int target;
//   cin>>target;
//   int find = false;
//   for(int i = 0; i<n;i++){
//     if(target==arr[i]){
//       find = true;
//       break;
//     }
//   }
//   if(find){
//     cout<<"Founded";
//   }else{
//     cout<<"Not Founded";
//   }
// }
// int main(){
//   linear();
// }

// // Reverse an array

// #include<iostream>
// using namespace std;
// int reverse(){
//   int n;
//   cin>>n;

//   int arr[n];
//   for(int i =0;i<n;i++){
//     cin>>arr[i];
//   }
//   int start = 0;
//   int end = n-1;

//   while(start<end){
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;

//     start ++;
//     end --;

//     for(int i = 0 ; i<n;i++){
//       cout<<arr[i];
//     }
//   }
  
//   return 0;
// }
// int main(){
//   reverse();
// }

// // Find Second Largest Element in Array

// #include<iostream>
// using namespace std;
// int second(){
//   int n;
//   cin>>n;
//   int arr[n];

//   for(int i =0;i<n;i++){
//     cin>>arr[i];
//   }
//   int largest = 0;
//   int secondlargest = 0;
//   for(int i = 0; i< n; i++){
//     if(largest<arr[i]){
//       secondlargest = largest;
//       largest = arr[i];
//     } else if(arr[i]>secondlargest && arr[i]!=largest){
//       secondlargest = arr[i];
//     };
//   }
//   cout<<largest;

//   cout<<secondlargest;
// }
// int main(){
// second();
// }

// // Find positve and negative element in array

// #include<iostream>
// using namespace std;
// int element(){
//   int n;
//   cin>>n;

//   int arr[n];
//   for(int i = 0;i<n;i++){
//     cin>>arr[i];
//   }

//   int positive = 0;
//   int negative = 0;
//   int zero = 0;
//   for(int i = 0; i<n;i++){
//     if(arr[i]>0){
//       positive++;
//     }else if(arr[i]<0){
//       negative++;
//     } else{
//       zero++;
//     }
//   }
//   cout<<"Positive Digit: "<<positive <<endl;
//   cout<<"Negative Digit: "<<negative <<endl;
//   cout<<"Zero Digit: "<<zero <<endl;
// }
// int main(){
//   element();
// }

//Check array are sorted or not

// #include<iostream>
// using namespace std;
// int sorted(){
//   int n; 
//   cin>>n;

//   int arr[n];
//   for(int i = 0; i<n;i++){
//     cin>>arr[i];
//   }
//   bool sort = true;
//   for(int i =0 ;i<n;i++){
//     if(arr[i]>arr[i+1]){
//       sort = false;
//       break;
//     }
//     } 
//     if(sort ) {
//       cout<<"Sorted";
//     }else {
//       cout<<"Unsorted";
//     }
    
//   }

// int main(){
//   sorted();
// }

//Rotation element 

#include<iostream>
using namespace std;

// int leftrotation(){
//   int n;
//   cin>>n;

//   int arr[n];
//   for(int i = 0; i<n;i++){
//     cin>>arr[i];
//   }

//   int first = arr[0];
//   for(int i = 0; i<n-1;i++){

//       arr[i] = arr[i+1];
//   }
//   arr[n-1] = first;

//   for(int i = 0; i<n;i++){
//     cout<<arr[i];
//   }
// }

// int rightrotation(){
//   int n;
//   cin>>n;

//   int arr[n];
//   for(int i =0; i<n;i++){
//     cin>>arr[i];
//   }

//   int last = arr[n-1];

//   for(int i = n-1; i>0;i--){
//     arr[i] = arr[i-1];
//   }
//   arr[0] = last;

//   for(int i = 0; i<n;i++){
//     cout<<arr[i];
//   }
// }

int krotation(){
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i<n ; i++){
    cin>>arr[i];
  }
  
}

int main(){
  krotation();
}