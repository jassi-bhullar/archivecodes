#include <bits/stdc++.h>
using namespace std;

template <typename T>
T square(T x){
    return x*x;
}

template <typename T>
class JaVector {
    T arr[1000];
    int size;
public:
    JaVector():size(0) {}
    void push(T x) { arr[size] = x; size++; }
    T get(int i) const { return arr[i]; }
    int getSize() const { return size; }
    void print() const { for(int i=0; i<size; i++) cout << arr[i] << endl; }
};

template <typename T>
JaVector<T> operator*(/* const */ JaVector<T>& rhs1, JaVector<T>& rhs2){
    JaVector<T> tmp;
    for (int i = 0; i < rhs1.getSize(); ++i)
    {   
        tmp.push(rhs1.get(i)*rhs2.get(i));
    }

    return tmp;
}

int main(){
    JaVector<int> j;
    j.push(3);
    j.push(12);
    j.push(-9);
    j.push(4);

    j = square(j);
    j.print();

    return 0;
}