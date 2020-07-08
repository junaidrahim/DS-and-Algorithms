#include <iostream>

using namespace std;

int main(){
	long int t;
	cin >> t;
	
	for(long int i=0; i<t; i++){
		int a,b;
		cin >> a >> b;

		if(a<b){
			if(2*a > b) {
				cout << 4*a*a << '\n';
			}
			else {
				cout << b*b << '\n';
			}
		}
		else if (a==b){
			cout << 4*a*a << '\n';
		}
		else {
			if(2*b > a) {
				cout << 4*b*b << '\n';
			}
			else {
				cout << a*a << '\n';
			}
		}
	}

	return 0;
}
