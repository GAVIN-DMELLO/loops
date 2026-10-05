#include<iostream>
using namespace std;

int main(){

  int a[5] = {4 , 7 , 1 , 8 , 5};


  int max = a[0];
  int min = a[0];

  for(int i=0 ; i<5 ; i++){
    if(a[i]<min){
      min=a[i];
    }

    if(a[i]>max){
      max=a[i];
    }
  }

  cout<<max<<" "<<min<<endl;

  return 0;
}