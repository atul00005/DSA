#include<iostream>
using namespace std;

int linear(){
  int n;
  cin>>n;

  int arr[n];
  for(int i = 0; i<n;i++){
    cin>>arr[i];
  }

  int target = 5;
  bool found = false;

  for(int i = 0; i<n;i++){
    if(arr[i] == target){
      cout<<"Element is Found in "<<i<<endl;
      found = true;
      break;
    }
  }
  if(found == false){
      cout<<"Element is not Found in the array";
    }
}
int main(){

  linear();
}