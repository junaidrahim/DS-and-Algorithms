#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

string p(int x1, int y1, int x2, int y2){
	string r = to_string(x1) + "," + to_string(y1) + ","
				+ to_string(x2) + "," + to_string(y2);
	return r;
}

string rev_p(int x1, int y1, int x2, int y2){
	string r = to_string(x2) + "," + to_string(y2) + ","
				+ to_string(x1) + "," + to_string(y1);
	return r;
}
	

int main(){
	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		string in;
		cin >> in;

		int64_t total = 0;

		unordered_map<string, bool> path;

		int x = 0;
		int y = 0;


		for(char c: in){
			if (c == 'N') {
				string step = p(x,y,x,y+1);
				string rev_step = rev_p(x,y,x,y+1);

				auto e = path.find(step);
				auto rev_e = path.find(rev_step);

				if((e == path.end()) && (rev_e == path.end())){
					total += 5;
				}
				else {
					total += 1;
				}

				path[step] = true;
				y += 1;
			}
			else if (c == 'S') {
				string step = p(x,y,x,y-1);
				string rev_step = rev_p(x,y,x,y-1);

				auto e = path.find(step);
				auto rev_e = path.find(rev_step);

				if((e == path.end()) && (rev_e == path.end())){
					total += 5;
				}
				else {
					total += 1;
				}

				path[step] = true;
				y -= 1;
			}
			else if (c == 'E') {
				string step = p(x,y,x+1,y);
				string rev_step = rev_p(x,y,x+1,y);

				auto e = path.find(step);
				auto rev_e = path.find(rev_step);

				if((e == path.end()) && (rev_e == path.end())){
					total += 5;
				}
				else {
					total += 1;
				}

				path[step] = true;
				x += 1;
			}
			else if (c == 'W') {
				string step = p(x,y,x-1,y);
				string rev_step = rev_p(x,y,x-1,y);

				auto e = path.find(step);
				auto rev_e = path.find(rev_step);

				if((e == path.end()) && (rev_e == path.end())){
					total += 5;
				}
				else {
					total += 1;
				}

				path[step] = true;
				x -= 1;
			}
		}

		cout << total << endl;
	}

	return 0;
}
