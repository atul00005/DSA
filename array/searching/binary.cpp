#include<iostream>
using namespace std;

int binary(){
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

  bool found = false;

  while(low<=high){
    int mid = (low+high)/2;

    if(arr[mid] == target){
      cout<<"Element is founded"<<mid;
      found = mid;
      break;
    } else if(arr[mid]<target){
      low = mid+1;
    }else{
      high = mid -1;
    }
  }
  for(int i = 0; i<n;i++){
  if(found !=false){
    cout<<"Element is founded"; 
  }else{
    cout<<"Element is not founded";
  }
  }


}
int main(){
  binary();
}