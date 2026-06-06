// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int priority(char i){
    if (i== '^') return 3;
    else if (i== '*' || i == '/') return 2;
    else if (i== '+' || i == '-') return 1;
    else return -1;
}

string infixToPostfix(string exp){
	stack<int> st;
	string ans = "";
	for(int i =0;i<exp.size();i++){
	    if((exp[i]>= 'A' && exp[i]<='Z') || (exp[i]>='a' && exp[i]<='z') || (exp[i]>='0' && exp[i]<='9')) ans += exp[i];
	    else if(exp[i]=='(') st.push (exp[i]);
	    else if(exp[i]==')'){
	        while(!st.empty() && st.top() != '('){
	            ans += st.top();
	            st.pop();
	        }
	        st.pop();
	    }
	    else{
	        while(!st.empty() && priority(exp[i])<=priority(st.top())){
	            ans+=st.top();
	            st.pop();
	        }
	        st.push(exp[i]);
	    }
	}
	while(!st.empty()){
	    ans+=st.top();
	    st.pop();
	}
	return ans;
}

int main() {
    string i = "a+b*(c^d-e)";
    string newi = infixToPostfix(i);
    cout << newi;

    return 0;
}
