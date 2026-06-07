// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

string postfixToInfix(string exp){
	stack<string> st;
	for(int i =0;i<exp.size();i++){
	    if((exp[i]>= 'A' && exp[i]<='Z') || (exp[i]>='a' && exp[i]<='z') || (exp[i]>='0' && exp[i]<='9')) st.push(string(1, exp[i]));
	    else{
	        string t1 = st.top();
	        st.pop();
	        string t2 = st.top();
	        st.pop();
	        string t3 = "(" + t2 + string(1, exp[i]) + t1 + ")";
	        st.push(t3);
	    }
	}
	return st.top();
}

int main() {
    string i = "abcd^e-*+";
    string newi = postfixToInfix(i);
    cout << newi;

    return 0;
}
