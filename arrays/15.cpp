#include<iostream>
using namespace std;

int main(){

  int a[6] = {3,1,4,1,5,9};

  for(int i=0 ; i<6 ; i++){
    for(int j=0 ; j<5 ; j++){
      if(a[j+1]<a[j]){
        int temp = a[j+1];
        a[j+1] = a[j];
        a[j] = temp;
      }
    }
  }


  for(int i=0 ; i<6 ; i++){
    cout<<a[i]<<" ";
  }
  return 0;
}