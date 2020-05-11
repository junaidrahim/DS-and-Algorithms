#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		int n;
		cin >> n;

		cout << pow(2, (n/2) + 1) - 2<< '\n';
	}

	return 0;
}
