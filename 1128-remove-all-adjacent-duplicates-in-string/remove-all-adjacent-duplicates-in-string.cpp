class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n=s.size();
        int i =1;
        st.push(s[0]);

        while(i<n){
            if (!st.empty() && s[i] == st.top()){
                st.pop();
                i++;
                continue;
            }

            st.push(s[i]);
            i++;

             

        }
       
        string last = "";
        while (!st.empty()) {
            last += st.top();
            st.pop();
        }

        
        i = 0;
        int j = last.size() - 1;

        while (i < j) {
            swap(last[i], last[j]);
            i++;
            j--;
        }
        return last;


        
    }
};