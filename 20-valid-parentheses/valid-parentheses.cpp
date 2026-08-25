class Solution {
public:
    bool isSame(char a, char b) {

        if (a == ')' && b == '(') {
            return true;
        }

        if (a == '}' && b == '{') {
            return true;
        }

        if (a == ']' && b == '[') {
            return true;
        }

        return false;
    }


    bool isValid(string s) {

        stack<char> st;

        int n = s.size();
        int i = 0;

        while (i < n) {

            // Opening bracket
            if (s[i] == '(' ||
                s[i] == '{' ||
                s[i] == '[') {

                st.push(s[i]);
            }

            // Closing bracket
            else {

                // No opening bracket available
                if (st.empty()) {
                    return false;
                }

                // Check if brackets match
                if (isSame(s[i], st.top())) {
                    st.pop();
                }
                else {
                    return false;
                }
            }

            i++;
        }

        // Stack should be empty
        return st.empty();
    }

};