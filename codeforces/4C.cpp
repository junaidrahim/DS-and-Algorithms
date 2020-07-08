#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
	int64_t n;
	cin >> n;

	unordered_map<string, bool> users;
	
	for(int64_t i=0; i<n; i++){
		string username;
		cin >> username;

		auto exists = users.find(username);

		if(exists == users.end()){
			users[username] = true;
			cout << "OK\n" ;
		} else {
			int k = 1;
			string new_username = username + to_string(k);
			auto found = users.find(new_username);

			while(found != users.end()){
				k++;
				new_username = username + to_string(k);
				found = users.find(new_username);
			}

			users[new_username] = true;
			cout << new_username << '\n';
		}
	}

	return 0;
}
