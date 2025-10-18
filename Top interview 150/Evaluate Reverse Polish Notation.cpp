class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> st;
        for(int i=0; i<n; i++) {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                int o2 = st.top(); st.pop();
                int o1 = st.top(); st.pop();
                if(tokens[i] == "+") st.push(o1 + o2);
                else if(tokens[i] == "-") st.push(o1 - o2);
                else if(tokens[i] == "*") st.push(o1 * o2);
                else st.push(o1 / o2);
            }
            else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
