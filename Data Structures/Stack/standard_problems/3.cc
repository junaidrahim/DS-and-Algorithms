// Prefix to Postfix

#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

string prefix_to_postfix(string input) {
    stack<string> st;
    string answer;

    for (auto c = input.end()-1; c>=input.begin(); --c) {
        if(isalpha(*c)){
            st.push(string{*c});
        } 
        else { // if its an op
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            string s = t1 + t2 + string{*c};
            st.push(s);
        }
    }

    while (!st.empty()) {
        answer += st.top();
        st.pop();
    }

    return answer;
}


int main(){
    cout << prefix_to_postfix("*+AB-CD") << endl;

    return 0;
}