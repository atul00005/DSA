#include<iostream>
using namespace std;
int lowerbound(){
  int n;
  cin>>n;

  int arr[n];
  for(int i = 0; i<n;i++){
    cin>>arr[i];
  }

  int target;
  cin>>target;
  int low = 0;
  int high = n-1;
  int lower = 0;

  while(low<=high){
    int mid = (low+high)/2;

    if(arr[mid]>=target){
      lower = mid;
      high = mid - 1;
    }else {
      low = mid +1;
    }
  }
  cout<<"Lower Bound: "<<lower;
}

int upperbound(){
  int n;
  cin>>n;

  int arr[n];
  for(int i = 0; i<n;i++){
    cin>>arr[i];
  }
  int target;
  cin>>target;

  int low = 0;
  int high = n-1;
  int upper = 0;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]>target){
      upper = mid;
      high = mid-1;
    } else{
      low= mid +1;
    }
  }
  cout<<"Upper: "<<upper;
}
int main(){
  upperbound();
}