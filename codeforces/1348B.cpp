#include <iostream>
#include <set>

using namespace std;

int main(){
	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		int n,k;

		cin >> n >> k;
		
		set<int> a;

		for(int j=0; j<n; j++){
			int temp;
			cin >> temp;
			a.insert(temp);
		}

		if((int)a.size() > k){
			cout << -1;
		}
		else {
			int diff = k - a.size();

			cout << n*k << endl;

			for(int j=0; j<n; j++){
				for(int l: a)
					cout << l << ' ';

				for(int m=0; m<diff; m++)
					cout << 1 << ' ';
			}

		}

		cout << '\n';
	}

	
	return 0;
}
