#include <iostream>
#include <string>

using namespace std;

int main(){
	int64_t n;
	cin >> n;

	int64_t total = 0;

	for(int64_t i=0; i<n; i++){
		string a;
		cin >> a;

		if(a == "Tetrahedron")
			total += 4;
		else if (a == "Cube")
			total+= 6;
		else if (a == "Octahedron")
			total += 8;
		else if (a == "Dodecahedron")
			total += 12;
		else if (a == "Icosahedron")
			total += 20;
	}

	cout << total;

	return 0;
}
