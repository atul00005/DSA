#include<iostream>
using namespace std;
int countoccurance(){
  int n;
  cin>>n;

  int arr[n];
  for(int i =0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cin>>target;
  int count = 0;
  for(int i = 0; i<n;i++){
    if(arr[i]== target){
      count++;
    }
  }
  cout<<"Occurance: "<<count;
}

int firstandlast(){
  int n;
  cin>>n;

  int arr[n];
  for(int i = 0; i<n;i++){
    cin>>arr[i];
  }

  int target;
  cin>>target;
  int first = 0;
  int last = n-1;
  for(int i = 0; i<n;i++){
    if(arr[i]==target){
      if(first == 0){
        first = i;
      }
      last = i;
  }
}
  cout<<first;
  cout<< last;
}

int firstbinaryoccurance(){
  int n; 
  cin>>n;

  int arr[n];
  for(int i =0; i<n;i++){
    cin>>arr[i];
  }

  int low = 0;
  int high = n-1;
  int target;
  cin>>target;
  int first = 0;
  while(low<=high){
    int mid = (low+high)/2;

    if(arr[mid] == target){
        first = mid;
        high = mid -1;
      }else if(arr[mid]<target){
        low = mid+1;
      }else{
        high = mid -1;
      }
    }
    cout<<"Occurances: "<<first; 
  }

int lastbinaryoccurance(){
  int n;
  cin>>n;

  int arr[n];
  for(int i = 0; i<n;i++){
    cin>>arr[i];
  }
  
  int low = 0;
  int high = n-1;
  int target;
  cin>>target;
  int last = 0;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==target){
      last = mid;
      low = mid+1;
    }else if(arr[mid]<target){
      low = mid+1;
    }else{
      high = mid-1;
    }
  }
  cout<<"Occurance: "<<last;
}

int main(){
  lastbinaryoccurance();
}