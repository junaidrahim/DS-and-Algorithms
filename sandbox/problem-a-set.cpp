#include <iostream>
#include <set>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;

	int skills[n];
	int prices[n];
	
	for(int i=0; i<n ; i++){
		cin >> skills[i];
	}

	for(int i=0; i<n ; i++){
		cin >> prices[i];
	}

	multiset<float> min_sums;

	for(int i=0; i<n; i++){
		multiset<float> ratio_price;

		for(int j=0; j<n; j++){
			if(j == i){
				ratio_price.insert((float)prices[i]);
			}
			else {
				float p = ((float)skills[j] / (float)skills[i]) * prices[i];
		
				if(p > (float)prices[j])
					ratio_price.insert(p);
			}
		}
		
		float sum = 0;
		
		auto r = ratio_price.begin();

		if((int)ratio_price.size() >= k){
			for(int t=0; t<k; t++)
				sum += *(r++);

			min_sums.insert(sum);
		}
	}

	cout << ceil(*(min_sums.begin())) << endl;
	
	return 0;
}
