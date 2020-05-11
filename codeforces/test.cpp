#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b){
	if(a.second == b.second) {
		return (a.first < b.first);
	}
	
	return (a.second > b.second);
}

int main(){
	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		int n;
		cin >> n;
		
		unordered_map<int, int> map;

		int last;

		for(int j=0; j<n; j++){
			int in;
			cin >> in;

			if(j == 0){
				last = in;
				map[in] = 1;
				continue;
			}
	
			if(in != last) {
				auto a = map.find(in);
				
				if(a == map.end()) {
					map[in] = 1;
				} else {
					map[in]++;
				}

				last = in;
			} else {
				last = -1;
			}

		}
		

		vector<pair<int, int>> res;

		for(auto k: map){
			res.push_back(pair<int, int>{k.first, k.second});
		}

		sort(res.begin(), res.end(), comp);

		cout << res[0].first << endl;
	}
	
	return 0;
}
