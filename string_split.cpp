#include <bits/stdc++.h>
using namespace std;

void SplitStringWithDelimiter(string str, string delimiter){
	size_t pos=0;
	while((pos = str.find(delimiter)) != string::npos){
		cout << str.substr(0,pos) << endl;
		str.erase(0,pos + delimiter.size());
	}
	cout << str << endl;
}

int main(){
	string str = "scott:pilgrim:is:dope";
	SplitStringWithDelimiter(str,":");
	return 0;
}