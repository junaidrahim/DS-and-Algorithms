#include <iostream>

using namespace std;

int main(){
	int s;
	int total = 0;

	cin >> s;

	int d[s];
	
	for(int i=0; i<s; ++i){
		cin >> d[i];
		total += d[i];
	}

	int a,b;
	cin >> a >> b;

	if(a>b){
		int t = a;
		a = b;
		b = t;
	}

	int path = 0;
	
	for(int i=a-1; i<b-1; ++i)
		path += d[i];

	if(path < total-path)
		cout << path;
	else
		cout << total-path;

	return 0;
}
