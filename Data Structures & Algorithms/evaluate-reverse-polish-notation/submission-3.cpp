class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int ans = 0;

        for(int i =0;i<tokens.size();i++){
            if(tokens[i] == "+"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                ans = n1 + n2;
                st.push(ans);
            }
            else if(tokens[i] == "-"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                ans = n2 - n1;
                st.push(ans);
            }
            else if(tokens[i] == "*"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                ans = n1 * n2;
                st.push(ans);
            }
            else if(tokens[i] == "/"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                ans = n2 / n1;
                st.push(ans);
            }
            else{
                st.push(stoi(tokens[i]));
            }

        }
        return st.top();
    }
};
