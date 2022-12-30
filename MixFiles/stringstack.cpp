#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "harshit";
    stack<char> st;
    string newStr = "";
    for (int i = 0; i < str.size();i++){
        st.push(str[i]);
    }
    while(st.empty()==false){
        char ch = st.top();
        newStr += ch;
        st.pop();
    }
    cout << newStr;

    
}