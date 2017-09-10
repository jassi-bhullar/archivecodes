// tail recusrion example 

// void foo(int n, int running_total = 0)
#include <bits/stdc++.h>
using namespace std;

int foo(){

  for (int i=0; i<7; i++){
    if(i==3) return i;
    cout << i << " time\n";// endl;
  }
}

int main(){
  int i=0;
  int a[] = {6,2,2,-23,5,16};
  vector<int> s(a,a+6);

  sort(s.begin(), s.end());

  for(vector<int>::iterator itr=s.begin(); itr!=s.end(); ++itr)
    cout << *itr << " ";
  cout << endl;

  return 0;
}