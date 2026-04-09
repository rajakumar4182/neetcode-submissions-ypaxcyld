
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto elem: s){
            if(elem == '(' || elem== '{' || elem=='['){
                st.push(elem);
            }
            else {
                if(st.empty()) return false;
                char top = st.top();
                if((elem ==')' && top == '(')
                || (elem == '}' && top=='{')
                || (elem==']' && top=='[')){
                    st.pop();
                }
                else{
                    return false;
                }
            }

        }
        return st.empty();
    }
};
