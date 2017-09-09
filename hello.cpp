#include <bits/stdc++.h>
using namespace std;

// template <typename T>
// void DisplayArr(T arr[],int size){
//   for(int i=0; i<size; i++){
//     cout << arr[i] << endl;
//   }
// }

void Display(int *arr,int size){
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

// void foo(int* x, int size){
//   for(int i=0; i<size; i++){
//     *x -= 2;
//     ++x;
//   }
// }

int main(){
  int a[12] = {5,6,7,6,23,3,23,8,5,9,23,34};
  int bits[34] = {0};
  
  for(int i=0; i<12; i++){
    bits[a[i]-1]++;
  }

  Display(a,12);

  int i = 0;
  while(i < 34){
    if(bits[i]==0)
      ++i;
    else {
      cout << i+1 << " ";
      --bits[i];
    }
  }
  cout << endl;

  return 0;
}