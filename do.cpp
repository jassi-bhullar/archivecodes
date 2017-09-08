#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int k,x;
	
	cin >> s;
	cin >> k;

	std::map<char, int> mp;
	std::vector<char> selected;
	selected.clear();

	for(int x=0; x < s.size(); x++){
		if(find(selected.begin(), selected.end(), s[x])!=selected.end())
			continue;

		if(mp[s[x]] > 0) mp[s[x]]++;
		else mp[s[x]] = 1;

		if(mp[s[x]] >= k)
			selected.push_back(s[x]);
	}

	for(int x=0; x < s.size(); x++)
		if(find(selected.begin(), selected.end(), s[x])!=selected.end())
			cout << s[x];

	cout << endl;

	
	return 0;
}