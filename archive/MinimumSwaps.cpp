#include <bits/stdc++.h>
using namespace std;

int Index(vector<int> arr, int x){
    for(int i=0; i<arr.size(); i++)
        if(arr[i] == x) return i;
}

int main(){
    int t,n,swapCount,tmp,j=0;
    vector<int> a, s;
    cin >> t;
    while(t--){
        swapCount = 0;
        j++;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }

        s = a;
        sort(s.begin(), s.end());

         for(vector<int>::iterator itr=s.begin(); itr!=s.end(); ++itr)
            cout << *itr << " ";
          cout << endl;


        for(int i=0; i<n; i++) {
            if (a[i] != s[i]){
                swapCount++;
                int index = Index(a, s[i]);
                a[i] ^= a[index];
                a[index] ^= a[i];
                a[i] ^= a[index];
            }
        }
        cout << "Case " << j << ": " << swapCount << endl;
    }

    return 0;
}