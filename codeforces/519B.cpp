#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
	int n, e;
	unordered_map<int, int> map;

	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> e;
		map[e] = 1;
	}

	for(int i=0; i<n-1; i++){
		cin >> e;
		map[e]++;
	}

	for(int i=0; i<n-2; i++){
		cin >> e;
		map[e]++;
	}

	for(auto x: map){
		if(x.second == 1)
			cout << x.first << ' ';
	}

	for(auto x: map){
		if(x.second == 2)
			cout << x.first << ' ';
	}
		
	return 0;
}
