class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for (int i = 0; i < tokens.size(); i++) {
            string token = tokens[i];
            
            // If it's an operator
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                
                if (token == "+") st.push(b + a);
                else if (token == "-") st.push(b - a);
                else if (token == "*") st.push(b * a);
                else if (token == "/") st.push(b / a);
            }
            // If it's a number
            else {
                st.push(stoi(token)); // convert string to integer
            }
        }
        
        return st.top();
    }
};
