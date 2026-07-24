class Solution {
public:
    int strStr(string haystack, string needle) {
        int left=0;
        int right = needle.size()-1;
        if (haystack.size() < needle.size()) {
            return -1;
        }
        while (right<haystack.size()){
            int ned=0;
            if(haystack[left]!=needle[ned]){
                left++;
                right++;

            }
            int temp=left;

            while(temp<=right){
                if (haystack[temp]!=needle[ned]){
                 break;
                }
                temp++;
                ned++;
            }
            if (ned==needle.size()){
                return left;
            }
            left++;
            right++;
            
        }
        return -1;
        
    }
};