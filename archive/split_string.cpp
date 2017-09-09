#include <bits/stdc++.h>
using namespace std;

void SplitStringWithDelimiterAndErase(string str, string delimiter){
	size_t pos=0;
	while((pos = str.find(delimiter)) != string::npos){
		cout << str.substr(0,pos) << endl;
		str.erase(0,pos + delimiter.size());
	}
	cout << str << endl;
}

void SplitString(string str, string delimiter){
	string token;
	while(token != str){
		token = str.substr(0,str.find(delimiter));
		str = str.substr(str.find(delimiter)+1);
		cout << token << endl;
	}
}

int main(){
	string str = "scott:pilgrim:is:dope";
	SplitString(str,":");
	return 0;
}