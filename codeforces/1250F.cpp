#include <iostream>
#include <vector>

using namespace std;

int main(){
	int64_t area;
	cin >> area;

	vector<int> divisors = {1};
	
	for(int i=2; i<=area; ++i){
		if(area%i == 0)
			divisors.push_back(i);
	}

	auto i=divisors.begin();
	auto j = divisors.end()-1;

	int64_t p = (2 * (*i)) + (2 * (*j));

	for(; i<=j; i++, j--){
		int t_p = (2 * (*i)) + (2 * (*j));
		
		if(t_p < p)
			p = t_p;
	}

	cout << p;

	return 0;
}



