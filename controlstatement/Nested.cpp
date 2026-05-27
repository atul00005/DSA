// Pattern 1 : Square Pattern

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i =1; i<=4 ; i++){
    for(int j = 1; j<=n; j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

// Pattern 2 : Right Triangle Star Pattern

#include<iostream>
using namespace std;
int main(){
  int n; 
  cin>>n;
  for(int i = 1; i<=n;i++){
    for(int j = 1; j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

//Pattern 3 : Number Triangle

#include<iostream>
using namespace std;
int main(){
  for(int i = 1; i<=4;i++){
    for(int j = 1; j<=i;j++ ){
      cout<<j;
    }
    cout<<endl;
  }
}

//Pattern 4 : Repeated Number Pattern

#include<iostream>
using namespace std;
int main(){
  for(int i = 1; i<=4;i++){
    for(int j = 1; j<=i;j++){
      cout<<i;
    }
    cout<<endl;
  }
}

//Pattern 5 : Reverse Star Pattern

#include<iostream>
using namespace std;
int main(){
  for(int i = 5; i>1;i--){
    for(int j = 1 ; j<i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

//Pattern 6 : Reverse Number Pattern

#include<iostream>
using namespace std;
int main(){
  for(int i = 5; i>1;i--){
    for(int j = 1; j<i;j++){
      cout<<j;
    }
    cout<<endl;
  }
}

//Pattern 7 : Pyramid Pattern

#include<iostream>
using namespace std;
int main(){
  int n ;
  cin>>n;
  for(int i = 1; i<=n; i++){
    // Spaces 
    for(int j = 1 ; j<=n-i;j++){
      cout<<" ";
    }
    // Stars
    for(int j = 1; j<=2*i-1;j++){
      cout<<"*";
    }
    cout<<endl;
    }
  }

// Pattern 8 : Inverted Pattern

#include<iostream>
using namespace std;
int main(){
  int n ;
  cin>>n;
  for(int i = 1; i<=n;i++){
    for(int j = 1; j<i;j++){
      cout<<" ";
    }

    for(int j = 1 ; j<=2*(n-i)+1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

//Pattern 9 : Full Diamond Pattern

#include<iostream>
using namespace std;
int main(){
  int n ;
  cin>>n;

  for(int i = 1; i<=n;i++){
    for(int j = 1; j<=n-i;j++){
      cout<<" ";
    }

    for(int j = 1; j<=2*i-1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i = 1;i<=n;i++){
    for(int j = 1; j<=i;j++){
      cout<<" ";
    }
    
  for(int j = 1; j<=2*(n-i)-1;j++){
    cout<<"*";
  }
    cout<<endl;
  }
}

//Pattern 10 : Floyd's Triangle

#include<iostream>
using namespace std;
int main(){
  int n ;
  cin>>n;
  int num = 1;

  for(int i = 1; i<=n;i++){
    for(int j = 1; j<=i;j++){
      cout<<num<<" ";
      num++;
    }
    cout<<endl;
  }
}

//Pattern 11: Hollow Sqaure Pattern

#include<iostream>
using namespace std;
int main(){
  int n ;
  cin>>n;
  for(int i = 1; i<=n;i++){
    for(int j = 1;j<=n;j++){
      if(i==1||i==n||j==1||j==n){
        cout<<"*";
      }else {
        cout<<" ";
      }
    }
    cout<<endl;
  }
}

// Pattern 12: Butterfly Pattern

#include<iostream>
using namespace std;
int main(){
  int n ;
  cin>>n;
  
  for(int i = 1; i<=n;i++){
    for(int j = 1; j<=i;j++){
      cout<<"*";
    }
    for(int j = 1;j<=2*(n-i);j++){
      cout<<" ";
    }
    for(int j = 1; j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }

  for(int i = n;i>=1;i--){
    for(int j = 1;j<=i;j++){
      cout<<"*";
    }
    for(int j = 1;j<=2*(n-i);j++){
      cout<<" ";
    }
    for(int j = 1;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}