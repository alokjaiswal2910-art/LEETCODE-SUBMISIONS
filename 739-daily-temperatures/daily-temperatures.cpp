class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> res(n, 0);   // initialize with 0
        stack<int> st;           // stack of indices

        for (int i = 0; i < n; i++) {
            while (!st.empty() && temp[i] > temp[st.top()]) {
                int idx = st.top();
                st.pop();
                res[idx] = i - idx;   // difference in days
            }
            st.push(i);
        }
        return res;
    }
};
