class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> f;
        int max=0;
        int odd=0;


        for(int i =0;i<s.size();i++){
            f[s[i]]++;
        }
        for (unordered_map<char, int>::iterator i = f.begin();
             i != f.end();
             i++){
            if((i->second)%2==0){
                max+=i->second;
                continue;
            }
            int temp = (i->second) -1;
            max+=temp;
            odd++;

        }
        if(odd>0){
            max++;
        }
        return max;
    }
};