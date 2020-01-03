// Prefix to infix conversion

#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

string prefix_to_infix(string input){
    stack<string> st;
    string answer; 
    
    for(auto c=input.end()-1; c>=input.begin(); --c){
        if(isalpha(*c))
            st.push(string {*c});
        else { // if an op
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            string s = "(" + t1 + string {*c} + t2 + ")";
            st.push(s);
        }
    }

    while(!st.empty()){
        answer += st.top();
        st.pop();
    }

    return answer;
}

int main(){
    cout << prefix_to_infix("*+AB-CD") << endl;
    return 0;
}