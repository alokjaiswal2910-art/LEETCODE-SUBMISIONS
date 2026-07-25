class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;

        for (int right = 0; right < s.size(); right++)
        {
            if (isalnum(s[right]))
            {
                s[left] = tolower(s[right]);
                left++;
            }
        }

        int len = left;

        left = 0;
        int right = len - 1;

        while (left < right)
        {
            if (s[left] != s[right])
                return false;

            left++;
            right--;
        }

        return true;
    }
};