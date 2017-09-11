#include <bits/stdc++.h>
using namespace std;

stack<int> ArraytoStack(int arr[], int size){
    stack<int> s;
    for(int i=0; i<size; i++)
        s.push(arr[i]);

    return s;
}

void TransferTop(stack<int> &x, stack<int> &y){
    y.push(x.top());
    x.pop();
}

void DisplayStack(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main(){
    int arr[7] = {1,2,2,4,4,6,7};

    stack<int> st = ArraytoStack(arr,7);
    stack<int> tmp;

    DisplayStack(st);

    int m,c;

    while(!st.empty()){
        if(tmp.empty()){
            TransferTop(st,tmp);
            continue;
        }

        if(st.top() > tmp.top()){
            c = st.top();
            st.pop();
            m = 0;
            while(c > tmp.top()){
                TransferTop(tmp,st);
                m++;
            }
            tmp.push(c);
            while(m--){
                TransferTop(st,tmp);
            }

        } else {
            TransferTop(st,tmp);
        }
    }


    DisplayStack(tmp);

    return 0;
}