class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        // .toupper()
        int n=s.size();
        st.push(s[0]);
        int i =1;
        while(i<n){
            if(!st.empty() && (s[i] != st.top()) && (toupper(s[i]) == toupper(st.top()))){
                i++;
                
                st.pop();
                continue;
            }
            st.push(s[i]);
            i++;
            
        }
         string res = "";
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    
    
    reverse(res.begin(), res.end());
    
    return res;
        


        
        
    }
};