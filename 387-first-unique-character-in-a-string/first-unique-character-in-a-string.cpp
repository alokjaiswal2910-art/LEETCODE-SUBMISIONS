class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int> f;
        for (char c : s) {
        f[c]++;
    }
    
    // Step 2: String par dobara shuru se loop chalayein 
    // Taaki pehla unique character mil sake (Order maintain rahega)
    for (int i = 0; i < s.size(); i++) {
        if (f[s[i]] == 1) {
            return i; // Pehla unique character milte hi uska index return karein
        }
        
    }
    return -1;
        
    }
};