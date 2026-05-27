#include<iostream>
using namespace std;
int selectionsort(){
  int n;
  cin>>n;

  int arr[n];
  for(int i = 0; i<n ;i++){
    cin>>arr[i];
  }

  for(int i = 0; i<n;i++){
    int minindex = i;
    for(int j = i+1; j<n;j++){
      if(arr[j]<arr[minindex]){
        minindex = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[minindex];
    arr[minindex] = temp;
  }
  for(int i = 0; i<n;i++){
    cout<<arr[i];
  }
}

int main(){
  selectionsort();
}