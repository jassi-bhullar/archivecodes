#include <bits/stdc++.h>
using namespace std;

bool IsOdd(int i){
    return i%2;
}

void DisplayVector(vector<int> v){
    for(vector<int>::iterator itr = v.begin(); itr != v.end(); ++itr)
        cout << *itr << " ";
    cout << endl;
}

void DisplayOddNumsOfVector(vector<int> v){
    vector<int>::iterator itr = find_if(v.begin(), v.end(), IsOdd);
    cout << *itr << endl;
    ++itr;
    cout << *itr << endl;
    ++itr;
    cout << *itr << endl;

}

int main(){
    int a[]= {2,4,5,6,7,8,9};
    vector<int> vec(a,a+7);
    DisplayOddNumsOfVector(vec);

    return 0;
}